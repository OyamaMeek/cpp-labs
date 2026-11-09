## [2026-10-08 19:26] HDOJ 1000：读取到 EOF 并计算 A + B

- **需求/问题描述**：
  > 将题目的 C++ 解答写入 `../HDOJ/1000-1010/1000.cpp`，每组输入输出 A + B，处理至 EOF。

- **实际实现的功能与改动**：
  - 使用 `long long` 保存输入，通过 `while (cin >> a >> b)` 处理所有输入，每组输出和及换行。
  - 添加实际编译和输入输出检查；初次运行因缺少 `main()` 链接失败，实现后五组检查通过，编译无警告。
  - 覆盖样例、多组输入、负数、零、空输入、末行无换行和超过 32 位的和；`git diff --check` 通过。
  - 初始化项目协作记录，并忽略 `.agent/build/` 编译产物。

- **涉及文件**：
  - `../HDOJ/1000-1010/1000.cpp`
  - `tests/test_hdoj1000.py`
  - `.gitignore`
  - `memory/agents.md`、`memory/plan.md`、`memory/progress.md`、`memory/verify.md`、`memory/gotchas.md`
  - `docs/CHANGELOG.md`

- **Git 提交**：`ff71c69 feat: solve HDOJ 1000 with EOF input`，已推送到 `origin/main`；此提交信息通过后续文档提交补记。

---

## [2026-10-17 11:02] C 第一章 1.2：计算整数平方

- **需求/问题描述**：
  > 根据题目图片第（2）题完成 `C/character1/1.2.c`，输入一个整数，计算并输出其平方。

- **实际实现的功能与改动**：
  - 使用 `scanf` 读取一个 `int`，以 `long long` 计算平方并输出换行；读取失败时返回 1。
  - 添加真实编译和输入输出检查；初次因目标文件仅有注释而编译失败，实现后 8 组检查通过。
  - 严格编译警告及 UndefinedBehaviorSanitizer 检查通过，覆盖正负数、零、32 位整数边界、空输入和非数字输入。
  - 原有 HDOJ 1000 的 5 组检查通过，`git diff --check` 通过。

- **涉及文件**：
  - `C/character1/1.2.c`
  - `tests/test_character1_1_2.py`
  - `memory/agents.md`、`memory/plan.md`、`memory/progress.md`、`memory/verify.md`
  - `docs/CHANGELOG.md`

- **Git 提交**：`25bd2db feat: complete integer square exercise`；此提交信息通过后续文档提交补记。

---

## [2026-10-17 11:11] C 第一章 1.3.2：输出两个整数中的较小值

- **需求/问题描述**：
  > 根据题目图片第（3）题完成 `C/character1/1.3.2.c`，输入两个数后输出其中较小值。

- **实际实现的功能与改动**：
  - 沿用相邻练习的整数输入，使用 `if/else` 比较并输出较小值及换行；读取失败时返回 1。
  - 添加实际编译与输入输出检查；初次因缺少实现而编译失败，实现后 11 组检查通过。
  - 覆盖输入顺序、相等、负数、零、整数边界、空输入、缺少第二个整数及非数字输入；严格编译和 UndefinedBehaviorSanitizer 检查通过。
  - 原有平方计算 8 组及 HDOJ 1000 的 5 组检查通过，`git diff --check` 通过。

- **涉及文件**：
  - `C/character1/1.3.2.c`
  - `tests/test_character1_1_3_2.py`
  - `memory/plan.md`、`memory/progress.md`、`memory/verify.md`
  - `docs/CHANGELOG.md`

- **Git 提交**：`fcbb409 feat: complete smaller integer exercise`；此提交信息通过后续文档提交补记。

---

## [2026-10-21 13:58] HDU 2084：数塔最大路径和

- **需求/问题描述**：
  > 根据用户提供的数塔图片完成 `HDOJ/HDU2084.cpp`。

- **实际实现的功能与改动**：
  - 使用自底向上动态规划计算最大路径和，处理多组数据；时间与空间复杂度均为 O(N²)。
  - 检查读取结果及 1 至 100 层的数组边界，不完整或非法输入返回 1。
  - 新增真实编译与运行测试；初次因缺少 `main()` 链接失败，实现后 16 组检查通过，图片数塔输出 59。
  - `python3 -m pytest -q` 共 4 项通过，包含已有 24 组输入检查；严格编译、AddressSanitizer/UndefinedBehaviorSanitizer 和 `git diff --check` 通过。

- **涉及文件**：
  - `HDOJ/HDU2084.cpp`、`tests/test_hdu2084.py`
  - `memory/agents.md`、`memory/plan.md`、`memory/progress.md`、`memory/verify.md`
  - `docs/CHANGELOG.md`

- **Git 提交**：`0cf5211 feat: solve HDU 2084 number tower`，已普通推送至 `origin/main`；此提交信息通过后续文档提交补记。

---

## [2026-10-24 10:30] C 整数各位数字之和

- **需求/问题描述**：
  > 在 `C/character1/261024.c` 中输入一个整数，输出每一位数字的和。

- **实际实现的功能与改动**：
  - 使用取余和整除循环求和，支持零、负数和 `int` 边界；负号不参与求和，读取失败返回 1。
  - 新增 10 组真实编译与运行检查，初次因缺少实现而编译失败；实现后 `python3 -m pytest -q` 共 5 项通过。
  - 严格编译、UndefinedBehaviorSanitizer 和 `git diff --check` 通过。

- **涉及文件**：
  - `C/character1/261024.c`、`tests/test_character1_261024.py`
  - `memory/plan.md`、`memory/progress.md`、`memory/verify.md`
  - `docs/CHANGELOG.md`

- **Git 提交**：`6c3b291 feat: calculate integer digit sum`，已普通推送至 `origin/main`；此提交信息通过后续文档提交补记。

---

## [2026-10-24 10:32] 用 for 循环计算数字之和

- **需求/问题描述**：
  > 说明如何获取整数位数，将 `261024.c` 中的求和改用 `for` 循环。

- **实际实现的功能与改动**：
  - 将整除操作移到 `for` 更新表达式，保留输入校验和正负整数、零的求和结果。
  - 位数计算通过回复中的整除计数示例说明，程序继续只输出数字之和。
  - 修改前本题 10 组检查通过；修改后全部 5 项 pytest 通过，严格编译、UndefinedBehaviorSanitizer 和 `git diff --check` 通过。

- **涉及文件**：
  - `C/character1/261024.c`、`memory/plan.md`、`memory/progress.md`、`docs/CHANGELOG.md`

- **Git 提交**：`772d615 refactor: use for loop for digit sum`，已普通推送至 `origin/main`；此提交信息通过后续文档提交补记。

---

## [2026-10-24 10:35] 使用 while 循环计算数字之和

- **需求/问题描述**：
  > 将 `261024.c` 改回 `while` 循环。

- **实际实现的功能与改动**：
  - 使用 `while (num != 0)`，在循环中累加末位并执行 `num /= 10`。
  - 全部 5 项 pytest 通过，包含本题 10 组检查；严格编译、UndefinedBehaviorSanitizer 和 `git diff --check` 通过。

- **涉及文件**：
  - `C/character1/261024.c`、`memory/plan.md`、`memory/progress.md`、`docs/CHANGELOG.md`

- **Git 提交**：`219d912 refactor: use while loop for digit sum`，已普通推送至 `origin/main`；此提交信息通过后续文档提交补记。

---

## [2026-10-29 14:36] 将整数 a 转成字符串

- **需求/问题描述**：
  > 将 `a` 的值放入 `test.c` 中 `name` 的字符串位置。

- **实际实现的功能与改动**：
  - 使用 `snprintf(name, sizeof name, "%d", a)`，将当前整数 `10` 转成字符串 `"10"`；保留字符串长度输出。
  - 修改前严格编译因 `a` 未使用失败；修改后 C17 严格编译、UndefinedBehaviorSanitizer 运行和 `git diff --check` 通过，程序输出 `2`。
  - 保留 5 字节数组，最多保存 4 个字符及字符串结束符；未运行全仓库测试。

- **涉及文件**：
  - `C/character4/section2/subsection3/test.c`（+2 / -1）、`memory/progress.md`、`docs/CHANGELOG.md`

- **Git 提交**：未提交或推送；转换语句依赖用户尚未暂存的程序主体，无法独立提交可运行代码而不纳入用户已有改动，保留原暂存状态。

---

## [2026-10-30 22:17] 初始化 HDU 1003 的每组答案

- **需求/问题描述**：
  > 将 `maxSum = a[1]`、`start = 1`、`end = 1` 写入每组测试的正确位置。

- **实际实现的功能与改动**：
  - 在每组数组读完后声明并初始化三个变量，删除原有声明，避免全负数返回零及起止位置沿用上一组。
  - 修改前复现目标问题；修改后 Clang C++17 编译成功，样例、全负数、全零、单元素、首元素最大、并列结果及多组连续输入共 8 组检查通过，UndefinedBehaviorSanitizer 无异常，差异检查通过。
  - 保留三重循环和输出方式；未运行最大规模输入和全仓库测试，变长数组仍有编译警告。

- **涉及文件**：
  - `../HDOJ/1000-1010/1003.cpp`（+3 / -3）、`memory/progress.md`、`docs/CHANGELOG.md`

- **Git 提交**：未提交或推送；目标文件暂存区只有创建注释，初始化语句依赖用户未暂存的程序主体，无法独立提交可运行代码，保留原暂存状态。

---

## [2026-11-07 11:03] 修复 HDU 1003 最大连续区间和超时

- **需求/问题描述**：
  > 直接修改 `1003.cpp` 的超时实现，便于查看区别。

- **实际实现的功能与改动**：
  - 将三层枚举循环替换为 Kadane 单次遍历，时间复杂度由 O(N³) 降为 O(N)；保留输入、输出和数组结构。
  - 使用当前和与候选起点；当前和小于零时重新开始，严格更大的答案才更新，覆盖全负数和并列结果。
  - 修改前真实程序通过 11 组样例与边界检查，在最大规模输入上触发 5 秒超时；修改后上述检查以及 20 组每组 100000 个数的检查通过，AddressSanitizer/UndefinedBehaviorSanitizer 无异常。
  - 全仓库 `python3 -m pytest -q`：5 项通过，既有 `test_hdoj1000` 因引用不存在的 `HDOJ/1000.cpp` 失败；`git diff --check` 通过。保留原变长数组，编译器仍提示 C++ 扩展警告。

- **涉及文件**：
  - `HDOJ/1000-1010/1003.cpp`、`tests/test_hdoj1003.py`
  - `memory/plan.md`、`memory/progress.md`、`memory/verify.md`、`docs/CHANGELOG.md`

- **Git 提交**：`3647634 fix: avoid cubic runtime in HDU 1003`，已普通推送至 `origin/main`；此提交信息通过后续文档提交保存。

---

## [2026-11-07 16:31] 修复洛谷 P5707 出门时间计算

- **需求/问题描述**：
  > 根据题目截图修正 `C/luogu/SequentialStructure/5707.c`。

- **实际实现的功能与改动**：
  - 步行分钟数使用整数向上取整，加入垃圾分类 10 分钟；通过总分钟数计算出门时间，按一天取模处理跨午夜。
  - 读取失败或非正整数输入返回 1；题目注释上限按截图补为 10^4。
  - 修改前样例错误输出 `08:49`，修复后为 `07:48`；本题 12 组真实输入检查通过，覆盖整点、跨午夜、上限和读取失败，严格 C17 编译与 UndefinedBehaviorSanitizer 无异常。
  - 全仓库 pytest 为 6 项通过、1 项既有失败：`test_hdoj1000` 引用不存在的 `HDOJ/1000.cpp`；`git diff --check` 通过。

- **涉及文件**：
  - `C/luogu/SequentialStructure/5707.c`、`tests/test_luogu5707.py`
  - `memory/plan.md`、`memory/progress.md`、`memory/verify.md`、`docs/CHANGELOG.md`

- **Git 提交**：未提交或推送；目标文件暂存区只有创建注释，本次修复依赖用户未暂存的程序主体，无法独立提交完整程序，保留原暂存状态。

---

## [2026-11-07 18:04] 修复洛谷 P5721 数字直角三角形

- **需求/问题描述**：
  > 根据题目截图修正 `C/luogu/LoopStructure/5721.c`。

- **实际实现的功能与改动**：
  - 将固定行宽偏移公式替换为从 1 开始的递增计数器；保留递减行长度和 `%02d` 两位数字格式。
  - 原程序在 n=3 时将最后一个数字错误输出为 07；修改后样例及全部 1 至 13 输入的连续数字、行长度、前导零和末尾换行检查通过，C17 严格警告编译与 UndefinedBehaviorSanitizer 无异常。
  - 全仓库 pytest：7 项通过、1 项既有失败，`test_hdoj1000` 引用不存在的 `HDOJ/1000.cpp`；`git diff --check` 通过。

- **涉及文件**：
  - `C/luogu/LoopStructure/5721.c`、`tests/test_luogu5721.py`
  - `memory/agents.md`、`memory/plan.md`、`memory/progress.md`、`memory/verify.md`、`docs/CHANGELOG.md`

- **Git 提交**：未提交或推送；目标文件暂存区只有创建注释，修复依赖用户未暂存的程序主体，无法独立提交完整程序，保留原暂存状态。

---

## [2026-11-09 19:17] 修复洛谷 P1009 阶乘之和溢出

- **需求/问题描述**：
  > 根据题目与两个 WA 测试点的截图检查并修正 `1009.c`。

- **实际实现的功能与改动**：
  - 用两个十进制数组分别保存阶乘和累加和，逐位处理乘法、加法进位，倒序输出有效数字；100 位容量覆盖题目 n≤50 的结果。
  - 原程序在 n=13 时由 UndefinedBehaviorSanitizer 报告有符号整数溢出；修复后全部 1 至 50 输入与 Python 标准库阶乘求和一致，C17 严格警告编译及 UndefinedBehaviorSanitizer 检查通过。
  - 全仓库 pytest：7 项通过、2 项失败；`test_hdoj1000` 引用不存在的 `HDOJ/1000.cpp`，`test_hdoj1003` 大输入检查超过 5 秒。两项均不涉及本次修改，未处理；`git diff --check` 通过。未向洛谷重新提交。

- **涉及文件**：
  - `C/luogu/LoopStructure/1009.c`、`tests/test_luogu1009.py`
  - `memory/plan.md`、`memory/progress.md`、`memory/verify.md`、`docs/CHANGELOG.md`

- **Git 提交**：待提交。

---
