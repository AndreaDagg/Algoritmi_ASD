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
CMAKE_SOURCE_DIR = "C:\Users\Andrea D'Agg\Desktop\AlgoEs\Dinamic Programming Algorithms\Kanpsackrecursive"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Andrea D'Agg\Desktop\AlgoEs\Dinamic Programming Algorithms\Kanpsackrecursive\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Kanpsackrecursive.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Kanpsackrecursive.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Kanpsackrecursive.dir/flags.make

CMakeFiles/Kanpsackrecursive.dir/main.c.obj: CMakeFiles/Kanpsackrecursive.dir/flags.make
CMakeFiles/Kanpsackrecursive.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Andrea D'Agg\Desktop\AlgoEs\Dinamic Programming Algorithms\Kanpsackrecursive\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Kanpsackrecursive.dir/main.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Kanpsackrecursive.dir\main.c.obj   -c "C:\Users\Andrea D'Agg\Desktop\AlgoEs\Dinamic Programming Algorithms\Kanpsackrecursive\main.c"

CMakeFiles/Kanpsackrecursive.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Kanpsackrecursive.dir/main.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Andrea D'Agg\Desktop\AlgoEs\Dinamic Programming Algorithms\Kanpsackrecursive\main.c" > CMakeFiles\Kanpsackrecursive.dir\main.c.i

CMakeFiles/Kanpsackrecursive.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Kanpsackrecursive.dir/main.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Andrea D'Agg\Desktop\AlgoEs\Dinamic Programming Algorithms\Kanpsackrecursive\main.c" -o CMakeFiles\Kanpsackrecursive.dir\main.c.s

# Object files for target Kanpsackrecursive
Kanpsackrecursive_OBJECTS = \
"CMakeFiles/Kanpsackrecursive.dir/main.c.obj"

# External object files for target Kanpsackrecursive
Kanpsackrecursive_EXTERNAL_OBJECTS =

Kanpsackrecursive.exe: CMakeFiles/Kanpsackrecursive.dir/main.c.obj
Kanpsackrecursive.exe: CMakeFiles/Kanpsackrecursive.dir/build.make
Kanpsackrecursive.exe: CMakeFiles/Kanpsackrecursive.dir/linklibs.rsp
Kanpsackrecursive.exe: CMakeFiles/Kanpsackrecursive.dir/objects1.rsp
Kanpsackrecursive.exe: CMakeFiles/Kanpsackrecursive.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Andrea D'Agg\Desktop\AlgoEs\Dinamic Programming Algorithms\Kanpsackrecursive\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Kanpsackrecursive.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Kanpsackrecursive.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Kanpsackrecursive.dir/build: Kanpsackrecursive.exe

.PHONY : CMakeFiles/Kanpsackrecursive.dir/build

CMakeFiles/Kanpsackrecursive.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Kanpsackrecursive.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Kanpsackrecursive.dir/clean

CMakeFiles/Kanpsackrecursive.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Andrea D'Agg\Desktop\AlgoEs\Dinamic Programming Algorithms\Kanpsackrecursive" "C:\Users\Andrea D'Agg\Desktop\AlgoEs\Dinamic Programming Algorithms\Kanpsackrecursive" "C:\Users\Andrea D'Agg\Desktop\AlgoEs\Dinamic Programming Algorithms\Kanpsackrecursive\cmake-build-debug" "C:\Users\Andrea D'Agg\Desktop\AlgoEs\Dinamic Programming Algorithms\Kanpsackrecursive\cmake-build-debug" "C:\Users\Andrea D'Agg\Desktop\AlgoEs\Dinamic Programming Algorithms\Kanpsackrecursive\cmake-build-debug\CMakeFiles\Kanpsackrecursive.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Kanpsackrecursive.dir/depend
