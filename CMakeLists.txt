# Copyright (C) 2015-2018 Nikolaj Schepsen

project("CodeForces (Contests)" CXX)

# REQUIREMENTS

cmake_minimum_required(VERSION 3.8)

# CMAKE 2.8 http://www.cmake.org/cmake/resources/software.html

set(PROJECT_VERSION_MAJOR 0)
set(PROJECT_VERSION_MINOR 2)
set(PROJECT_VERSION_PATCH 20180525)

set(PROJECT_VERSION ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH})

# SETTINGS

if(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_BINARY_DIR})
    message(FATAL_ERROR "In-source builds not allowed. Please make a new directory and run CMake from there.")
endif()

set(PROJECT_SOURCE_DIR "${PROJECT_SOURCE_DIR}/src")

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "LIVE")
endif()

message("Build Type: ${CMAKE_BUILD_TYPE}")

if(CMAKE_BUILD_TYPE MATCHES "CONTESTS")
    set(CONTENT "${PROJECT_SOURCE_DIR}/contests")
elseif(CMAKE_BUILD_TYPE MATCHES "LIVE")
    set(CONTENT "${PROJECT_SOURCE_DIR}/live")
else()
    set(CONTENT "${PROJECT_SOURCE_DIR}/gym")
endif()

set(CMAKE_CXX_FLAGS "-std=c++1z -O3 -g -Wno-unused-result")

# SUBFOLDERS

add_subdirectory (${CONTENT})
file(GLOB CONTESTS_DIR ${CONTENT}/*)

foreach(PATH ${CONTESTS_DIR})
    string(REGEX MATCH "[0-9]+" CONTEST ${PATH})
    if(${CONTEST})
        file(GLOB TASKS ${CONTENT}/${CONTEST}/*.cpp)
        foreach(TASK ${TASKS})
            string(REGEX MATCH "[A-Z].cpp" TASK ${TASK})
            string(REGEX REPLACE ".cpp" "" TASK ${TASK})
            add_executable("T0${CONTEST}${TASK}" "${CONTENT}/${CONTEST}/${TASK}.cpp")
        endforeach(TASK ${TASKS})
    endif()
endforeach(PATH ${CONTESTS_DIR})

# Copyright (C) 2015-2018 Nikolaj Schepsen
