cmake_minimum_required(VERSION 3.20.0)
project(gtest_demo 
        VERSION 0.1.0
        LANGUAGES CXX C) 

include(CheckCXXCompilerFlag)
if ("cxx_std_20" IN_LIST CMAKE_CXX_COMPILE_FEATURES)
    message(STATUS "use CXX_STD_20")
    set(CMAKE_CXX_STANDARD 20)
elseif("cxx_std_17" IN_LIST CMAKE_CXX_COMPILE_FEATURES)
    message(STATUS "use CXX_STD_17")
    set(CMAKE_CXX_STANDARD 17)
else()
    message(STATUS "use CXX_STD_14")
    set(CMAKE_CXX_STANDARD 14)
endif()

set(CMAKE_C_STANDARD 99)

option(ENABLE_GTEST "Enable gtest" ON)



set(REPO_ROOT_DIR "${CMAKE_CURRENT_SOURCE_DIR}")
set(SRC_DIR ${REPO_ROOT_DIR}/src)
set(INC_DIR ${REPO_ROOT_DIR}/include)
set(TEST_DIR ${REPO_ROOT_DIR}/test)
set(CMAKE_DIR ${REPO_ROOT_DIR}/cmake)
set(THIRD_PARTY_DIR ${REPO_ROOT_DIR}/third_party)


set(CMAKE_INSTALL_PREFIX ${CMAKE_CURRENT_BINARY_DIR}/output)
set(CMAKE_INSTALL_LIBDIR ${CMAKE_INSTALL_PREFIX}/lib)
set(CMAKE_INSTALL_INCLUDEDIR ${CMAKE_INSTALL_PREFIX}/include)
set(CMAKE_INSTALL_DOCDIR ${CMAKE_INSTALL_PREFIX}/doc)
set(CMAKE_INSTALL_BINDIR ${CMAKE_INSTALL_PREFIX}/bin)


add_subdirectory(${SRC_DIR})

include(${CMAKE_DIR}/cc_gflags.cmake)
include(${CMAKE_DIR}/cc_gtest.cmake)
