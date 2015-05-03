# Copyright (C) 2015 Nikolaj Schepsen

project("Code Forces (Competitive Programming)" CXX)

# REQUIREMENTS
cmake_minimum_required (VERSION 2.8)

# Copyright (C) 2015 Nikolaj Schepsen

# SETTINGS
set(CMAKE_CXX_FLAGS "-std=c++11 -O1") 
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

# SUBFOLDERS
add_subdirectory (src)

FILE(GLOB TASKS_SRC src/*.cpp)

FOREACH(tasksource ${TASKS_SRC})    
    string(REGEX MATCH "T[0-9]+[A-Z]+" task ${tasksource})
    add_executable(${task} ${tasksource})
ENDFOREACH(tasksource ${TASKS_SRC})

# Copyright (C) 2015 Nikolaj Schepsen