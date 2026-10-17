from pathlib import Path
import subprocess

root = Path(__file__).resolve().parents[1]
binary = root / ".agent/build/character1_1_2"
binary.parent.mkdir(parents=True, exist_ok=True)
subprocess.run(
    ["clang", "-std=c17", "-Wall", "-Wextra", "-Werror", "-pedantic",
     "-fsanitize=undefined", str(root / "C/character1/1.2.c"), "-o", str(binary)],
    check=True,
)

cases = [
    ("5\n", "25\n", 0),
    ("-5\n", "25\n", 0),
    ("0\n", "0\n", 0),
    ("50000\n", "2500000000\n", 0),
    ("2147483647\n", "4611686014132420609\n", 0),
    ("-2147483648", "4611686018427387904\n", 0),
    ("", "", 1),
    ("abc\n", "", 1),
]
for input_text, expected, exit_code in cases:
    result = subprocess.run(
        [str(binary)], input=input_text, text=True,
        capture_output=True, timeout=5,
    )
    assert result.returncode == exit_code, (input_text, result.returncode)
    assert result.stdout == expected, (input_text, expected, result.stdout)
    assert result.stderr == "", result.stderr

print(f"通过 {len(cases)} 组平方计算及输入检查")
