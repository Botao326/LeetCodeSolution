# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /home/botao/Programs/clion-2016.2.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/botao/Programs/clion-2016.2.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/botao/Projects/LeetCodeSolution

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/botao/Projects/LeetCodeSolution/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/LeetCodeSolution.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LeetCodeSolution.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LeetCodeSolution.dir/flags.make

CMakeFiles/LeetCodeSolution.dir/main.cpp.o: CMakeFiles/LeetCodeSolution.dir/flags.make
CMakeFiles/LeetCodeSolution.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/botao/Projects/LeetCodeSolution/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LeetCodeSolution.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LeetCodeSolution.dir/main.cpp.o -c /home/botao/Projects/LeetCodeSolution/main.cpp

CMakeFiles/LeetCodeSolution.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LeetCodeSolution.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/botao/Projects/LeetCodeSolution/main.cpp > CMakeFiles/LeetCodeSolution.dir/main.cpp.i

CMakeFiles/LeetCodeSolution.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LeetCodeSolution.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/botao/Projects/LeetCodeSolution/main.cpp -o CMakeFiles/LeetCodeSolution.dir/main.cpp.s

CMakeFiles/LeetCodeSolution.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/LeetCodeSolution.dir/main.cpp.o.requires

CMakeFiles/LeetCodeSolution.dir/main.cpp.o.provides: CMakeFiles/LeetCodeSolution.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/LeetCodeSolution.dir/build.make CMakeFiles/LeetCodeSolution.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/LeetCodeSolution.dir/main.cpp.o.provides

CMakeFiles/LeetCodeSolution.dir/main.cpp.o.provides.build: CMakeFiles/LeetCodeSolution.dir/main.cpp.o


# Object files for target LeetCodeSolution
LeetCodeSolution_OBJECTS = \
"CMakeFiles/LeetCodeSolution.dir/main.cpp.o"

# External object files for target LeetCodeSolution
LeetCodeSolution_EXTERNAL_OBJECTS =

LeetCodeSolution: CMakeFiles/LeetCodeSolution.dir/main.cpp.o
LeetCodeSolution: CMakeFiles/LeetCodeSolution.dir/build.make
LeetCodeSolution: CMakeFiles/LeetCodeSolution.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/botao/Projects/LeetCodeSolution/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable LeetCodeSolution"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LeetCodeSolution.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LeetCodeSolution.dir/build: LeetCodeSolution

.PHONY : CMakeFiles/LeetCodeSolution.dir/build

CMakeFiles/LeetCodeSolution.dir/requires: CMakeFiles/LeetCodeSolution.dir/main.cpp.o.requires

.PHONY : CMakeFiles/LeetCodeSolution.dir/requires

CMakeFiles/LeetCodeSolution.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LeetCodeSolution.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LeetCodeSolution.dir/clean

CMakeFiles/LeetCodeSolution.dir/depend:
	cd /home/botao/Projects/LeetCodeSolution/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/botao/Projects/LeetCodeSolution /home/botao/Projects/LeetCodeSolution /home/botao/Projects/LeetCodeSolution/cmake-build-debug /home/botao/Projects/LeetCodeSolution/cmake-build-debug /home/botao/Projects/LeetCodeSolution/cmake-build-debug/CMakeFiles/LeetCodeSolution.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LeetCodeSolution.dir/depend
