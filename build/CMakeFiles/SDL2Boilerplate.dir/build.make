# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rothnald/Workspace/SDL-OpenGL-Boilerplate

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rothnald/Workspace/SDL-OpenGL-Boilerplate/build

# Include any dependencies generated for this target.
include CMakeFiles/SDL2Boilerplate.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SDL2Boilerplate.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SDL2Boilerplate.dir/flags.make

CMakeFiles/SDL2Boilerplate.dir/main.cpp.o: CMakeFiles/SDL2Boilerplate.dir/flags.make
CMakeFiles/SDL2Boilerplate.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rothnald/Workspace/SDL-OpenGL-Boilerplate/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SDL2Boilerplate.dir/main.cpp.o"
	/usr/bin/g++-6  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SDL2Boilerplate.dir/main.cpp.o -c /home/rothnald/Workspace/SDL-OpenGL-Boilerplate/main.cpp

CMakeFiles/SDL2Boilerplate.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SDL2Boilerplate.dir/main.cpp.i"
	/usr/bin/g++-6 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rothnald/Workspace/SDL-OpenGL-Boilerplate/main.cpp > CMakeFiles/SDL2Boilerplate.dir/main.cpp.i

CMakeFiles/SDL2Boilerplate.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SDL2Boilerplate.dir/main.cpp.s"
	/usr/bin/g++-6 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rothnald/Workspace/SDL-OpenGL-Boilerplate/main.cpp -o CMakeFiles/SDL2Boilerplate.dir/main.cpp.s

CMakeFiles/SDL2Boilerplate.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/SDL2Boilerplate.dir/main.cpp.o.requires

CMakeFiles/SDL2Boilerplate.dir/main.cpp.o.provides: CMakeFiles/SDL2Boilerplate.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/SDL2Boilerplate.dir/build.make CMakeFiles/SDL2Boilerplate.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/SDL2Boilerplate.dir/main.cpp.o.provides

CMakeFiles/SDL2Boilerplate.dir/main.cpp.o.provides.build: CMakeFiles/SDL2Boilerplate.dir/main.cpp.o


# Object files for target SDL2Boilerplate
SDL2Boilerplate_OBJECTS = \
"CMakeFiles/SDL2Boilerplate.dir/main.cpp.o"

# External object files for target SDL2Boilerplate
SDL2Boilerplate_EXTERNAL_OBJECTS =

SDL2Boilerplate: CMakeFiles/SDL2Boilerplate.dir/main.cpp.o
SDL2Boilerplate: CMakeFiles/SDL2Boilerplate.dir/build.make
SDL2Boilerplate: CMakeFiles/SDL2Boilerplate.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rothnald/Workspace/SDL-OpenGL-Boilerplate/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SDL2Boilerplate"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SDL2Boilerplate.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SDL2Boilerplate.dir/build: SDL2Boilerplate

.PHONY : CMakeFiles/SDL2Boilerplate.dir/build

CMakeFiles/SDL2Boilerplate.dir/requires: CMakeFiles/SDL2Boilerplate.dir/main.cpp.o.requires

.PHONY : CMakeFiles/SDL2Boilerplate.dir/requires

CMakeFiles/SDL2Boilerplate.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SDL2Boilerplate.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SDL2Boilerplate.dir/clean

CMakeFiles/SDL2Boilerplate.dir/depend:
	cd /home/rothnald/Workspace/SDL-OpenGL-Boilerplate/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rothnald/Workspace/SDL-OpenGL-Boilerplate /home/rothnald/Workspace/SDL-OpenGL-Boilerplate /home/rothnald/Workspace/SDL-OpenGL-Boilerplate/build /home/rothnald/Workspace/SDL-OpenGL-Boilerplate/build /home/rothnald/Workspace/SDL-OpenGL-Boilerplate/build/CMakeFiles/SDL2Boilerplate.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SDL2Boilerplate.dir/depend

