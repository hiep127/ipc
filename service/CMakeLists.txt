cmake_minimum_required(VERSION 3.5)

project(service LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(service main.cpp)

include_directories("/home/hiep/ipc")

install(TARGETS service
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
