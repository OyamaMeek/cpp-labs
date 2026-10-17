# 完成标准

- 执行 `python3 tests/test_character1_1_3_2.py`：使用 clang C17、严格警告和 UndefinedBehaviorSanitizer 编译真实目标文件，检查较小值在前和在后、相等、负数、零、int 两端边界，以及空输入、缺少第二个整数和非数字输入。
- 执行已有 `python3 tests/test_character1_1_2.py` 和 `python3 tests/test_hdoj1000.py`，确认原有检查通过。
- 编译无警告，程序正常退出，输出与预期完全一致。
- 执行 `git diff --check`，检查实际暂存内容，不包含其他已有修改或编译产物。
- 仓库未发现已有测试套件或已配置的 hooks；此任务使用上述独立检查。
