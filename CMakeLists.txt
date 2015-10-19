cmake_minimum_required (VERSION 2.6)

project (DuelMaster)

# Enable debug symbols by default
if(CMAKE_BUILD_TYPE STREQUAL "")
  set(CMAKE_BUILD_TYPE Debug)
endif()

set(EXECUTABLE_OUTPUT_PATH ../bin/${CMAKE_BUILD_TYPE})
set(EXECUTABLE_NAME "DuelMaster")
add_executable(${EXECUTABLE_NAME} 
		src/main.cpp
		src/AnimatedTuile.cpp
		src/AnimatedTuile.h
		src/StaticTuile.cpp
		src/StaticTuile.h
		src/Element.cpp
		src/Element.h
		src/Animation.cpp
		src/Animation.h
		src/StaticElement.cpp
		src/StaticElement.h
		src/Tuile.cpp
		src/Tuile.h
		src/StatePlan.cpp
		src/StatePlan.h
		src/DebugPlan.cpp
		src/DebugPlan.h
		src/ElementListPlan.cpp
		src/ElementListPlan.h
		src/Scene.cpp
		src/Scene.h

)

# Detect and add SFML
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})
find_package(SFML 2 REQUIRED system window graphics network audio)
if(SFML_FOUND)
  include_directories(${SFML_INCLUDE_DIR})
  target_link_libraries(${EXECUTABLE_NAME} ${SFML_LIBRARIES})
endif()