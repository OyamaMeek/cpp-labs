# 完成标准

## 2026-11-21：洛谷 P5727

- C17 严格警告和 UndefinedBehaviorSanitizer 编译真实程序；修复前空输入已报告下标 120 越界。
- 检查 20 的完整倒序输出，全部 1 至 100 输入的起点、终点及相邻项关系；检查 27 和 97 的序列长度，以及无效输入退出。
- 执行针对性测试、全仓库 pytest 和 `git diff --check`，如实记录失败；不暂存用户已有修改。

## 2026-11-16：提取 is_prime 函数

- 函数测试直接编译并调用真实 `21.c`，覆盖负数、0、1、2、普通素数、合数、完全平方数及 int 上界。
- 执行 `python3 -m pytest -q tests/test_assignments_19_21.py`，使用 C17 严格警告和 UndefinedBehaviorSanitizer 检查，确认原有 17 组程序行为不变。
- 执行全仓库 pytest 并如实记录失败；`git diff --check` 检查差异，仅提交本次改动文件。

## 2026-11-16：教材第 19、20、21 题

- 先运行 `python3 -m pytest -q tests/test_assignments_19_21.py`，确认三题文件缺失；实现后使用严格 C17 警告及 UndefinedBehaviorSanitizer 编译运行。
- 检查第 19 题输出 1534；第 20 题逐行核对星号、缩进、空行和换行；第 21 题覆盖端点素数、1、无素数、相同端点、倒序端点、int 上界和无效输入。
- 执行全仓库 pytest，记录实际失败；执行 `git diff --check` 并核对提交范围，不修改原有练习和用户未跟踪文件。

## 2026-11-15：教材第 92 页勾选题

- 执行 `python3 -m pytest -q tests/test_assignments_261115_92.py`，编译并实际运行全部十题；新增前确认 2.c 的公式问题及八个缺失文件，14.c 先验证既有实现。
- 使用 C17、`-Wall -Wextra -Werror` 和 UndefinedBehaviorSanitizer；检查分段函数边界、三角形失败提示、闰年和非法日期、奇数负数及溢出、数字之和、正负零计数、并列最高最低分、水仙花数和交错级数。
- 执行全仓库 pytest，记录实际失败及范围；执行 `git diff --check`，检查仅修改勾选题、对应测试和必要记录。

## 洛谷 P5723

- 先运行新增回归测试，确认原程序在 L=100 时缺少质数输出并错误计数。
- 重写后使用 C17 严格警告与 UndefinedBehaviorSanitizer 编译并运行样例、承重边界、较大输入与读取失败检查。
- 运行全仓库 pytest 并记录范围外失败；执行 `git diff --check`，仅提交本次任务文件，保留其他暂存内容。

## 洛谷 P1009

- 先运行 `python3 -m pytest -q tests/test_luogu1009.py`，确认原程序在 n=13 时发生有符号整数溢出。
- 修复后以 C17 严格警告和 UndefinedBehaviorSanitizer 编译，逐一核对全部 1 至 50 的输入，包括题目样例和上限。
- 运行全仓库 pytest，记录实际结果及既有失败；执行 `git diff --check`，检查提交范围后普通推送。

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
