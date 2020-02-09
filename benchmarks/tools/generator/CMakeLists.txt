# Data generator.
include_directories (${OpenCV_INCLUDE_DIRS})
add_executable (
    matrixgenerator.bin EXCLUDE_FROM_ALL
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
)
