from pathlib import Path
import subprocess


def test_luogu5723():
    root = Path(__file__).resolve().parents[1]
    binary = root / ".agent/build/luogu5723"
    binary.parent.mkdir(parents=True, exist_ok=True)
    subprocess.run(
        ["clang", "-std=c17", "-Wall", "-Wextra", "-Werror",
         "-fsanitize=undefined", "-fno-sanitize-recover=undefined",
         str(root / "C/luogu/LoopStructure/5723.c"), "-o", str(binary)],
        check=True,
    )

    for limit, expected in [
        (100, "2\n3\n5\n7\n11\n13\n17\n19\n23\n9\n"),
        (1, "0\n"),
        (2, "2\n1\n"),
        (3, "2\n1\n"),
        (4, "2\n1\n"),
        (5, "2\n3\n2\n"),
        (9, "2\n3\n2\n"),
        (10, "2\n3\n5\n3\n"),
        (17, "2\n3\n5\n7\n4\n"),
    ]:
        result = subprocess.run(
            [str(binary)], input=f"{limit}\n", text=True,
            capture_output=True, timeout=5,
        )
        assert result.returncode == 0, (limit, result.stderr)
        assert result.stderr == "", (limit, result.stderr)
        assert result.stdout == expected, (limit, result.stdout, expected)

    result = subprocess.run(
        [str(binary)], input="100000\n", text=True,
        capture_output=True, timeout=5, check=True,
    )
    values = list(map(int, result.stdout.splitlines()))
    assert values[-2:] == [1151, 190]
    assert sum(values[:-1]) == 99685
    assert result.stderr == ""

    for invalid in ("", "abc\n", "0\n", "-1\n"):
        result = subprocess.run(
            [str(binary)], input=invalid, text=True,
            capture_output=True, timeout=5,
        )
        assert result.returncode == 1, (invalid, result.stderr)
        assert result.stdout == ""
        assert result.stderr == ""
