add_subdirectory(${THIRD_PARTY_DIR}/gtest EXCLUDE_FROM_ALL)

function(add_gtest)
    cmake_parse_arguments(UT "" "TARGET" "SRC;INC;LIB" ${ARGV})
    add_executable(${UT_TARGET})
    target_sources(${UT_TARGET} PRIVATE ${UT_SRC})
    target_include_directories(${UT_TARGET} PRIVATE ${UT_INC})
    target_link_libraries(${UT_TARGET} PRIVATE ${UT_LIB} gtest gtest_main)
    
    install(
        TARGETS ${UT_TARGET}
        ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
        )
endfunction()



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
