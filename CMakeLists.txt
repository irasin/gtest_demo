cmake_minimum_required(VERSION 3.23.1)
project(gtest_demo 
        VERSION 0.1.0
        LANGUAGES CXX C) 

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


if (ENABLE_GTEST) 
    include(${CMAKE_DIR}/cc_gtest.cmake)
endif()

