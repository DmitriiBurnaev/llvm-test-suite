list(APPEND LDFLAGS -lm)
file(GLOB Source RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.c *.cpp)

if(ARCH STREQUAL "ARC")
    list(REMOVE_ITEM Source uint64_to_float.c)
endif()
llvm_singlesource(PREFIX "Regression-C-")
