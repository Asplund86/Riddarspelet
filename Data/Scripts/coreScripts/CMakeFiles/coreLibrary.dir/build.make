# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = /home/emil/aur-builds/clion-2017.1.2/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/emil/aur-builds/clion-2017.1.2/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/emil/code/FirstGame

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/emil/code/FirstGame

# Include any dependencies generated for this target.
include Data/Scripts/coreScripts/CMakeFiles/coreLibrary.dir/depend.make

# Include the progress variables for this target.
include Data/Scripts/coreScripts/CMakeFiles/coreLibrary.dir/progress.make

# Include the compile flags for this target's objects.
include Data/Scripts/coreScripts/CMakeFiles/coreLibrary.dir/flags.make

Data/Scripts/coreScripts/CMakeFiles/coreLibrary.dir/coreEvents.c.o: Data/Scripts/coreScripts/CMakeFiles/coreLibrary.dir/flags.make
Data/Scripts/coreScripts/CMakeFiles/coreLibrary.dir/coreEvents.c.o: Data/Scripts/coreScripts/coreEvents.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/emil/code/FirstGame/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object Data/Scripts/coreScripts/CMakeFiles/coreLibrary.dir/coreEvents.c.o"
	cd /home/emil/code/FirstGame/Data/Scripts/coreScripts && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/coreLibrary.dir/coreEvents.c.o   -c /home/emil/code/FirstGame/Data/Scripts/coreScripts/coreEvents.c

Data/Scripts/coreScripts/CMakeFiles/coreLibrary.dir/coreEvents.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/coreLibrary.dir/coreEvents.c.i"
	cd /home/emil/code/FirstGame/Data/Scripts/coreScripts && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/emil/code/FirstGame/Data/Scripts/coreScripts/coreEvents.c > CMakeFiles/coreLibrary.dir/coreEvents.c.i

Data/Scripts/coreScripts/CMakeFiles/coreLibrary.dir/coreEvents.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/coreLibrary.dir/coreEvents.c.s"
	cd /home/emil/code/FirstGame/Data/Scripts/coreScripts && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/emil/code/FirstGame/Data/Scripts/coreScripts/coreEvents.c -o CMakeFiles/coreLibrary.dir/coreEvents.c.s

Data/Scripts/coreScripts/CMakeFiles/coreLibrary.dir/coreEvents.c.o.requires:

.PHONY : Data/Scripts/coreScripts/CMakeFiles/coreLibrary.dir/coreEvents.c.o.requires

Data/Scripts/coreScripts/CMakeFiles/coreLibrary.dir/coreEvents.c.o.provides: Data/Scripts/coreScripts/CMakeFiles/coreLibrary.dir/coreEvents.c.o.requires
	$(MAKE) -f Data/Scripts/coreScripts/CMakeFiles/coreLibrary.dir/build.make Data/Scripts/coreScripts/CMakeFiles/coreLibrary.dir/coreEvents.c.o.provides.build
.PHONY : Data/Scripts/coreScripts/CMakeFiles/coreLibrary.dir/coreEvents.c.o.provides

Data/Scripts/coreScripts/CMakeFiles/coreLibrary.dir/coreEvents.c.o.provides.build: Data/Scripts/coreScripts/CMakeFiles/coreLibrary.dir/coreEvents.c.o


# Object files for target coreLibrary
coreLibrary_OBJECTS = \
"CMakeFiles/coreLibrary.dir/coreEvents.c.o"

# External object files for target coreLibrary
coreLibrary_EXTERNAL_OBJECTS =

Data/Scripts/coreScripts/libcoreLibrary.a: Data/Scripts/coreScripts/CMakeFiles/coreLibrary.dir/coreEvents.c.o
Data/Scripts/coreScripts/libcoreLibrary.a: Data/Scripts/coreScripts/CMakeFiles/coreLibrary.dir/build.make
Data/Scripts/coreScripts/libcoreLibrary.a: Data/Scripts/coreScripts/CMakeFiles/coreLibrary.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/emil/code/FirstGame/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libcoreLibrary.a"
	cd /home/emil/code/FirstGame/Data/Scripts/coreScripts && $(CMAKE_COMMAND) -P CMakeFiles/coreLibrary.dir/cmake_clean_target.cmake
	cd /home/emil/code/FirstGame/Data/Scripts/coreScripts && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/coreLibrary.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Data/Scripts/coreScripts/CMakeFiles/coreLibrary.dir/build: Data/Scripts/coreScripts/libcoreLibrary.a

.PHONY : Data/Scripts/coreScripts/CMakeFiles/coreLibrary.dir/build

Data/Scripts/coreScripts/CMakeFiles/coreLibrary.dir/requires: Data/Scripts/coreScripts/CMakeFiles/coreLibrary.dir/coreEvents.c.o.requires

.PHONY : Data/Scripts/coreScripts/CMakeFiles/coreLibrary.dir/requires

Data/Scripts/coreScripts/CMakeFiles/coreLibrary.dir/clean:
	cd /home/emil/code/FirstGame/Data/Scripts/coreScripts && $(CMAKE_COMMAND) -P CMakeFiles/coreLibrary.dir/cmake_clean.cmake
.PHONY : Data/Scripts/coreScripts/CMakeFiles/coreLibrary.dir/clean

Data/Scripts/coreScripts/CMakeFiles/coreLibrary.dir/depend:
	cd /home/emil/code/FirstGame && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/emil/code/FirstGame /home/emil/code/FirstGame/Data/Scripts/coreScripts /home/emil/code/FirstGame /home/emil/code/FirstGame/Data/Scripts/coreScripts /home/emil/code/FirstGame/Data/Scripts/coreScripts/CMakeFiles/coreLibrary.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Data/Scripts/coreScripts/CMakeFiles/coreLibrary.dir/depend

