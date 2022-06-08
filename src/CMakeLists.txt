
file(GLOB_RECURSE SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.cc)
file(GLOB_RECURSE HEADER ${INC_DIR}/*.h)


add_library(foo SHARED)
target_sources(foo PRIVATE ${SRC})
target_include_directories(foo PUBLIC ${INC_DIR})


add_library(foo_static STATIC)
set_target_properties(foo_static PROPERTIES OUTPUT_NAME "foo")


target_sources(foo_static PRIVATE ${SRC})
target_include_directories(foo_static PUBLIC ${INC_DIR})

# SET_TARGET_PROPERTIES(foo PROPERTIES CLEAN_DIRECT_OUTPUT 1)
# SET_TARGET_PROPERTIES(foo_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)


install(
    FILES ${HEADER}
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)

install(
    TARGETS foo foo_static
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}   
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR} # .dll treated as runtime
)

    