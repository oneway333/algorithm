# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\git_C\algorithm\C_Learning

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\git_C\algorithm\C_Learning\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/C_Learning.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/C_Learning.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/C_Learning.dir/flags.make

CMakeFiles/C_Learning.dir/main.c.obj: CMakeFiles/C_Learning.dir/flags.make
CMakeFiles/C_Learning.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\git_C\algorithm\C_Learning\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/C_Learning.dir/main.c.obj"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\C_Learning.dir\main.c.obj   -c D:\git_C\algorithm\C_Learning\main.c

CMakeFiles/C_Learning.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/C_Learning.dir/main.c.i"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\git_C\algorithm\C_Learning\main.c > CMakeFiles\C_Learning.dir\main.c.i

CMakeFiles/C_Learning.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/C_Learning.dir/main.c.s"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\git_C\algorithm\C_Learning\main.c -o CMakeFiles\C_Learning.dir\main.c.s

CMakeFiles/C_Learning.dir/queue.c.obj: CMakeFiles/C_Learning.dir/flags.make
CMakeFiles/C_Learning.dir/queue.c.obj: ../queue.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\git_C\algorithm\C_Learning\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/C_Learning.dir/queue.c.obj"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\C_Learning.dir\queue.c.obj   -c D:\git_C\algorithm\C_Learning\queue.c

CMakeFiles/C_Learning.dir/queue.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/C_Learning.dir/queue.c.i"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\git_C\algorithm\C_Learning\queue.c > CMakeFiles\C_Learning.dir\queue.c.i

CMakeFiles/C_Learning.dir/queue.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/C_Learning.dir/queue.c.s"
	C:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\git_C\algorithm\C_Learning\queue.c -o CMakeFiles\C_Learning.dir\queue.c.s

# Object files for target C_Learning
C_Learning_OBJECTS = \
"CMakeFiles/C_Learning.dir/main.c.obj" \
"CMakeFiles/C_Learning.dir/queue.c.obj"

# External object files for target C_Learning
C_Learning_EXTERNAL_OBJECTS =

C_Learning.exe: CMakeFiles/C_Learning.dir/main.c.obj
C_Learning.exe: CMakeFiles/C_Learning.dir/queue.c.obj
C_Learning.exe: CMakeFiles/C_Learning.dir/build.make
C_Learning.exe: CMakeFiles/C_Learning.dir/linklibs.rsp
C_Learning.exe: CMakeFiles/C_Learning.dir/objects1.rsp
C_Learning.exe: CMakeFiles/C_Learning.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\git_C\algorithm\C_Learning\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable C_Learning.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\C_Learning.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/C_Learning.dir/build: C_Learning.exe

.PHONY : CMakeFiles/C_Learning.dir/build

CMakeFiles/C_Learning.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\C_Learning.dir\cmake_clean.cmake
.PHONY : CMakeFiles/C_Learning.dir/clean

CMakeFiles/C_Learning.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\git_C\algorithm\C_Learning D:\git_C\algorithm\C_Learning D:\git_C\algorithm\C_Learning\cmake-build-debug D:\git_C\algorithm\C_Learning\cmake-build-debug D:\git_C\algorithm\C_Learning\cmake-build-debug\CMakeFiles\C_Learning.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/C_Learning.dir/depend

