set(TEST_MAIN_SRC ${TEST_DIR}/test_main/test_main.cc)


file(GLOB_RECURSE ut_test_src CONFIGURE_DEPENDS "${TEST_DIR}/ut/*.cc")
# add more if need


set(TEST_SRCS ${ut_test_src})
set(TEST_LIB foo foo_static)



foreach(src ${TEST_SRCS})
    ut_test(
        SRC ${src}
        MAIN_SRC ${TEST_MAIN_SRC}
        LIB ${TEST_LIB}
    )
endforeach()


# add_gtest(
#     TARGET foo_test_static
#     SRC ${TEST_DIR}/foo_test.cc
#     LIB foo_static
# )

# add_gtest(
#     TARGET foo_test_shared
#     SRC ${TEST_DIR}/foo_test.cc
#     LIB foo
#     INC ${INC_DIR}
# )


# add_gtest(
#     TARGET glfags_test
#     SRC ${TEST_DIR}/gflags_test.cc
#     LIB gflags
# )