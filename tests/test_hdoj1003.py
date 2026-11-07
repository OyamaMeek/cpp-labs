from pathlib import Path
import subprocess


def test_hdoj1003():
    root = Path(__file__).resolve().parents[1]
    binary = root / ".agent/build/hdoj1003"
    binary.parent.mkdir(parents=True, exist_ok=True)
    subprocess.run(
        ["clang++", "-std=c++17", "-Wall", "-Wextra",
         "-fsanitize=address,undefined",
         str(root / "HDOJ/1000-1010/1003.cpp"), "-o", str(binary)],
        check=True,
    )

    cases = [
        ("5 6 -1 5 4 -7", "14 1 4"),
        ("7 0 6 -1 1 -6 7 -5", "7 1 6"),
        ("4 -5 -2 -2 -8", "-2 2 2"),
        ("4 0 0 0 0", "0 1 1"),
        ("1 -1000", "-1000 1 1"),
        ("1 1000", "1000 1 1"),
        ("5 -3 4 5 -2 -9", "9 2 3"),
        ("4 -4 2 -3 5", "5 4 4"),
        ("4 1 -1 1 -1", "1 1 1"),
        ("4 -1 0 0 1", "1 2 4"),
        ("3 5 -1 -1", "5 1 1"),
    ]
    input_text = str(len(cases)) + "\n" + "\n".join(row for row, _ in cases) + "\n"
    expected = "".join(
        f"Case {index}:\n{answer}\n\n"
        for index, (_, answer) in enumerate(cases, 1)
    )
    result = subprocess.run(
        [str(binary)], input=input_text, text=True,
        capture_output=True, check=True, timeout=5,
    )
    assert result.stdout == expected
    assert result.stderr == "", result.stderr

    input_text = "20\n" + ("100000 " + "1000 " * 100000 + "\n") * 20
    expected = "".join(
        f"Case {index}:\n100000000 1 100000\n\n" for index in range(1, 21)
    )
    result = subprocess.run(
        [str(binary)], input=input_text, text=True,
        capture_output=True, check=True, timeout=5,
    )
    assert result.stdout == expected
    assert result.stderr == "", result.stderr
