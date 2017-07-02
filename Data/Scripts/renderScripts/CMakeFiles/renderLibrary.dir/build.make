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
include Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/depend.make

# Include the progress variables for this target.
include Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/progress.make

# Include the compile flags for this target's objects.
include Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/flags.make

Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/doRender.c.o: Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/flags.make
Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/doRender.c.o: Data/Scripts/renderScripts/doRender.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/emil/code/FirstGame/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/doRender.c.o"
	cd /home/emil/code/FirstGame/Data/Scripts/renderScripts && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/renderLibrary.dir/doRender.c.o   -c /home/emil/code/FirstGame/Data/Scripts/renderScripts/doRender.c

Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/doRender.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/renderLibrary.dir/doRender.c.i"
	cd /home/emil/code/FirstGame/Data/Scripts/renderScripts && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/emil/code/FirstGame/Data/Scripts/renderScripts/doRender.c > CMakeFiles/renderLibrary.dir/doRender.c.i

Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/doRender.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/renderLibrary.dir/doRender.c.s"
	cd /home/emil/code/FirstGame/Data/Scripts/renderScripts && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/emil/code/FirstGame/Data/Scripts/renderScripts/doRender.c -o CMakeFiles/renderLibrary.dir/doRender.c.s

Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/doRender.c.o.requires:

.PHONY : Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/doRender.c.o.requires

Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/doRender.c.o.provides: Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/doRender.c.o.requires
	$(MAKE) -f Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/build.make Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/doRender.c.o.provides.build
.PHONY : Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/doRender.c.o.provides

Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/doRender.c.o.provides.build: Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/doRender.c.o


Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/renderDeclareBackgrounds.c.o: Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/flags.make
Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/renderDeclareBackgrounds.c.o: Data/Scripts/renderScripts/renderDeclareBackgrounds.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/emil/code/FirstGame/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/renderDeclareBackgrounds.c.o"
	cd /home/emil/code/FirstGame/Data/Scripts/renderScripts && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/renderLibrary.dir/renderDeclareBackgrounds.c.o   -c /home/emil/code/FirstGame/Data/Scripts/renderScripts/renderDeclareBackgrounds.c

Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/renderDeclareBackgrounds.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/renderLibrary.dir/renderDeclareBackgrounds.c.i"
	cd /home/emil/code/FirstGame/Data/Scripts/renderScripts && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/emil/code/FirstGame/Data/Scripts/renderScripts/renderDeclareBackgrounds.c > CMakeFiles/renderLibrary.dir/renderDeclareBackgrounds.c.i

Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/renderDeclareBackgrounds.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/renderLibrary.dir/renderDeclareBackgrounds.c.s"
	cd /home/emil/code/FirstGame/Data/Scripts/renderScripts && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/emil/code/FirstGame/Data/Scripts/renderScripts/renderDeclareBackgrounds.c -o CMakeFiles/renderLibrary.dir/renderDeclareBackgrounds.c.s

Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/renderDeclareBackgrounds.c.o.requires:

.PHONY : Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/renderDeclareBackgrounds.c.o.requires

Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/renderDeclareBackgrounds.c.o.provides: Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/renderDeclareBackgrounds.c.o.requires
	$(MAKE) -f Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/build.make Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/renderDeclareBackgrounds.c.o.provides.build
.PHONY : Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/renderDeclareBackgrounds.c.o.provides

Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/renderDeclareBackgrounds.c.o.provides.build: Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/renderDeclareBackgrounds.c.o


Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/renderDeclareKnight1.c.o: Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/flags.make
Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/renderDeclareKnight1.c.o: Data/Scripts/renderScripts/renderDeclareKnight1.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/emil/code/FirstGame/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/renderDeclareKnight1.c.o"
	cd /home/emil/code/FirstGame/Data/Scripts/renderScripts && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/renderLibrary.dir/renderDeclareKnight1.c.o   -c /home/emil/code/FirstGame/Data/Scripts/renderScripts/renderDeclareKnight1.c

Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/renderDeclareKnight1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/renderLibrary.dir/renderDeclareKnight1.c.i"
	cd /home/emil/code/FirstGame/Data/Scripts/renderScripts && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/emil/code/FirstGame/Data/Scripts/renderScripts/renderDeclareKnight1.c > CMakeFiles/renderLibrary.dir/renderDeclareKnight1.c.i

Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/renderDeclareKnight1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/renderLibrary.dir/renderDeclareKnight1.c.s"
	cd /home/emil/code/FirstGame/Data/Scripts/renderScripts && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/emil/code/FirstGame/Data/Scripts/renderScripts/renderDeclareKnight1.c -o CMakeFiles/renderLibrary.dir/renderDeclareKnight1.c.s

Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/renderDeclareKnight1.c.o.requires:

.PHONY : Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/renderDeclareKnight1.c.o.requires

Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/renderDeclareKnight1.c.o.provides: Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/renderDeclareKnight1.c.o.requires
	$(MAKE) -f Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/build.make Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/renderDeclareKnight1.c.o.provides.build
.PHONY : Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/renderDeclareKnight1.c.o.provides

Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/renderDeclareKnight1.c.o.provides.build: Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/renderDeclareKnight1.c.o


# Object files for target renderLibrary
renderLibrary_OBJECTS = \
"CMakeFiles/renderLibrary.dir/doRender.c.o" \
"CMakeFiles/renderLibrary.dir/renderDeclareBackgrounds.c.o" \
"CMakeFiles/renderLibrary.dir/renderDeclareKnight1.c.o"

# External object files for target renderLibrary
renderLibrary_EXTERNAL_OBJECTS =

Data/Scripts/renderScripts/librenderLibrary.a: Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/doRender.c.o
Data/Scripts/renderScripts/librenderLibrary.a: Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/renderDeclareBackgrounds.c.o
Data/Scripts/renderScripts/librenderLibrary.a: Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/renderDeclareKnight1.c.o
Data/Scripts/renderScripts/librenderLibrary.a: Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/build.make
Data/Scripts/renderScripts/librenderLibrary.a: Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/emil/code/FirstGame/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C static library librenderLibrary.a"
	cd /home/emil/code/FirstGame/Data/Scripts/renderScripts && $(CMAKE_COMMAND) -P CMakeFiles/renderLibrary.dir/cmake_clean_target.cmake
	cd /home/emil/code/FirstGame/Data/Scripts/renderScripts && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/renderLibrary.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/build: Data/Scripts/renderScripts/librenderLibrary.a

.PHONY : Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/build

Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/requires: Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/doRender.c.o.requires
Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/requires: Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/renderDeclareBackgrounds.c.o.requires
Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/requires: Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/renderDeclareKnight1.c.o.requires

.PHONY : Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/requires

Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/clean:
	cd /home/emil/code/FirstGame/Data/Scripts/renderScripts && $(CMAKE_COMMAND) -P CMakeFiles/renderLibrary.dir/cmake_clean.cmake
.PHONY : Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/clean

Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/depend:
	cd /home/emil/code/FirstGame && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/emil/code/FirstGame /home/emil/code/FirstGame/Data/Scripts/renderScripts /home/emil/code/FirstGame /home/emil/code/FirstGame/Data/Scripts/renderScripts /home/emil/code/FirstGame/Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Data/Scripts/renderScripts/CMakeFiles/renderLibrary.dir/depend

