## [2026-10-08 19:26] HDOJ 1000：读取到 EOF 并计算 A + B

- **需求/问题描述**：
  > 将题目的 C++ 解答写入 `HDOJ/1000.cpp`，每组输入输出 A + B，处理至 EOF。

- **实际实现的功能与改动**：
  - 使用 `long long` 保存输入，通过 `while (cin >> a >> b)` 处理所有输入，每组输出和及换行。
  - 添加实际编译和输入输出检查；初次运行因缺少 `main()` 链接失败，实现后五组检查通过，编译无警告。
  - 覆盖样例、多组输入、负数、零、空输入、末行无换行和超过 32 位的和；`git diff --check` 通过。
  - 初始化项目协作记录，并忽略 `.agent/build/` 编译产物。

- **涉及文件**：
  - `HDOJ/1000.cpp`
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

- **Git 提交**：待提交。

---
