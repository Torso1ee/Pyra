cmake_minimum_required(VERSION 3.27.0)
project(PyraLib VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_library(${PROJECT_NAME})

target_sources(${PROJECT_NAME} PUBLIC
app/PyraApplication.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC
${INCLUDE_DIR}
$<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}>
)

target_link_libraries(${PROJECT_NAME} PUBLIC framework)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION}) 
include(CPack)