# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /home/vlad/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/181.5087.36/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/vlad/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/181.5087.36/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/vlad/CLionProjects/lab10_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vlad/CLionProjects/lab10_2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lab10_2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lab10_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab10_2.dir/flags.make

CMakeFiles/lab10_2.dir/main.c.o: CMakeFiles/lab10_2.dir/flags.make
CMakeFiles/lab10_2.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vlad/CLionProjects/lab10_2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/lab10_2.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lab10_2.dir/main.c.o   -c /home/vlad/CLionProjects/lab10_2/main.c

CMakeFiles/lab10_2.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab10_2.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/vlad/CLionProjects/lab10_2/main.c > CMakeFiles/lab10_2.dir/main.c.i

CMakeFiles/lab10_2.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab10_2.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/vlad/CLionProjects/lab10_2/main.c -o CMakeFiles/lab10_2.dir/main.c.s

CMakeFiles/lab10_2.dir/main.c.o.requires:

.PHONY : CMakeFiles/lab10_2.dir/main.c.o.requires

CMakeFiles/lab10_2.dir/main.c.o.provides: CMakeFiles/lab10_2.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/lab10_2.dir/build.make CMakeFiles/lab10_2.dir/main.c.o.provides.build
.PHONY : CMakeFiles/lab10_2.dir/main.c.o.provides

CMakeFiles/lab10_2.dir/main.c.o.provides.build: CMakeFiles/lab10_2.dir/main.c.o


# Object files for target lab10_2
lab10_2_OBJECTS = \
"CMakeFiles/lab10_2.dir/main.c.o"

# External object files for target lab10_2
lab10_2_EXTERNAL_OBJECTS =

lab10_2: CMakeFiles/lab10_2.dir/main.c.o
lab10_2: CMakeFiles/lab10_2.dir/build.make
lab10_2: CMakeFiles/lab10_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vlad/CLionProjects/lab10_2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable lab10_2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab10_2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab10_2.dir/build: lab10_2

.PHONY : CMakeFiles/lab10_2.dir/build

CMakeFiles/lab10_2.dir/requires: CMakeFiles/lab10_2.dir/main.c.o.requires

.PHONY : CMakeFiles/lab10_2.dir/requires

CMakeFiles/lab10_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab10_2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab10_2.dir/clean

CMakeFiles/lab10_2.dir/depend:
	cd /home/vlad/CLionProjects/lab10_2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vlad/CLionProjects/lab10_2 /home/vlad/CLionProjects/lab10_2 /home/vlad/CLionProjects/lab10_2/cmake-build-debug /home/vlad/CLionProjects/lab10_2/cmake-build-debug /home/vlad/CLionProjects/lab10_2/cmake-build-debug/CMakeFiles/lab10_2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab10_2.dir/depend

