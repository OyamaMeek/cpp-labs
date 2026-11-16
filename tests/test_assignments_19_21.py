from pathlib import Path
import subprocess

import pytest


CASES = {
    19: [("", "1534\n")],
    20: [("", "      *\n    * * *\n  * * * * *\n* * * * * * *\n"
              "\n      *\n    * * *\n  * * * * *\n* * * * * * *\n"
              "  * * * * *\n    * * *\n      *\n")],
    21: [("1 10", "17\n"), ("2 7", "17\n"), ("10 1", "17\n"),
         ("1 1", "0\n"), ("2 2", "2\n"), ("4 4", "0\n"),
         ("14 16", "0\n"), ("1 100", "1060\n"),
         ("2147483647 2147483647", "2147483647\n"),
         ("0 10", None), ("-1 10", None), ("1 0", None),
         ("1", None), ("abc", None), ("", None)],
}


@pytest.mark.parametrize("number", CASES)
def test_assignments_19_21(number):
    root = Path(__file__).resolve().parents[1]
    source = root / f"C/assignments/261115-92/{number}.c"
    assert source.is_file(), f"第 {number} 题缺少 C 文件"
    binary = root / f".agent/build/assignment_{number}"
    binary.parent.mkdir(parents=True, exist_ok=True)
    subprocess.run(
        ["clang", "-std=c17", "-Wall", "-Wextra", "-Werror",
         "-fsanitize=undefined", "-fno-sanitize-recover=undefined",
         str(source), "-o", str(binary)],
        check=True, capture_output=True, text=True,
    )
    for input_text, expected in CASES[number]:
        result = subprocess.run(
            [str(binary)], input=input_text, text=True,
            capture_output=True, timeout=5,
        )
        assert result.stderr == "", (number, input_text, result.stderr)
        assert result.returncode == (1 if expected is None else 0)
        assert result.stdout == ("" if expected is None else expected)


def test_is_prime():
    root = Path(__file__).resolve().parents[1]
    binary = root / ".agent/build/test_is_prime"
    binary.parent.mkdir(parents=True, exist_ok=True)
    subprocess.run(
        ["clang", "-std=c17", "-Wall", "-Wextra", "-Werror",
         "-fsanitize=undefined", "-fno-sanitize-recover=undefined",
         "-I", str(root), "-x", "c", "-", "-o", str(binary)],
        input='''#include <assert.h>
#define main assignment_21_main
#include "C/assignments/261115-92/21.c"
#undef main
int main(void)
{
    assert(is_prime(-5) == 0);
    assert(is_prime(0) == 0);
    assert(is_prime(1) == 0);
    assert(is_prime(2) == 1);
    assert(is_prime(3) == 1);
    assert(is_prime(4) == 0);
    assert(is_prime(49) == 0);
    assert(is_prime(97) == 1);
    assert(is_prime(2147483646) == 0);
    assert(is_prime(2147483647) == 1);
    return 0;
}
''', check=True, capture_output=True, text=True,
    )
    result = subprocess.run([str(binary)], capture_output=True, text=True, timeout=5)
    assert result.returncode == 0, result.stderr
    assert result.stdout == result.stderr == ""
