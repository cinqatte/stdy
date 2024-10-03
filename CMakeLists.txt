cmake_minimum_required(VERSION 3.29)
project(stdy VERSION 0.0.0 LANGUAGES C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

include_directories(include)

add_library(stdy STATIC
    src/string.c
    src/integer.c
    src/float.c
        include/stdy/common.h
)

target_include_directories(stdy PUBLIC include)

add_executable(stdy_test src/stdy_test.c)
target_link_libraries(stdy_test stdy)
