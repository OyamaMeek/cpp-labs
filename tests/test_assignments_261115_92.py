from pathlib import Path
import subprocess

import pytest


CASES = {
    2: [("0", 10), ("8", 146), ("-1", -7), ("9", -2187),
        ("0.5", 11), ("", None), ("abc", None), ("nan", None)],
    4: [("2 3", 13), ("-2 -3", -5), ("2 -3", -1), ("-2 3", -5),
        ("0 3", 9), ("0 -3", -3), ("-2 0", -2), ("0 0", 0),
        ("1.5 2", 6.25), ("2", None), ("nan 1", None)],
    5: [("3 4 5", 6), ("5 3 4", 6), ("1 1 1", 0.4330127019),
        ("1 2 3", "Cannot form a triangle!\n"),
        ("3 1 1", "Cannot form a triangle!\n"),
        ("0 4 5", "Cannot form a triangle!\n"),
        ("-1 4 5", "Cannot form a triangle!\n"), ("3 4", None)],
    7: [("2024 1 1", 1), ("2024 2 29", 60), ("2024 3 1", 61),
        ("2023 3 1", 60), ("1900 3 1", 60), ("2000 3 1", 61),
        ("2024 12 31", 366), ("2023 12 31", 365),
        ("2023 2 29", None), ("1900 2 29", None), ("2024 4 31", None),
        ("2024 0 1", None), ("2024 13 1", None), ("2024 1 0", None),
        ("0 1 1", None), ("2024 1", None)],
    8: [("5\n1 2 3 4 5", 15), ("4\n-3 2 -5 0", 15),
        ("3\n2 0 4", 1), ("1\n-7", -7),
        ("1\n9223372036854775807", "9223372036854775807\n"),
        ("2\n9223372036854775807 3", None),
        ("2\n-9223372036854775807 3", None),
        ("2\n-9223372036854775807 -3", None),
        ("2\n9223372036854775807 -3", None),
        ("0", None), ("2\n1", None)],
    9: [("12345", 15), ("10020", 3), ("7", 7),
        ("9223372036854775807", 88), ("0", None), ("-123", None),
        ("", None), ("abc", None)],
    10: [("6\n-3 0 4 -2 0 8", "2 2 2\n"),
         ("3\n1 2 3", "0 0 3\n"), ("3\n-1 -2 -3", "3 0 0\n"),
         ("3\n0 -0 0.0", "0 3 0\n"), ("3\n-0.5 0 0.5", "1 1 1\n"),
         ("0", None), ("2\n1", None), ("1\nnan", None)],
    12: [("1 2 3 4 5 6 7 8 9 10", 5.5),
         ("9 9 9 9 9 9 9 9 9 9", 9),
         ("1 1 2 3 4 5 6 7 9 9", 4.625),
         ("8.5 8.5 8.5 8.5 8.5 8.5 8.5 8.5 8.5 8.5", 8.5),
         ("1 2 3", None), ("nan 2 3 4 5 6 7 8 9 10", None)],
    14: [("", "153\n370\n371\n407\n")],
    15: [("", 0.6808033818)],
}


@pytest.mark.parametrize("number", CASES)
def test_assignments_261115_92(number):
    root = Path(__file__).resolve().parents[1]
    source = root / f"C/assignments/261115-92/{number}.c"
    assert source.is_file(), f"第 {number} 题缺少 C 文件"
    binary = root / f".agent/build/assignment_261115_92_{number}"
    binary.parent.mkdir(parents=True, exist_ok=True)
    subprocess.run(
        ["clang", "-std=c17", "-Wall", "-Wextra", "-Werror",
         "-fsanitize=undefined", "-fno-sanitize-recover=undefined",
         str(source), "-lm", "-o", str(binary)],
        check=True, capture_output=True, text=True,
    )
    for input_text, expected in CASES[number]:
        result = subprocess.run(
            [str(binary)], input=input_text, text=True,
            capture_output=True, timeout=5,
        )
        assert result.stderr == "", (number, input_text, result.stderr)
        assert result.returncode == (1 if expected is None else 0), (
            number, input_text, result.returncode,
        )
        if expected is None:
            assert result.stdout == "", (number, input_text, result.stdout)
        elif isinstance(expected, str):
            assert result.stdout == expected, (number, input_text, result.stdout)
        else:
            assert float(result.stdout) == pytest.approx(expected, rel=1e-9), (
                number, input_text, result.stdout,
            )
