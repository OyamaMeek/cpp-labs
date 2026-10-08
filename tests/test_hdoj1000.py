from pathlib import Path
import subprocess

root = Path(__file__).resolve().parents[1]
binary = root / ".agent/build/hdoj1000"
binary.parent.mkdir(parents=True, exist_ok=True)
subprocess.run(
    ["clang++", "-std=c++17", "-Wall", "-Wextra", "-pedantic",
     str(root / "HDOJ/1000.cpp"), "-o", str(binary)],
    check=True,
)

cases = [
    ("1 1\n", "2\n"),
    ("1 1\n-3 5\n0 0\n-4 -6\n", "2\n2\n0\n-10\n"),
    ("", ""),
    ("10 20", "30\n"),
    ("2147483647 1\n", "2147483648\n"),
]
for input_text, expected in cases:
    result = subprocess.run(
        [str(binary)], input=input_text, text=True,
        capture_output=True, check=True, timeout=5,
    )
    assert result.stdout == expected, (input_text, expected, result.stdout)
    assert result.stderr == "", result.stderr

print(f"通过 {len(cases)} 组输入输出检查")
