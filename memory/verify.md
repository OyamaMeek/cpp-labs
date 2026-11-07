# 完成标准

## 洛谷 P5721

- 先运行 `python3 -m pytest -q tests/test_luogu5721.py`，确认原程序数字跳号导致失败。
- 修复后检查题目样例、全部 1 至 13 输入的行长度、连续数字、前导零及末尾换行；使用 C17 严格警告及 UndefinedBehaviorSanitizer 编译运行。
- 运行全仓库 pytest 与 `git diff --check`，如实记录既有失败，保留用户已有暂存状态。

## 洛谷 P5707

- 先运行 `python3 -m pytest -q tests/test_luogu5707.py`，确认原程序在样例上失败；修复后检查 12 组输入。
- 使用 clang C17 严格警告和 UndefinedBehaviorSanitizer 编译、运行实际程序；运行全仓库 pytest，并如实记录既有失败。
- 执行 `git diff --check`；保留其他用户修改及目标文件原有暂存内容。

- 执行 `python3 -m pytest -q tests/test_character1_261024.py`：使用 clang C17、严格警告及 UndefinedBehaviorSanitizer 编译并运行真实目标文件。
- 检查 12345 输出 15、零、单个数字、含零整数、负数、32 位整数两端边界、空输入和非数字输入。
- 执行 `python3 -m pytest -q`，确认全部现有测试通过；原有测试文件包含用户修改，保留其内容。
- 编译无警告，程序正常退出，输出与预期完全一致。
- 执行 `git diff --check`，检查实际暂存内容，不包含其他已有修改或编译产物。
- 当前测试通过 pytest 发现并执行；未确认配置生效的 hooks 不作为验证证据。

# HDU 1003 完成标准

- `python3 -m pytest -q tests/test_hdoj1003.py`：编译实际源文件并运行，检查题目样例、全负数、全零、单元素、最优区间在中间或末尾以及并列结果。
- 20 组每组 100000 个数的输入在 5 秒内完成并给出正确答案；修改前测试应因超时失败。
- 编译启用 AddressSanitizer/UndefinedBehaviorSanitizer，检查实际程序无运行时异常；保留原有变长数组，不声称已符合严格 ISO C++。
- 执行全仓库 `python3 -m pytest -q`，如有既有失败如实记录；执行 `git diff --check` 并检查提交范围。
