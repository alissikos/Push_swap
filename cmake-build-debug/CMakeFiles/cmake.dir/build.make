# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/aheidy/push_swap

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/aheidy/push_swap/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cmake.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/cmake.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cmake.dir/flags.make

CMakeFiles/cmake.dir/error.c.o: CMakeFiles/cmake.dir/flags.make
CMakeFiles/cmake.dir/error.c.o: ../error.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aheidy/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/cmake.dir/error.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/cmake.dir/error.c.o -c /Users/aheidy/push_swap/error.c

CMakeFiles/cmake.dir/error.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cmake.dir/error.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/aheidy/push_swap/error.c > CMakeFiles/cmake.dir/error.c.i

CMakeFiles/cmake.dir/error.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cmake.dir/error.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/aheidy/push_swap/error.c -o CMakeFiles/cmake.dir/error.c.s

CMakeFiles/cmake.dir/operations.c.o: CMakeFiles/cmake.dir/flags.make
CMakeFiles/cmake.dir/operations.c.o: ../operations.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aheidy/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/cmake.dir/operations.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/cmake.dir/operations.c.o -c /Users/aheidy/push_swap/operations.c

CMakeFiles/cmake.dir/operations.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cmake.dir/operations.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/aheidy/push_swap/operations.c > CMakeFiles/cmake.dir/operations.c.i

CMakeFiles/cmake.dir/operations.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cmake.dir/operations.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/aheidy/push_swap/operations.c -o CMakeFiles/cmake.dir/operations.c.s

CMakeFiles/cmake.dir/push_swap.c.o: CMakeFiles/cmake.dir/flags.make
CMakeFiles/cmake.dir/push_swap.c.o: ../push_swap.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aheidy/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/cmake.dir/push_swap.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/cmake.dir/push_swap.c.o -c /Users/aheidy/push_swap/push_swap.c

CMakeFiles/cmake.dir/push_swap.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cmake.dir/push_swap.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/aheidy/push_swap/push_swap.c > CMakeFiles/cmake.dir/push_swap.c.i

CMakeFiles/cmake.dir/push_swap.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cmake.dir/push_swap.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/aheidy/push_swap/push_swap.c -o CMakeFiles/cmake.dir/push_swap.c.s

CMakeFiles/cmake.dir/small_sort.c.o: CMakeFiles/cmake.dir/flags.make
CMakeFiles/cmake.dir/small_sort.c.o: ../small_sort.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aheidy/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/cmake.dir/small_sort.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/cmake.dir/small_sort.c.o -c /Users/aheidy/push_swap/small_sort.c

CMakeFiles/cmake.dir/small_sort.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cmake.dir/small_sort.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/aheidy/push_swap/small_sort.c > CMakeFiles/cmake.dir/small_sort.c.i

CMakeFiles/cmake.dir/small_sort.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cmake.dir/small_sort.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/aheidy/push_swap/small_sort.c -o CMakeFiles/cmake.dir/small_sort.c.s

CMakeFiles/cmake.dir/stack.c.o: CMakeFiles/cmake.dir/flags.make
CMakeFiles/cmake.dir/stack.c.o: ../stack.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aheidy/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/cmake.dir/stack.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/cmake.dir/stack.c.o -c /Users/aheidy/push_swap/stack.c

CMakeFiles/cmake.dir/stack.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cmake.dir/stack.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/aheidy/push_swap/stack.c > CMakeFiles/cmake.dir/stack.c.i

CMakeFiles/cmake.dir/stack.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cmake.dir/stack.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/aheidy/push_swap/stack.c -o CMakeFiles/cmake.dir/stack.c.s

CMakeFiles/cmake.dir/big_sort.c.o: CMakeFiles/cmake.dir/flags.make
CMakeFiles/cmake.dir/big_sort.c.o: ../big_sort.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aheidy/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/cmake.dir/big_sort.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/cmake.dir/big_sort.c.o -c /Users/aheidy/push_swap/big_sort.c

CMakeFiles/cmake.dir/big_sort.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cmake.dir/big_sort.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/aheidy/push_swap/big_sort.c > CMakeFiles/cmake.dir/big_sort.c.i

CMakeFiles/cmake.dir/big_sort.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cmake.dir/big_sort.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/aheidy/push_swap/big_sort.c -o CMakeFiles/cmake.dir/big_sort.c.s

CMakeFiles/cmake.dir/array.c.o: CMakeFiles/cmake.dir/flags.make
CMakeFiles/cmake.dir/array.c.o: ../array.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aheidy/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/cmake.dir/array.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/cmake.dir/array.c.o -c /Users/aheidy/push_swap/array.c

CMakeFiles/cmake.dir/array.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cmake.dir/array.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/aheidy/push_swap/array.c > CMakeFiles/cmake.dir/array.c.i

CMakeFiles/cmake.dir/array.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cmake.dir/array.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/aheidy/push_swap/array.c -o CMakeFiles/cmake.dir/array.c.s

CMakeFiles/cmake.dir/check.c.o: CMakeFiles/cmake.dir/flags.make
CMakeFiles/cmake.dir/check.c.o: ../check.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aheidy/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/cmake.dir/check.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/cmake.dir/check.c.o -c /Users/aheidy/push_swap/check.c

CMakeFiles/cmake.dir/check.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cmake.dir/check.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/aheidy/push_swap/check.c > CMakeFiles/cmake.dir/check.c.i

CMakeFiles/cmake.dir/check.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cmake.dir/check.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/aheidy/push_swap/check.c -o CMakeFiles/cmake.dir/check.c.s

# Object files for target cmake
cmake_OBJECTS = \
"CMakeFiles/cmake.dir/error.c.o" \
"CMakeFiles/cmake.dir/operations.c.o" \
"CMakeFiles/cmake.dir/push_swap.c.o" \
"CMakeFiles/cmake.dir/small_sort.c.o" \
"CMakeFiles/cmake.dir/stack.c.o" \
"CMakeFiles/cmake.dir/big_sort.c.o" \
"CMakeFiles/cmake.dir/array.c.o" \
"CMakeFiles/cmake.dir/check.c.o"

# External object files for target cmake
cmake_EXTERNAL_OBJECTS =

cmake: CMakeFiles/cmake.dir/error.c.o
cmake: CMakeFiles/cmake.dir/operations.c.o
cmake: CMakeFiles/cmake.dir/push_swap.c.o
cmake: CMakeFiles/cmake.dir/small_sort.c.o
cmake: CMakeFiles/cmake.dir/stack.c.o
cmake: CMakeFiles/cmake.dir/big_sort.c.o
cmake: CMakeFiles/cmake.dir/array.c.o
cmake: CMakeFiles/cmake.dir/check.c.o
cmake: CMakeFiles/cmake.dir/build.make
cmake: CMakeFiles/cmake.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/aheidy/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking C executable cmake"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cmake.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cmake.dir/build: cmake
.PHONY : CMakeFiles/cmake.dir/build

CMakeFiles/cmake.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cmake.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cmake.dir/clean

CMakeFiles/cmake.dir/depend:
	cd /Users/aheidy/push_swap/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/aheidy/push_swap /Users/aheidy/push_swap /Users/aheidy/push_swap/cmake-build-debug /Users/aheidy/push_swap/cmake-build-debug /Users/aheidy/push_swap/cmake-build-debug/CMakeFiles/cmake.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cmake.dir/depend

