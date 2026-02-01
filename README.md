# C 语言作业模板

基于 CMake 的 C 语言项目模板，适用于课程作业和小型项目。

## 项目结构

```
├── CMakeLists.txt    # CMake 构建配置
├── README.md         # 项目说明
├── .gitignore        # Git 忽略配置
├── bin/              # 编译输出目录
├── include/          # 头文件 (*.h)
├── src/              # 源文件 (*.c)
└── tests/            # 测试文件 (可选)
```

## 构建和运行

```bash
cmake -B build
cmake --build build
```

## 测试

```bash
ctest --test-dir build
```

## 目录规范

| 目录       | 用途                    |
| ---------- | ----------------------- |
| `src/`     | 源文件，`main.c` 为入口 |
| `include/` | 头文件                  |
| `bin/`     | 编译产物                |

## 编译选项

```bash
# Debug 版本
cmake -DCMAKE_BUILD_TYPE=Debug ..

# Release 版本
cmake -DCMAKE_BUILD_TYPE=Release ..
```

## 注意事项

1. 在 `src/` 下编写代码，源文件自动被包含
2. 头文件放入 `include/` 目录
3. 清理构建：`cmake --build . --target clean`

## 许可证

[Apache-2.0](LICENSE)
