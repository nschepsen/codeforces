# Copyright (C) 2015 Nikolaj Schepsen

project("Code Forces (Competitive Programming)" CXX)

# REQUIREMENTS

cmake_minimum_required (VERSION 2.8)

# SETTINGS

set(CMAKE_CXX_FLAGS "-std=c++11 -O3 -g -Wno-unused-result") 
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

option(BUILD_GYMS "Build the gym folder" OFF)
option(BUILD_LIVE_CONTESTS "Build the live-contest folder" OFF)

if(BUILD_LIVE_CONTESTS)
set(CONTENT ${PROJECT_BINARY_DIR}/src/live)
elseif(BUILD_GYMS)
set(CONTENT ${PROJECT_BINARY_DIR}/src/gym)
else()
set(CONTENT ${PROJECT_BINARY_DIR}/src/contests)
endif()

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

# Copyright (C) 2015 Nikolaj Schepsen
