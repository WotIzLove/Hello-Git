# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /home/vlad/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/172.4343.16/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/vlad/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/172.4343.16/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/vlad/CLionProjects/CS50

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vlad/CLionProjects/CS50/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CS50.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CS50.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CS50.dir/flags.make

CMakeFiles/CS50.dir/main.c.o: CMakeFiles/CS50.dir/flags.make
CMakeFiles/CS50.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vlad/CLionProjects/CS50/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/CS50.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CS50.dir/main.c.o   -c /home/vlad/CLionProjects/CS50/main.c

CMakeFiles/CS50.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CS50.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/vlad/CLionProjects/CS50/main.c > CMakeFiles/CS50.dir/main.c.i

CMakeFiles/CS50.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CS50.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/vlad/CLionProjects/CS50/main.c -o CMakeFiles/CS50.dir/main.c.s

CMakeFiles/CS50.dir/main.c.o.requires:

.PHONY : CMakeFiles/CS50.dir/main.c.o.requires

CMakeFiles/CS50.dir/main.c.o.provides: CMakeFiles/CS50.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/CS50.dir/build.make CMakeFiles/CS50.dir/main.c.o.provides.build
.PHONY : CMakeFiles/CS50.dir/main.c.o.provides

CMakeFiles/CS50.dir/main.c.o.provides.build: CMakeFiles/CS50.dir/main.c.o


CMakeFiles/CS50.dir/water.c.o: CMakeFiles/CS50.dir/flags.make
CMakeFiles/CS50.dir/water.c.o: ../water.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vlad/CLionProjects/CS50/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/CS50.dir/water.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CS50.dir/water.c.o   -c /home/vlad/CLionProjects/CS50/water.c

CMakeFiles/CS50.dir/water.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CS50.dir/water.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/vlad/CLionProjects/CS50/water.c > CMakeFiles/CS50.dir/water.c.i

CMakeFiles/CS50.dir/water.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CS50.dir/water.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/vlad/CLionProjects/CS50/water.c -o CMakeFiles/CS50.dir/water.c.s

CMakeFiles/CS50.dir/water.c.o.requires:

.PHONY : CMakeFiles/CS50.dir/water.c.o.requires

CMakeFiles/CS50.dir/water.c.o.provides: CMakeFiles/CS50.dir/water.c.o.requires
	$(MAKE) -f CMakeFiles/CS50.dir/build.make CMakeFiles/CS50.dir/water.c.o.provides.build
.PHONY : CMakeFiles/CS50.dir/water.c.o.provides

CMakeFiles/CS50.dir/water.c.o.provides.build: CMakeFiles/CS50.dir/water.c.o


CMakeFiles/CS50.dir/greedy.c.o: CMakeFiles/CS50.dir/flags.make
CMakeFiles/CS50.dir/greedy.c.o: ../greedy.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vlad/CLionProjects/CS50/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/CS50.dir/greedy.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CS50.dir/greedy.c.o   -c /home/vlad/CLionProjects/CS50/greedy.c

CMakeFiles/CS50.dir/greedy.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CS50.dir/greedy.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/vlad/CLionProjects/CS50/greedy.c > CMakeFiles/CS50.dir/greedy.c.i

CMakeFiles/CS50.dir/greedy.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CS50.dir/greedy.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/vlad/CLionProjects/CS50/greedy.c -o CMakeFiles/CS50.dir/greedy.c.s

CMakeFiles/CS50.dir/greedy.c.o.requires:

.PHONY : CMakeFiles/CS50.dir/greedy.c.o.requires

CMakeFiles/CS50.dir/greedy.c.o.provides: CMakeFiles/CS50.dir/greedy.c.o.requires
	$(MAKE) -f CMakeFiles/CS50.dir/build.make CMakeFiles/CS50.dir/greedy.c.o.provides.build
.PHONY : CMakeFiles/CS50.dir/greedy.c.o.provides

CMakeFiles/CS50.dir/greedy.c.o.provides.build: CMakeFiles/CS50.dir/greedy.c.o


CMakeFiles/CS50.dir/initialz.c.o: CMakeFiles/CS50.dir/flags.make
CMakeFiles/CS50.dir/initialz.c.o: ../initialz.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vlad/CLionProjects/CS50/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/CS50.dir/initialz.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CS50.dir/initialz.c.o   -c /home/vlad/CLionProjects/CS50/initialz.c

CMakeFiles/CS50.dir/initialz.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CS50.dir/initialz.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/vlad/CLionProjects/CS50/initialz.c > CMakeFiles/CS50.dir/initialz.c.i

CMakeFiles/CS50.dir/initialz.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CS50.dir/initialz.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/vlad/CLionProjects/CS50/initialz.c -o CMakeFiles/CS50.dir/initialz.c.s

CMakeFiles/CS50.dir/initialz.c.o.requires:

.PHONY : CMakeFiles/CS50.dir/initialz.c.o.requires

CMakeFiles/CS50.dir/initialz.c.o.provides: CMakeFiles/CS50.dir/initialz.c.o.requires
	$(MAKE) -f CMakeFiles/CS50.dir/build.make CMakeFiles/CS50.dir/initialz.c.o.provides.build
.PHONY : CMakeFiles/CS50.dir/initialz.c.o.provides

CMakeFiles/CS50.dir/initialz.c.o.provides.build: CMakeFiles/CS50.dir/initialz.c.o


# Object files for target CS50
CS50_OBJECTS = \
"CMakeFiles/CS50.dir/main.c.o" \
"CMakeFiles/CS50.dir/water.c.o" \
"CMakeFiles/CS50.dir/greedy.c.o" \
"CMakeFiles/CS50.dir/initialz.c.o"

# External object files for target CS50
CS50_EXTERNAL_OBJECTS =

CS50: CMakeFiles/CS50.dir/main.c.o
CS50: CMakeFiles/CS50.dir/water.c.o
CS50: CMakeFiles/CS50.dir/greedy.c.o
CS50: CMakeFiles/CS50.dir/initialz.c.o
CS50: CMakeFiles/CS50.dir/build.make
CS50: CMakeFiles/CS50.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vlad/CLionProjects/CS50/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable CS50"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CS50.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CS50.dir/build: CS50

.PHONY : CMakeFiles/CS50.dir/build

CMakeFiles/CS50.dir/requires: CMakeFiles/CS50.dir/main.c.o.requires
CMakeFiles/CS50.dir/requires: CMakeFiles/CS50.dir/water.c.o.requires
CMakeFiles/CS50.dir/requires: CMakeFiles/CS50.dir/greedy.c.o.requires
CMakeFiles/CS50.dir/requires: CMakeFiles/CS50.dir/initialz.c.o.requires

.PHONY : CMakeFiles/CS50.dir/requires

CMakeFiles/CS50.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CS50.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CS50.dir/clean

CMakeFiles/CS50.dir/depend:
	cd /home/vlad/CLionProjects/CS50/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vlad/CLionProjects/CS50 /home/vlad/CLionProjects/CS50 /home/vlad/CLionProjects/CS50/cmake-build-debug /home/vlad/CLionProjects/CS50/cmake-build-debug /home/vlad/CLionProjects/CS50/cmake-build-debug/CMakeFiles/CS50.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CS50.dir/depend

