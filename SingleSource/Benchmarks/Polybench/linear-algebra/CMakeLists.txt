if(NOT ARCH STREQUAL "ARC")
    add_subdirectory(kernels)
    add_subdirectory(solvers)
endif()
