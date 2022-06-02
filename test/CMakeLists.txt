cmake_minimum_required(VERSION 3.18.4)
include(GoogleTest)

project(tu)

set(SRCS_FOO
    tu_all.cxx
    tu_foo.cxx
    )

set(SRCS_BAR
    tu_all.cxx
    tu_bar.cxx
    )
    

add_executable(tu_foo ${SRCS_FOO})
add_executable(tu_bar ${SRCS_BAR})

gtest_discover_tests(tu_foo)
gtest_discover_tests(tu_bar)

target_link_libraries(tu_foo foobar gtest pthread gcov)
target_link_libraries(tu_bar foobar gtest pthread gcov)

install(TARGETS tu_foo DESTINATION .)
install(TARGETS tu_bar DESTINATION .)
