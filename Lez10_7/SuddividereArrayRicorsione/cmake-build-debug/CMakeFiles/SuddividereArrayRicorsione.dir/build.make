# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Andrea D'Agg\CLionProjects\Lez07\SuddividereArrayRicorsione"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Andrea D'Agg\CLionProjects\Lez07\SuddividereArrayRicorsione\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/SuddividereArrayRicorsione.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SuddividereArrayRicorsione.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SuddividereArrayRicorsione.dir/flags.make

CMakeFiles/SuddividereArrayRicorsione.dir/main.c.obj: CMakeFiles/SuddividereArrayRicorsione.dir/flags.make
CMakeFiles/SuddividereArrayRicorsione.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Andrea D'Agg\CLionProjects\Lez07\SuddividereArrayRicorsione\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/SuddividereArrayRicorsione.dir/main.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\SuddividereArrayRicorsione.dir\main.c.obj   -c "C:\Users\Andrea D'Agg\CLionProjects\Lez07\SuddividereArrayRicorsione\main.c"

CMakeFiles/SuddividereArrayRicorsione.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SuddividereArrayRicorsione.dir/main.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Andrea D'Agg\CLionProjects\Lez07\SuddividereArrayRicorsione\main.c" > CMakeFiles\SuddividereArrayRicorsione.dir\main.c.i

CMakeFiles/SuddividereArrayRicorsione.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SuddividereArrayRicorsione.dir/main.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Andrea D'Agg\CLionProjects\Lez07\SuddividereArrayRicorsione\main.c" -o CMakeFiles\SuddividereArrayRicorsione.dir\main.c.s

# Object files for target SuddividereArrayRicorsione
SuddividereArrayRicorsione_OBJECTS = \
"CMakeFiles/SuddividereArrayRicorsione.dir/main.c.obj"

# External object files for target SuddividereArrayRicorsione
SuddividereArrayRicorsione_EXTERNAL_OBJECTS =

SuddividereArrayRicorsione.exe: CMakeFiles/SuddividereArrayRicorsione.dir/main.c.obj
SuddividereArrayRicorsione.exe: CMakeFiles/SuddividereArrayRicorsione.dir/build.make
SuddividereArrayRicorsione.exe: CMakeFiles/SuddividereArrayRicorsione.dir/linklibs.rsp
SuddividereArrayRicorsione.exe: CMakeFiles/SuddividereArrayRicorsione.dir/objects1.rsp
SuddividereArrayRicorsione.exe: CMakeFiles/SuddividereArrayRicorsione.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Andrea D'Agg\CLionProjects\Lez07\SuddividereArrayRicorsione\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable SuddividereArrayRicorsione.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SuddividereArrayRicorsione.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SuddividereArrayRicorsione.dir/build: SuddividereArrayRicorsione.exe

.PHONY : CMakeFiles/SuddividereArrayRicorsione.dir/build

CMakeFiles/SuddividereArrayRicorsione.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SuddividereArrayRicorsione.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SuddividereArrayRicorsione.dir/clean

CMakeFiles/SuddividereArrayRicorsione.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Andrea D'Agg\CLionProjects\Lez07\SuddividereArrayRicorsione" "C:\Users\Andrea D'Agg\CLionProjects\Lez07\SuddividereArrayRicorsione" "C:\Users\Andrea D'Agg\CLionProjects\Lez07\SuddividereArrayRicorsione\cmake-build-debug" "C:\Users\Andrea D'Agg\CLionProjects\Lez07\SuddividereArrayRicorsione\cmake-build-debug" "C:\Users\Andrea D'Agg\CLionProjects\Lez07\SuddividereArrayRicorsione\cmake-build-debug\CMakeFiles\SuddividereArrayRicorsione.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/SuddividereArrayRicorsione.dir/depend

