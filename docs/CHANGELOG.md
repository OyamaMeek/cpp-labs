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

- **Git 提交**：待提交。

---
