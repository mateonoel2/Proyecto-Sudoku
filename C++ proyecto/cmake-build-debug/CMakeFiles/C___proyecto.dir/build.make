# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/m.noel/Desktop/C++ proyecto"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/m.noel/Desktop/C++ proyecto/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/C___proyecto.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/C___proyecto.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/C___proyecto.dir/flags.make

CMakeFiles/C___proyecto.dir/main.cpp.o: CMakeFiles/C___proyecto.dir/flags.make
CMakeFiles/C___proyecto.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/m.noel/Desktop/C++ proyecto/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/C___proyecto.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/C___proyecto.dir/main.cpp.o -c "/Users/m.noel/Desktop/C++ proyecto/main.cpp"

CMakeFiles/C___proyecto.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/C___proyecto.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/m.noel/Desktop/C++ proyecto/main.cpp" > CMakeFiles/C___proyecto.dir/main.cpp.i

CMakeFiles/C___proyecto.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/C___proyecto.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/m.noel/Desktop/C++ proyecto/main.cpp" -o CMakeFiles/C___proyecto.dir/main.cpp.s

# Object files for target C___proyecto
C___proyecto_OBJECTS = \
"CMakeFiles/C___proyecto.dir/main.cpp.o"

# External object files for target C___proyecto
C___proyecto_EXTERNAL_OBJECTS =

C___proyecto: CMakeFiles/C___proyecto.dir/main.cpp.o
C___proyecto: CMakeFiles/C___proyecto.dir/build.make
C___proyecto: CMakeFiles/C___proyecto.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/m.noel/Desktop/C++ proyecto/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable C___proyecto"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/C___proyecto.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/C___proyecto.dir/build: C___proyecto

.PHONY : CMakeFiles/C___proyecto.dir/build

CMakeFiles/C___proyecto.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/C___proyecto.dir/cmake_clean.cmake
.PHONY : CMakeFiles/C___proyecto.dir/clean

CMakeFiles/C___proyecto.dir/depend:
	cd "/Users/m.noel/Desktop/C++ proyecto/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/m.noel/Desktop/C++ proyecto" "/Users/m.noel/Desktop/C++ proyecto" "/Users/m.noel/Desktop/C++ proyecto/cmake-build-debug" "/Users/m.noel/Desktop/C++ proyecto/cmake-build-debug" "/Users/m.noel/Desktop/C++ proyecto/cmake-build-debug/CMakeFiles/C___proyecto.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/C___proyecto.dir/depend

