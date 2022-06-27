add_executable(test1 test1.cpp)
target_link_libraries(test1 PUBLIC rb-lib)


# define tests
#add_test(a main ${CMAKE_CURRENT_SOURCE_DIR}/tests/main.cpp)