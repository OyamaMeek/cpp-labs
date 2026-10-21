from pathlib import Path
import subprocess


def test_hdu2084():
    root = Path(__file__).resolve().parents[1]
    binary = root / ".agent/build/hdu2084"
    binary.parent.mkdir(parents=True, exist_ok=True)
    subprocess.run(
        ["clang++", "-std=c++17", "-Wall", "-Wextra", "-Werror", "-pedantic",
         "-fsanitize=address,undefined", str(root / "HDOJ/HDU2084.cpp"),
         "-o", str(binary)],
        check=True,
    )

    maximum_tower = "\n".join(" ".join(["99"] * row) for row in range(1, 101))
    cases = [
        ("1\n5\n9\n12 15\n10 6 8\n2 18 9 5\n19 7 10 4 16\n", "59\n", 0),
        ("1\n1\n7", "7\n", 0),
        ("1\n5\n7\n3 8\n8 1 0\n2 7 4 4\n4 5 2 6 5\n", "30\n", 0),
        ("1\n3\n1\n9 1\n0 0 99\n", "101\n", 0),
        ("2\n3\n1\n9 0\n9 0 0\n3\n1\n0 9\n0 0 9\n", "19\n19\n", 0),
        ("2\n3\n0\n0 0\n0 0 0\n1\n99\n", "0\n99\n", 0),
        (f"2\n100\n{maximum_tower}\n1\n0\n", "9900\n0\n", 0),
        ("0\n", "", 0),
        ("", "", 1),
        ("abc\n", "", 1),
        ("-1\n", "", 1),
        ("1\n", "", 1),
        ("1\n0\n", "", 1),
        ("1\n101\n", "", 1),
        ("1\n2\n1\n2\n", "", 1),
        ("1\n1\nabc\n", "", 1),
    ]
    for input_text, expected, exit_code in cases:
        result = subprocess.run(
            [str(binary)], input=input_text, text=True,
            capture_output=True, timeout=5,
        )
        assert result.returncode == exit_code, (input_text, result.returncode, result.stderr)
        assert result.stdout == expected, (input_text, expected, result.stdout)
        assert result.stderr == "", result.stderr
