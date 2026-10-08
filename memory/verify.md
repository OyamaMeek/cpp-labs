# 完成标准

- 执行 `python3 tests/test_hdoj1000.py`：使用 `clang++ -std=c++17 -Wall -Wextra -pedantic` 编译真实目标文件，并核对五组输入输出。
- 编译无警告，程序正常退出，输出与预期完全一致。
- 执行 `git diff --check`，检查实际暂存内容，不包含其他已有修改或编译产物。
- 仓库未发现已有测试套件或已配置的 hooks；此任务使用上述独立检查。
