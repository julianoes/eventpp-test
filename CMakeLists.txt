cmake_minimum_required(VERSION 3.18)

project(eventpp-test CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(eventpp-test
    main.cpp
    widget.h
    widget.cpp
    handle.h
    handle.cpp
    handle_impl.h
    handle_impl.cpp
)

target_compile_options(eventpp-test
    PRIVATE
    -Wall -Wextra
)

target_include_directories(eventpp-test
    PRIVATE
    eventpp/include/
)
