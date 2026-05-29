
cmake_minimum_required(VERSION 3.13)

##
## Project Name
##
project( RPGDash )

##
## Uses STD c++ 20
##
set( CMAKE_CXX_STANDARD 20 )

##
## External Libraries
##
find_package( SDL3 REQUIRED CONFIG )
include_directories( SDL3::Headers )

add_subdirectory( ${CMAKE_SOURCE_DIR}/contrib/crgl/lib )
add_subdirectory( ${CMAKE_SOURCE_DIR}/contrib/gwen )

##
## set the engine source root path
##
include_directories( ${CMAKE_SOURCE_DIR}/source )
include_directories( ${CMAKE_SOURCE_DIR}/contrib/crgl/include )
include_directories( ${CMAKE_SOURCE_DIR}/contrib/SDL3PP )
include_directories( ${CMAKE_SOURCE_DIR}/contrib/glm )

set( ENGINE_SOURCES
	${CMAKE_SOURCE_DIR}/source/precompiled.hpp
	${CMAKE_SOURCE_DIR}/source/AppMain.cpp
	${CMAKE_SOURCE_DIR}/source/AppMain.hpp
	${CMAKE_SOURCE_DIR}/source/Video.cpp
	${CMAKE_SOURCE_DIR}/source/Video.hpp
	${CMAKE_SOURCE_DIR}/source/structures/atributos.cpp
	${CMAKE_SOURCE_DIR}/source/structures/atributos.hpp
	${CMAKE_SOURCE_DIR}/source/structures/classes.cpp
	${CMAKE_SOURCE_DIR}/source/structures/classes.hpp
	${CMAKE_SOURCE_DIR}/source/structures/personagens.cpp
	${CMAKE_SOURCE_DIR}/source/structures/personagens.hpp
	)

set( LIBRARIES SDL3::SDL3 crglLib )

add_executable( RPGDash ${ENGINE_SOURCES} )
target_link_libraries( RPGDash PRIVATE ${LIBRARIES} )
target_include_directories( RPGDash PRIVATE )
target_precompile_headers( RPGDash PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/source/precompiled.hpp )