cmake_minimum_required (VERSION 2.6)

project (DuelMaster)

# Enable debug symbols by default
# if(CMAKE_BUILD_TYPE STREQUAL "")
#   set(CMAKE_BUILD_TYPE Debug)
# endif()


file(GLOB_RECURSE SOURCE_FILES src/*)


set(EXECUTABLE_OUTPUT_PATH ../bin/${CMAKE_BUILD_TYPE})
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(EXECUTABLE_NAME "DuelMaster")
add_executable(${EXECUTABLE_NAME} ${SOURCE_FILES} )

# Detect and add SFML
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})
find_package(SFML 2 REQUIRED system window graphics network audio)
if(SFML_FOUND)
  include_directories(${SFML_INCLUDE_DIR})
  target_link_libraries(${EXECUTABLE_NAME} ${SFML_LIBRARIES})
endif()
