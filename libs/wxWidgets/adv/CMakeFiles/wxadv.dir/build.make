# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 4.0

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/teejarr/Code/Libraries/wxWidgets-3.2.8

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/teejarr/Code/Libraries/wxWidgets

# Include any dependencies generated for this target.
include libs/adv/CMakeFiles/wxadv.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include libs/adv/CMakeFiles/wxadv.dir/compiler_depend.make

# Include the progress variables for this target.
include libs/adv/CMakeFiles/wxadv.dir/progress.make

# Include the compile flags for this target's objects.
include libs/adv/CMakeFiles/wxadv.dir/flags.make

libs/adv/CMakeFiles/wxadv.dir/codegen:
.PHONY : libs/adv/CMakeFiles/wxadv.dir/codegen

libs/adv/CMakeFiles/wxadv.dir/__/__/__/__/src/common/dummy.cpp.o: libs/adv/CMakeFiles/wxadv.dir/flags.make
libs/adv/CMakeFiles/wxadv.dir/__/__/__/__/src/common/dummy.cpp.o: /home/teejarr/Code/Libraries/wxWidgets-3.2.8/src/common/dummy.cpp
libs/adv/CMakeFiles/wxadv.dir/__/__/__/__/src/common/dummy.cpp.o: libs/adv/CMakeFiles/wxadv.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/teejarr/Code/Libraries/wxWidgets/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object libs/adv/CMakeFiles/wxadv.dir/__/__/__/__/src/common/dummy.cpp.o"
	cd /home/teejarr/Code/Libraries/wxWidgets/libs/adv && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libs/adv/CMakeFiles/wxadv.dir/__/__/__/__/src/common/dummy.cpp.o -MF CMakeFiles/wxadv.dir/__/__/__/__/src/common/dummy.cpp.o.d -o CMakeFiles/wxadv.dir/__/__/__/__/src/common/dummy.cpp.o -c /home/teejarr/Code/Libraries/wxWidgets-3.2.8/src/common/dummy.cpp

libs/adv/CMakeFiles/wxadv.dir/__/__/__/__/src/common/dummy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/wxadv.dir/__/__/__/__/src/common/dummy.cpp.i"
	cd /home/teejarr/Code/Libraries/wxWidgets/libs/adv && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/teejarr/Code/Libraries/wxWidgets-3.2.8/src/common/dummy.cpp > CMakeFiles/wxadv.dir/__/__/__/__/src/common/dummy.cpp.i

libs/adv/CMakeFiles/wxadv.dir/__/__/__/__/src/common/dummy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/wxadv.dir/__/__/__/__/src/common/dummy.cpp.s"
	cd /home/teejarr/Code/Libraries/wxWidgets/libs/adv && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/teejarr/Code/Libraries/wxWidgets-3.2.8/src/common/dummy.cpp -o CMakeFiles/wxadv.dir/__/__/__/__/src/common/dummy.cpp.s

# Object files for target wxadv
wxadv_OBJECTS = \
"CMakeFiles/wxadv.dir/__/__/__/__/src/common/dummy.cpp.o"

# External object files for target wxadv
wxadv_EXTERNAL_OBJECTS =

lib/libwx_gtk3u_adv-3.2.a: libs/adv/CMakeFiles/wxadv.dir/__/__/__/__/src/common/dummy.cpp.o
lib/libwx_gtk3u_adv-3.2.a: libs/adv/CMakeFiles/wxadv.dir/build.make
lib/libwx_gtk3u_adv-3.2.a: libs/adv/CMakeFiles/wxadv.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/teejarr/Code/Libraries/wxWidgets/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../lib/libwx_gtk3u_adv-3.2.a"
	cd /home/teejarr/Code/Libraries/wxWidgets/libs/adv && $(CMAKE_COMMAND) -P CMakeFiles/wxadv.dir/cmake_clean_target.cmake
	cd /home/teejarr/Code/Libraries/wxWidgets/libs/adv && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/wxadv.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
libs/adv/CMakeFiles/wxadv.dir/build: lib/libwx_gtk3u_adv-3.2.a
.PHONY : libs/adv/CMakeFiles/wxadv.dir/build

libs/adv/CMakeFiles/wxadv.dir/clean:
	cd /home/teejarr/Code/Libraries/wxWidgets/libs/adv && $(CMAKE_COMMAND) -P CMakeFiles/wxadv.dir/cmake_clean.cmake
.PHONY : libs/adv/CMakeFiles/wxadv.dir/clean

libs/adv/CMakeFiles/wxadv.dir/depend:
	cd /home/teejarr/Code/Libraries/wxWidgets && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/teejarr/Code/Libraries/wxWidgets-3.2.8 /home/teejarr/Code/Libraries/wxWidgets-3.2.8/build/cmake/lib/adv /home/teejarr/Code/Libraries/wxWidgets /home/teejarr/Code/Libraries/wxWidgets/libs/adv /home/teejarr/Code/Libraries/wxWidgets/libs/adv/CMakeFiles/wxadv.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : libs/adv/CMakeFiles/wxadv.dir/depend

