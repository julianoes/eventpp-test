cmake_minimum_required(VERSION 3.18)

project(eventpp-test CXX)

add_executable(eventpp-test
    main.cpp
)

target_include_directories(eventpp-test
    PRIVATE
    eventpp/include/
)
