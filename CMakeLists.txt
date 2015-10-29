cmake_minimum_required (VERSION 2.6)

project (SFML)

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
	src/TuileSetWorld.h
	src/Surface.h
	src/SurfaceWorld.h
	src/Plan.h
	src/StateObserver.h
	src/DebugPlan.h
	src/ElementListPlan.h
	src/Scene.h
	src/StatePlan.h

	src/main.cpp
	src/Element.cpp
	src/StaticElement.cpp
	src/Tuile.cpp
	src/StaticTuile.cpp
	src/AnimatedTuile.cpp
	src/Animation.cpp
	src/TuileSet.cpp
	src/Surface.cpp
	src/TuileSetWorld.cpp
	src/SurfaceWorld.cpp
	src/Plan.cpp
	src/StateObserver.cpp
	src/DebugPlan.cpp
	src/ElementListPlan.cpp
	src/Scene.cpp
	src/StatePlan.cpp

	
)



# SFML
set(SFML_ROOT "/usr/lsa")
set(CMAKE_MODULE_PATH "${SFML_ROOT}/share/SFML/cmake/Modules"
${CMAKE_MODULE_PATH})
find_package(SFML 1 COMPONENTS graphics window system)
if(SFML_FOUND)
   include_directories(${SFML_INCLUDE_DIR})
   target_link_libraries(DuelMaster ${SFML_LIBRARIES})
endif()
