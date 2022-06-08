add_subdirectory(${THIRD_PARTY_DIR}/gflags EXCLUDE_FROM_ALL)
add_subdirectory(${THIRD_PARTY_DIR}/gtest EXCLUDE_FROM_ALL)


function(add_gtest)
    cmake_parse_arguments(TEST "" "TARGET" "SRC;INC;LIB" ${ARGV})
    add_executable(${TEST_TARGET})
    target_sources(${TEST_TARGET} PRIVATE ${TEST_SRC})
    target_include_directories(${TEST_TARGET} PRIVATE ${TEST_INC})
    target_link_libraries(${TEST_TARGET} PRIVATE ${TEST_LIB} gtest gtest_main gflags)
    
    install(
        TARGETS ${TEST_TARGET}
        ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
        )
endfunction()




function(ut_test)
    cmake_parse_arguments(UT "" "SRC" "MAIN_SRC;INC;LIB" ${ARGV})
    set(src_path ${UT_SRC})
    string(REPLACE "/" ";" src_path_splited  ${src_path})
    list(GET src_path_splited -1 test_case_name)
    string(REPLACE "/" ";" src_path_splited ${test_case_name})
    list(GET src_path_splited 0 test_case_name)
    MESSAGE(STATUS "test_case_name: ${test_case_name}")

    add_gtest(
        TARGET ${test_case_name}
        SRC ${UT_SRC} ${UT_MAIN_SRC}
        INC ${UT_INC}
        LIB ${UT_LIB}
    )
endfunction()


