list(APPEND LDFLAGS -lm -lstdc++)
if(ARCH STREQUAL "XCore")
  if(NOT DEFINED SMALL_PROBLEM_SIZE)
    set(XCORE_TARGET_NEEDS_MEMORY 128)
  endif()
endif()

file(GLOB Source RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.c *.cpp)
if(ARCH STREQUAL "ARC")
    list(REMOVE_ITEM Source huffbench.c)
endif()
llvm_singlesource()

