from pathlib import Path
import subprocess


def test_character1_1_3_2():
    root = Path(__file__).resolve().parents[1]
    binary = root / ".agent/build/character1_1_3_2"
    binary.parent.mkdir(parents=True, exist_ok=True)
    subprocess.run(
        ["clang", "-std=c17", "-Wall", "-Wextra", "-Werror", "-pedantic",
         "-fsanitize=undefined", str(root / "C/character1/1.3.2.c"), "-o", str(binary)],
        check=True,
    )

    cases = [
        ("3 7\n", "3\n", 0),
        ("7 3\n", "3\n", 0),
        ("5 5\n", "5\n", 0),
        ("-3 -7\n", "-7\n", 0),
        ("-2 4\n", "-2\n", 0),
        ("0 4\n", "0\n", 0),
        ("2147483647\n-2147483648", "-2147483648\n", 0),
        ("", "", 1),
        ("3\n", "", 1),
        ("abc 3\n", "", 1),
        ("3 abc\n", "", 1),
    ]
    for input_text, expected, exit_code in cases:
        result = subprocess.run(
            [str(binary)], input=input_text, text=True,
            capture_output=True, timeout=5,
        )
        assert result.returncode == exit_code, (input_text, result.returncode)
        assert result.stdout == expected, (input_text, expected, result.stdout)
        assert result.stderr == "", result.stderr

    print(f"通过 {len(cases)} 组较小值及输入检查")
