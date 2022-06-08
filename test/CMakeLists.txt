add_gtest(
    TARGET foo_test_static
    SRC ${TEST_DIR}/foo_test.cc
    LIB foo_static
)

add_gtest(
    TARGET foo_test_shared
    SRC ${TEST_DIR}/foo_test.cc
    LIB foo
    INC ${INC_DIR}
)


add_gtest(
    TARGET glfags_test
    SRC ${TEST_DIR}/gflags_test.cc
    LIB gflags
)