# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/nikolaj/Dropbox/Eclipse/(C++) Code Forces"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/nikolaj/Dropbox/Eclipse/(C++) Code Forces"

# Include any dependencies generated for this target.
include CMakeFiles/T0096A.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/T0096A.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/T0096A.dir/flags.make

CMakeFiles/T0096A.dir/src/096/A.cpp.o: CMakeFiles/T0096A.dir/flags.make
CMakeFiles/T0096A.dir/src/096/A.cpp.o: src/096/A.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report "/home/nikolaj/Dropbox/Eclipse/(C++) Code Forces/CMakeFiles" $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/T0096A.dir/src/096/A.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/T0096A.dir/src/096/A.cpp.o -c "/home/nikolaj/Dropbox/Eclipse/(C++) Code Forces/src/096/A.cpp"

CMakeFiles/T0096A.dir/src/096/A.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/T0096A.dir/src/096/A.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E "/home/nikolaj/Dropbox/Eclipse/(C++) Code Forces/src/096/A.cpp" > CMakeFiles/T0096A.dir/src/096/A.cpp.i

CMakeFiles/T0096A.dir/src/096/A.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/T0096A.dir/src/096/A.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S "/home/nikolaj/Dropbox/Eclipse/(C++) Code Forces/src/096/A.cpp" -o CMakeFiles/T0096A.dir/src/096/A.cpp.s

CMakeFiles/T0096A.dir/src/096/A.cpp.o.requires:
.PHONY : CMakeFiles/T0096A.dir/src/096/A.cpp.o.requires

CMakeFiles/T0096A.dir/src/096/A.cpp.o.provides: CMakeFiles/T0096A.dir/src/096/A.cpp.o.requires
	$(MAKE) -f CMakeFiles/T0096A.dir/build.make CMakeFiles/T0096A.dir/src/096/A.cpp.o.provides.build
.PHONY : CMakeFiles/T0096A.dir/src/096/A.cpp.o.provides

CMakeFiles/T0096A.dir/src/096/A.cpp.o.provides.build: CMakeFiles/T0096A.dir/src/096/A.cpp.o

# Object files for target T0096A
T0096A_OBJECTS = \
"CMakeFiles/T0096A.dir/src/096/A.cpp.o"

# External object files for target T0096A
T0096A_EXTERNAL_OBJECTS =

bin/T0096A: CMakeFiles/T0096A.dir/src/096/A.cpp.o
bin/T0096A: CMakeFiles/T0096A.dir/build.make
bin/T0096A: CMakeFiles/T0096A.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable bin/T0096A"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/T0096A.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/T0096A.dir/build: bin/T0096A
.PHONY : CMakeFiles/T0096A.dir/build

CMakeFiles/T0096A.dir/requires: CMakeFiles/T0096A.dir/src/096/A.cpp.o.requires
.PHONY : CMakeFiles/T0096A.dir/requires

CMakeFiles/T0096A.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/T0096A.dir/cmake_clean.cmake
.PHONY : CMakeFiles/T0096A.dir/clean

CMakeFiles/T0096A.dir/depend:
	cd "/home/nikolaj/Dropbox/Eclipse/(C++) Code Forces" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/nikolaj/Dropbox/Eclipse/(C++) Code Forces" "/home/nikolaj/Dropbox/Eclipse/(C++) Code Forces" "/home/nikolaj/Dropbox/Eclipse/(C++) Code Forces" "/home/nikolaj/Dropbox/Eclipse/(C++) Code Forces" "/home/nikolaj/Dropbox/Eclipse/(C++) Code Forces/CMakeFiles/T0096A.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/T0096A.dir/depend

