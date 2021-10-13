cmake_minimum_required(VERSION 3.5.1)
set(MODULE_NAME "cmake-allclowning")
set(CMAKE_C_COMPILE_FEATURES 11)

project(${MODULE_NAME})

include_directories(lib/FinalC/include)


add_subdirectory(lib/FinalC)
add_executable(testFinalC src/testFinalC.c)
target_link_libraries(testFinalC FinalC)
