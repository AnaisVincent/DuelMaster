cmake_minimum_required (VERSION 2.6)

project (DuelMaster)

# Enable debug symbols by default
if(CMAKE_BUILD_TYPE STREQUAL "")
  set(CMAKE_BUILD_TYPE Debug)
endif()

set(EXECUTABLE_OUTPUT_PATH ../bin/${CMAKE_BUILD_TYPE})
set(EXECUTABLE_NAME "DuelMaster")
add_executable(${EXECUTABLE_NAME} 

	src/Element.h
	src/StaticElement.h
	src/Tuile.h
	src/StaticTuile.h
	src/AnimatedTuile.h
	src/Animation.h
	src/TuileSet.h
	src/Surface.h
	src/Layer.h
	src/StateObserver.h

	src/main.cpp
	src/Element.cpp
	src/StaticElement.cpp
	src/Tuile.cpp
	src/StaticTuile.cpp
	src/AnimatedTuile.cpp
	src/Animation.cpp
	src/TuileSet.cpp
	src/Surface.cpp
	src/Layer.cpp
	src/StateObserver.cpp
	
)

# Detect and add SFML
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})
find_package(SFML 2 REQUIRED system window graphics network audio)
if(SFML_FOUND)
  include_directories(${SFML_INCLUDE_DIR})
  target_link_libraries(${EXECUTABLE_NAME} ${SFML_LIBRARIES})
endif()