cmake_minimum_required (VERSION 3.10)
project (Werewolves_vs_Vampires)

SET(SOURCES main.cpp)
SET(INSTALL_DIR "${CMAKE_CURRENT_SOURCE_DIR}/bin")


if (WIN32)
	include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include" "C:/SDL2/include")
	find_library(SDL2_LIBRARY SDL2 PATHS "${CMAKE_CURRENT_SOURCE_DIR}")
	find_library(SDL2_MAIN_LIBRARY SDL2main PATHS "${CMAKE_CURRENT_SOURCE_DIR}")
	set(DLL_INSTALLED_LIBS "${CMAKE_CURRENT_SOURCE_DIR}/lib/SDL2.dll")

	FIND_PACKAGE(YAML_CPP 0.6.2 EXACT PATHS "${CMAKE_CURRENT_SOURCE_DIR}/yaml-cpp-yaml-cpp-0.6.2")
else (WIN32)
	set(DLL_INSTALLED_LIBS "")
endif (WIN32)

add_executable(Werewolves_vs_Vampires ${SOURCES})
target_link_libraries(Werewolves_vs_Vampires ${SDL2_LIBRARY})
target_link_libraries(Werewolves_vs_Vampires ${SDL2_MAIN_LIBRARY})

INSTALL(TARGETS Werewolves_vs_Vampires DESTINATION ${INSTALL_DIR})
INSTALL(FILES ${DLL_INSTALLED_LIBS} DESTINATION ${INSTALL_DIR})