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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/qmtruong92/CLionProjects/CPP/Project3CPP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/qmtruong92/CLionProjects/CPP/Project3CPP/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Project3CPP.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Project3CPP.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Project3CPP.dir/flags.make

CMakeFiles/Project3CPP.dir/main.cpp.o: CMakeFiles/Project3CPP.dir/flags.make
CMakeFiles/Project3CPP.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/qmtruong92/CLionProjects/CPP/Project3CPP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Project3CPP.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project3CPP.dir/main.cpp.o -c /Users/qmtruong92/CLionProjects/CPP/Project3CPP/main.cpp

CMakeFiles/Project3CPP.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project3CPP.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/qmtruong92/CLionProjects/CPP/Project3CPP/main.cpp > CMakeFiles/Project3CPP.dir/main.cpp.i

CMakeFiles/Project3CPP.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project3CPP.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/qmtruong92/CLionProjects/CPP/Project3CPP/main.cpp -o CMakeFiles/Project3CPP.dir/main.cpp.s

CMakeFiles/Project3CPP.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Project3CPP.dir/main.cpp.o.requires

CMakeFiles/Project3CPP.dir/main.cpp.o.provides: CMakeFiles/Project3CPP.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Project3CPP.dir/build.make CMakeFiles/Project3CPP.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Project3CPP.dir/main.cpp.o.provides

CMakeFiles/Project3CPP.dir/main.cpp.o.provides.build: CMakeFiles/Project3CPP.dir/main.cpp.o


# Object files for target Project3CPP
Project3CPP_OBJECTS = \
"CMakeFiles/Project3CPP.dir/main.cpp.o"

# External object files for target Project3CPP
Project3CPP_EXTERNAL_OBJECTS =

Project3CPP: CMakeFiles/Project3CPP.dir/main.cpp.o
Project3CPP: CMakeFiles/Project3CPP.dir/build.make
Project3CPP: CMakeFiles/Project3CPP.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/qmtruong92/CLionProjects/CPP/Project3CPP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Project3CPP"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Project3CPP.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Project3CPP.dir/build: Project3CPP

.PHONY : CMakeFiles/Project3CPP.dir/build

CMakeFiles/Project3CPP.dir/requires: CMakeFiles/Project3CPP.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Project3CPP.dir/requires

CMakeFiles/Project3CPP.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Project3CPP.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Project3CPP.dir/clean

CMakeFiles/Project3CPP.dir/depend:
	cd /Users/qmtruong92/CLionProjects/CPP/Project3CPP/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/qmtruong92/CLionProjects/CPP/Project3CPP /Users/qmtruong92/CLionProjects/CPP/Project3CPP /Users/qmtruong92/CLionProjects/CPP/Project3CPP/cmake-build-debug /Users/qmtruong92/CLionProjects/CPP/Project3CPP/cmake-build-debug /Users/qmtruong92/CLionProjects/CPP/Project3CPP/cmake-build-debug/CMakeFiles/Project3CPP.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Project3CPP.dir/depend

