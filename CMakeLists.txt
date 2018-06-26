cmake_minimum_required(VERSION 2.8)
project(TravisCXX CXX)

# more warnings
if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
    add_compile_options(-Wall -Wextra -Wpedantic -Weffc++) # -Werror)
endif()

add_executable(prog main.cpp)
target_compile_features(prog PRIVATE cxx_range_for) # use c++11
#target_compile_features(prog PRIVATE cxx_lambda_init_captures) # use c++14

