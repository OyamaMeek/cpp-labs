# 当前进度

## 2026-11-09：洛谷 P1009

- [x] 读取题目及判题截图、目标源码、调用引用、现有测试与记录；题目范围为 1≤n≤50，原程序使用 int 保存阶乘和总和。
- [x] 添加真实编译运行测试；原程序在 n=13 时由 UndefinedBehaviorSanitizer 报告有符号整数溢出。
- [x] 改用十进制数组处理阶乘与求和进位；全部 1 至 50 输入与 Python 标准库计算结果一致，严格 C17 编译和 UndefinedBehaviorSanitizer 无异常。
- [x] 全仓库 pytest：7 项通过、2 项失败；`test_hdoj1000` 引用不存在的 `HDOJ/1000.cpp`，未修改的 `test_hdoj1003` 大输入检查超过 5 秒；范围外问题未改动。`git diff --check` 通过。
- [x] 修复、测试与开发记录已提交为 `2be6cdd fix: handle large factorial sums in P1009`，已普通推送至 `origin/main`；通过 GitHub 连接器核实远端为当前登录账号拥有的公开仓库。本条提交信息通过后续文档提交保存。

## 2026-11-07：洛谷 P5721

- [x] 读取代码、截图和项目记录；确认固定行宽偏移在第三行开始导致数字跳号，无外部调用方。
- [x] 原程序在 n=3 时最后一个数字错误输出 07，回归测试失败；改用 `num++` 连续输出后，样例及全部 13 个合法输入检查通过，C17 严格警告编译及 UndefinedBehaviorSanitizer 无异常。
- [x] 全仓库 pytest：7 项通过、1 项既有失败，`tests/test_hdoj1000.py::test_hdoj1000` 引用不存在的 `HDOJ/1000.cpp`；`git diff --check` 通过。
- [x] 开发日志已记录；未提交或推送，目标文件暂存区仅有创建注释，修复依赖用户未暂存的程序主体，无法独立提交完整程序，保留原暂存状态与其他用户改动。

## 2026-11-07：洛谷 P5707

- [x] 读取代码、截图和项目记录，确认整数除法舍去小数与小时借位错误；无外部调用方。
- [x] 新增回归测试，原程序在样例上输出 `08:49`，确认失败；修复后 12 组检查通过，严格编译及 UndefinedBehaviorSanitizer 无异常。
- [x] 全仓库 pytest：6 项通过，既有 `tests/test_hdoj1000.py::test_hdoj1000` 因 `HDOJ/1000.cpp` 不存在失败；`git diff --check` 通过。
- [x] 已记录验证结果；目标文件暂存区只有创建注释，修复依赖用户未暂存的主体，无法独立提交完整程序，未提交或推送，保留原暂存状态。

- [x] 读取目标文件、相邻练习、现有记录和 Git 状态；目标文件只有已暂存的创建注释。
- [x] 添加 10 组各位数字求和检查，初次因目标文件缺少声明和实现而编译失败。
- [x] 实现取余、除法循环；`python3 -m pytest -q` 共 5 项通过，严格编译与 UndefinedBehaviorSanitizer 检查通过，`git diff --check` 通过。
- [x] 更新开发记录并检查本次提交范围。
- [x] 功能提交 `6c3b291 feat: calculate integer digit sum` 已普通推送到 `origin/main`；后续文档提交补记交付结果。
- [x] 按后续要求将求和改用 `for` 循环；修改前原有 10 组检查通过。
- [x] 循环改写后全部 5 项 pytest 通过，包含本题 10 组检查；严格编译、UndefinedBehaviorSanitizer 和 `git diff --check` 通过。
- [x] 改写提交 `772d615 refactor: use for loop for digit sum` 已普通推送到 `origin/main`；位数获取方法在回复中说明。
- [x] 按用户最新要求将求和改回 `while` 循环。
- [x] 改回后全部 5 项 pytest 通过，包含本题 10 组检查；严格编译、UndefinedBehaviorSanitizer 和 `git diff --check` 通过。
- [x] 提交 `219d912 refactor: use while loop for digit sum` 已普通推送至 `origin/main`。

保留用户已有三个测试文件的修改，以及 `.idea/editor.xml`、`C/character1/1.2`、`C/character1/1.3.2`、`C/character1/2.1`、`../HDOJ/1000-1010/1001`。

## 2026-10-29：将 a 的值存入字符串

- [x] 在 `C/character4/section2/subsection3/test.c` 使用 `snprintf(name, sizeof name, "%d", a)` 替换固定字符串初始化；无外部调用、测试、配置或导出需要同步修改。
- [x] 修改前严格编译因 `a` 未使用失败；修改后 C17 严格编译和 UndefinedBehaviorSanitizer 运行通过，输出 `2`，`git diff --check` 通过。
- 保留 `name[5]`，最多保存 4 个字符及字符串结束符，满足当前 `a = 10`。
- 未提交或推送：目标文件原先只有创建注释已暂存，程序主体属于用户未暂存内容；本次转换语句依赖该主体，无法独立提交可运行代码而不纳入用户改动。

## 2026-10-30：初始化 HDU 1003 的每组答案

- [x] 在 `../HDOJ/1000-1010/1003.cpp` 每组数组读完后初始化 `maxSum = a[1]`、`start = 1`、`end = 1`，删除原有三个声明；未改变三重循环和输出方式。
- [x] 修改前运行检查，复现全负数、全零时最大和及位置错误；修改后 Clang C++17 编译成功，8 组真实输入检查通过，UndefinedBehaviorSanitizer 无异常，差异检查通过。
- 剩余问题：三重循环为 O(N³)，大规模输入有超时风险；变长数组仍有 Clang 扩展警告，未运行最大规模输入和全仓库测试。
- 未提交或推送：`../HDOJ/1000-1010/1003.cpp` 暂存区只有创建注释，程序主体属于用户未暂存改动，本次初始化无法独立提交可运行代码；保留原暂存状态。

## 2026-11-07：修复 HDU 1003 超时

- [x] 重新读取源文件、测试风格、持久记录和 Git 状态；`1003.cpp` 当前没有用户未提交改动。
- [x] 添加真实程序回归测试；原代码通过 11 组样例和边界检查，在最大规模输入上触发 5 秒超时。
- [x] 将三层循环替换为 O(N) 算法；11 组样例和边界检查、20 组每组 100000 个数的检查通过，AddressSanitizer/UndefinedBehaviorSanitizer 未报错。
- [x] 全仓库 pytest 为 5 项通过、1 项失败：既有 `tests/test_hdoj1000.py::test_hdoj1000` 引用了不存在的 `HDOJ/1000.cpp`，属于本次范围外问题，未修改；`git diff --check` 通过。
- [x] 开发日志及本次代码、测试和记录已提交为 `3647634 fix: avoid cubic runtime in HDU 1003`，已普通推送至 `origin/main`；本条提交信息通过后续文档提交保存。
- 保留用户的 `HDOJ/1000-1010/1002.cpp` 修改和全部既有未跟踪文件；现有变长数组仍依赖编译器扩展。
