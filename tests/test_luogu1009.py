from math import factorial
from pathlib import Path
import subprocess


def test_luogu1009():
    root = Path(__file__).resolve().parents[1]
    binary = root / ".agent/build/luogu1009"
    binary.parent.mkdir(parents=True, exist_ok=True)
    subprocess.run(
        ["clang", "-std=c17", "-Wall", "-Wextra", "-Werror",
         "-fsanitize=undefined", "-fno-sanitize-recover=undefined",
         str(root / "C/luogu/LoopStructure/1009.c"), "-o", str(binary)],
        check=True,
    )

    for n in range(1, 51):
        result = subprocess.run(
            [str(binary)], input=f"{n}\n", text=True,
            capture_output=True, timeout=5,
        )
        assert result.returncode == 0, (n, result.stderr)
        assert result.stderr == "", (n, result.stderr)
        expected = sum(factorial(i) for i in range(1, n + 1))
        assert result.stdout == f"{expected}\n", (n, result.stdout, expected)
