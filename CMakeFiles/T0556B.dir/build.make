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
include CMakeFiles/T0556B.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/T0556B.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/T0556B.dir/flags.make

CMakeFiles/T0556B.dir/src/556/B.cpp.o: CMakeFiles/T0556B.dir/flags.make
CMakeFiles/T0556B.dir/src/556/B.cpp.o: src/556/B.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report "/home/nikolaj/Dropbox/Eclipse/(C++) Code Forces/CMakeFiles" $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/T0556B.dir/src/556/B.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/T0556B.dir/src/556/B.cpp.o -c "/home/nikolaj/Dropbox/Eclipse/(C++) Code Forces/src/556/B.cpp"

CMakeFiles/T0556B.dir/src/556/B.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/T0556B.dir/src/556/B.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E "/home/nikolaj/Dropbox/Eclipse/(C++) Code Forces/src/556/B.cpp" > CMakeFiles/T0556B.dir/src/556/B.cpp.i

CMakeFiles/T0556B.dir/src/556/B.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/T0556B.dir/src/556/B.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S "/home/nikolaj/Dropbox/Eclipse/(C++) Code Forces/src/556/B.cpp" -o CMakeFiles/T0556B.dir/src/556/B.cpp.s

CMakeFiles/T0556B.dir/src/556/B.cpp.o.requires:
.PHONY : CMakeFiles/T0556B.dir/src/556/B.cpp.o.requires

CMakeFiles/T0556B.dir/src/556/B.cpp.o.provides: CMakeFiles/T0556B.dir/src/556/B.cpp.o.requires
	$(MAKE) -f CMakeFiles/T0556B.dir/build.make CMakeFiles/T0556B.dir/src/556/B.cpp.o.provides.build
.PHONY : CMakeFiles/T0556B.dir/src/556/B.cpp.o.provides

CMakeFiles/T0556B.dir/src/556/B.cpp.o.provides.build: CMakeFiles/T0556B.dir/src/556/B.cpp.o

# Object files for target T0556B
T0556B_OBJECTS = \
"CMakeFiles/T0556B.dir/src/556/B.cpp.o"

# External object files for target T0556B
T0556B_EXTERNAL_OBJECTS =

bin/T0556B: CMakeFiles/T0556B.dir/src/556/B.cpp.o
bin/T0556B: CMakeFiles/T0556B.dir/build.make
bin/T0556B: CMakeFiles/T0556B.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable bin/T0556B"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/T0556B.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/T0556B.dir/build: bin/T0556B
.PHONY : CMakeFiles/T0556B.dir/build

CMakeFiles/T0556B.dir/requires: CMakeFiles/T0556B.dir/src/556/B.cpp.o.requires
.PHONY : CMakeFiles/T0556B.dir/requires

CMakeFiles/T0556B.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/T0556B.dir/cmake_clean.cmake
.PHONY : CMakeFiles/T0556B.dir/clean

CMakeFiles/T0556B.dir/depend:
	cd "/home/nikolaj/Dropbox/Eclipse/(C++) Code Forces" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/nikolaj/Dropbox/Eclipse/(C++) Code Forces" "/home/nikolaj/Dropbox/Eclipse/(C++) Code Forces" "/home/nikolaj/Dropbox/Eclipse/(C++) Code Forces" "/home/nikolaj/Dropbox/Eclipse/(C++) Code Forces" "/home/nikolaj/Dropbox/Eclipse/(C++) Code Forces/CMakeFiles/T0556B.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/T0556B.dir/depend

