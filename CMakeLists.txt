# Copyright (C) 2015 Nikolaj Schepsen

project("Code Forces (Competitive Programming)" CXX)

# REQUIREMENTS
cmake_minimum_required (VERSION 2.8)

# Copyright (C) 2015 Nikolaj Schepsen

# SETTINGS
set(CMAKE_CXX_FLAGS "-std=c++11 -O3 -Wno-unused-result") 
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

# SUBFOLDERS
add_subdirectory (src)

FILE(GLOB CONTESTS_DIR ${PROJECT_BINARY_DIR}/src/*)

FOREACH(PATH ${CONTESTS_DIR})   
 
    string(REGEX MATCH "[0-9]+" CONTEST ${PATH})  
        
    IF(${CONTEST})
        FILE(GLOB TASKS ${PROJECT_BINARY_DIR}/src/${CONTEST}/*.cpp)                            
        FOREACH(TASK ${TASKS})
        
            string(REGEX MATCH "[A-Z].cpp" TASK ${TASK})  
            string(REGEX REPLACE ".cpp" "" TASK ${TASK})

            add_executable("T0${CONTEST}${TASK}" "src/${CONTEST}/${TASK}.cpp")
            
        ENDFOREACH(TASK ${TASKS})        
    ENDIF()    
    
ENDFOREACH(PATH ${CONTESTS_DIR})

# Copyright (C) 2015 Nikolaj Schepsen