from pathlib import Path
import subprocess


def test_character1_261024():
    root = Path(__file__).resolve().parents[1]
    binary = root / ".agent/build/character1_261024"
    binary.parent.mkdir(parents=True, exist_ok=True)
    subprocess.run(
        ["clang", "-std=c17", "-Wall", "-Wextra", "-Werror", "-pedantic",
         "-fsanitize=undefined", str(root / "C/character1/261024.c"), "-o", str(binary)],
        check=True,
    )

    cases = [
        ("12345\n", "15\n", 0),
        ("0\n", "0\n", 0),
        ("7\n", "7\n", 0),
        ("10020\n", "3\n", 0),
        ("-12345\n", "15\n", 0),
        ("-7\n", "7\n", 0),
        ("2147483647\n", "46\n", 0),
        ("-2147483648", "47\n", 0),
        ("", "", 1),
        ("abc\n", "", 1),
    ]
    for input_text, expected, exit_code in cases:
        result = subprocess.run(
            [str(binary)], input=input_text, text=True,
            capture_output=True, timeout=5,
        )
        assert result.returncode == exit_code, (input_text, result.returncode, result.stderr)
        assert result.stdout == expected, (input_text, expected, result.stdout)
        assert result.stderr == "", result.stderr
