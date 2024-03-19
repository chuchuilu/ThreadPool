cmake_minimum_required(VERSION 3.10) # 指定CMake的最低版本要求

project(ThreadPoolProject) # 定义这个项目的名称

# 设置C++标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 添加包含目录
include_directories(${PROJECT_SOURCE_DIR})

# 可以通过将所有cpp文件添加到同一个库或可执行文件来编译项目
# 创建一个可执行文件
add_executable(ThreadPoolTest test.cpp threadpool.cpp)

# 如果ThreadPool有其它的依赖库，使用target_link_libraries链接它们
# target_link_libraries(ThreadPoolTest name_of_library)
