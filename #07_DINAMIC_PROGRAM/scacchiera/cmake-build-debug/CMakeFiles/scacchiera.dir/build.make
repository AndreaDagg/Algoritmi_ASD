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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Andrea D'Agg\Desktop\AlgoEs\Dinamic Programming Algorithms\scacchiera"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Andrea D'Agg\Desktop\AlgoEs\Dinamic Programming Algorithms\scacchiera\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/scacchiera.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/scacchiera.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/scacchiera.dir/flags.make

CMakeFiles/scacchiera.dir/main.c.obj: CMakeFiles/scacchiera.dir/flags.make
CMakeFiles/scacchiera.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Andrea D'Agg\Desktop\AlgoEs\Dinamic Programming Algorithms\scacchiera\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/scacchiera.dir/main.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\scacchiera.dir\main.c.obj   -c "C:\Users\Andrea D'Agg\Desktop\AlgoEs\Dinamic Programming Algorithms\scacchiera\main.c"

CMakeFiles/scacchiera.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/scacchiera.dir/main.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Andrea D'Agg\Desktop\AlgoEs\Dinamic Programming Algorithms\scacchiera\main.c" > CMakeFiles\scacchiera.dir\main.c.i

CMakeFiles/scacchiera.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/scacchiera.dir/main.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Andrea D'Agg\Desktop\AlgoEs\Dinamic Programming Algorithms\scacchiera\main.c" -o CMakeFiles\scacchiera.dir\main.c.s

# Object files for target scacchiera
scacchiera_OBJECTS = \
"CMakeFiles/scacchiera.dir/main.c.obj"

# External object files for target scacchiera
scacchiera_EXTERNAL_OBJECTS =

scacchiera.exe: CMakeFiles/scacchiera.dir/main.c.obj
scacchiera.exe: CMakeFiles/scacchiera.dir/build.make
scacchiera.exe: CMakeFiles/scacchiera.dir/linklibs.rsp
scacchiera.exe: CMakeFiles/scacchiera.dir/objects1.rsp
scacchiera.exe: CMakeFiles/scacchiera.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Andrea D'Agg\Desktop\AlgoEs\Dinamic Programming Algorithms\scacchiera\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable scacchiera.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\scacchiera.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/scacchiera.dir/build: scacchiera.exe

.PHONY : CMakeFiles/scacchiera.dir/build

CMakeFiles/scacchiera.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\scacchiera.dir\cmake_clean.cmake
.PHONY : CMakeFiles/scacchiera.dir/clean

CMakeFiles/scacchiera.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Andrea D'Agg\Desktop\AlgoEs\Dinamic Programming Algorithms\scacchiera" "C:\Users\Andrea D'Agg\Desktop\AlgoEs\Dinamic Programming Algorithms\scacchiera" "C:\Users\Andrea D'Agg\Desktop\AlgoEs\Dinamic Programming Algorithms\scacchiera\cmake-build-debug" "C:\Users\Andrea D'Agg\Desktop\AlgoEs\Dinamic Programming Algorithms\scacchiera\cmake-build-debug" "C:\Users\Andrea D'Agg\Desktop\AlgoEs\Dinamic Programming Algorithms\scacchiera\cmake-build-debug\CMakeFiles\scacchiera.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/scacchiera.dir/depend

