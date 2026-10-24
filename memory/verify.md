# 完成标准

- 执行 `python3 -m pytest -q tests/test_character1_261024.py`：使用 clang C17、严格警告及 UndefinedBehaviorSanitizer 编译并运行真实目标文件。
- 检查 12345 输出 15、零、单个数字、含零整数、负数、32 位整数两端边界、空输入和非数字输入。
- 执行 `python3 -m pytest -q`，确认全部现有测试通过；原有测试文件包含用户修改，保留其内容。
- 编译无警告，程序正常退出，输出与预期完全一致。
- 执行 `git diff --check`，检查实际暂存内容，不包含其他已有修改或编译产物。
- 当前测试通过 pytest 发现并执行；未确认配置生效的 hooks 不作为验证证据。
