cmake_minimum_required(VERSION 3.14)

# 项目信息
project(c-assignment-template
    VERSION 1.0.0
    DESCRIPTION "C语言作业通用基础模板"
    LANGUAGES C
)

# C标准配置
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

# 编译选项
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -Wpedantic")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Werror=return-type -Werror")
set(CMAKE_C_FLAGS_RELEASE "-O2 -DNDEBUG")
set(CMAKE_C_FLAGS_DEBUG "-g -O0 -DDEBUG")

# 输出目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# 源文件
file(GLOB SOURCES "src/*.c")
list(SORT SOURCES)

# 可执行文件
add_executable(main ${SOURCES})
target_include_directories(main PRIVATE ${CMAKE_SOURCE_DIR}/include)

# 安装目标（可选）
install(TARGETS main DESTINATION bin)

# ==========================================
# 单元测试支持 (CTest)
# ==========================================
enable_testing()

# 测试可执行文件
add_executable(test_calculator
    test/test_calculator.c
    src/calculator.c
)
target_include_directories(test_calculator PRIVATE
    ${CMAKE_SOURCE_DIR}/include
)

# 添加测试
add_test(NAME calculator_test COMMAND test_calculator)
