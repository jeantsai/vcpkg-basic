cmake_minimum_required(VERSION 3.0.0)
project(cmake-sqlite VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(cmake-sqlite main.cpp)

find_package(SQLite3 REQUIRED)
target_link_libraries(cmake-sqlite PRIVATE SQLite3)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
