# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_SOURCE_DIR = /Users/stevenovis/CLionProjects/ProjectB

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/stevenovis/CLionProjects/ProjectB/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ProjectB.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ProjectB.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ProjectB.dir/flags.make

CMakeFiles/ProjectB.dir/EuropeanOption.cpp.o: CMakeFiles/ProjectB.dir/flags.make
CMakeFiles/ProjectB.dir/EuropeanOption.cpp.o: ../EuropeanOption.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/stevenovis/CLionProjects/ProjectB/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ProjectB.dir/EuropeanOption.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ProjectB.dir/EuropeanOption.cpp.o -c /Users/stevenovis/CLionProjects/ProjectB/EuropeanOption.cpp

CMakeFiles/ProjectB.dir/EuropeanOption.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ProjectB.dir/EuropeanOption.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/stevenovis/CLionProjects/ProjectB/EuropeanOption.cpp > CMakeFiles/ProjectB.dir/EuropeanOption.cpp.i

CMakeFiles/ProjectB.dir/EuropeanOption.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ProjectB.dir/EuropeanOption.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/stevenovis/CLionProjects/ProjectB/EuropeanOption.cpp -o CMakeFiles/ProjectB.dir/EuropeanOption.cpp.s

CMakeFiles/ProjectB.dir/EuropeanOption.cpp.o.requires:

.PHONY : CMakeFiles/ProjectB.dir/EuropeanOption.cpp.o.requires

CMakeFiles/ProjectB.dir/EuropeanOption.cpp.o.provides: CMakeFiles/ProjectB.dir/EuropeanOption.cpp.o.requires
	$(MAKE) -f CMakeFiles/ProjectB.dir/build.make CMakeFiles/ProjectB.dir/EuropeanOption.cpp.o.provides.build
.PHONY : CMakeFiles/ProjectB.dir/EuropeanOption.cpp.o.provides

CMakeFiles/ProjectB.dir/EuropeanOption.cpp.o.provides.build: CMakeFiles/ProjectB.dir/EuropeanOption.cpp.o


CMakeFiles/ProjectB.dir/main.cpp.o: CMakeFiles/ProjectB.dir/flags.make
CMakeFiles/ProjectB.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/stevenovis/CLionProjects/ProjectB/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ProjectB.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ProjectB.dir/main.cpp.o -c /Users/stevenovis/CLionProjects/ProjectB/main.cpp

CMakeFiles/ProjectB.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ProjectB.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/stevenovis/CLionProjects/ProjectB/main.cpp > CMakeFiles/ProjectB.dir/main.cpp.i

CMakeFiles/ProjectB.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ProjectB.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/stevenovis/CLionProjects/ProjectB/main.cpp -o CMakeFiles/ProjectB.dir/main.cpp.s

CMakeFiles/ProjectB.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/ProjectB.dir/main.cpp.o.requires

CMakeFiles/ProjectB.dir/main.cpp.o.provides: CMakeFiles/ProjectB.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/ProjectB.dir/build.make CMakeFiles/ProjectB.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/ProjectB.dir/main.cpp.o.provides

CMakeFiles/ProjectB.dir/main.cpp.o.provides.build: CMakeFiles/ProjectB.dir/main.cpp.o


CMakeFiles/ProjectB.dir/Pricing.cpp.o: CMakeFiles/ProjectB.dir/flags.make
CMakeFiles/ProjectB.dir/Pricing.cpp.o: ../Pricing.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/stevenovis/CLionProjects/ProjectB/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ProjectB.dir/Pricing.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ProjectB.dir/Pricing.cpp.o -c /Users/stevenovis/CLionProjects/ProjectB/Pricing.cpp

CMakeFiles/ProjectB.dir/Pricing.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ProjectB.dir/Pricing.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/stevenovis/CLionProjects/ProjectB/Pricing.cpp > CMakeFiles/ProjectB.dir/Pricing.cpp.i

CMakeFiles/ProjectB.dir/Pricing.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ProjectB.dir/Pricing.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/stevenovis/CLionProjects/ProjectB/Pricing.cpp -o CMakeFiles/ProjectB.dir/Pricing.cpp.s

CMakeFiles/ProjectB.dir/Pricing.cpp.o.requires:

.PHONY : CMakeFiles/ProjectB.dir/Pricing.cpp.o.requires

CMakeFiles/ProjectB.dir/Pricing.cpp.o.provides: CMakeFiles/ProjectB.dir/Pricing.cpp.o.requires
	$(MAKE) -f CMakeFiles/ProjectB.dir/build.make CMakeFiles/ProjectB.dir/Pricing.cpp.o.provides.build
.PHONY : CMakeFiles/ProjectB.dir/Pricing.cpp.o.provides

CMakeFiles/ProjectB.dir/Pricing.cpp.o.provides.build: CMakeFiles/ProjectB.dir/Pricing.cpp.o


CMakeFiles/ProjectB.dir/AmericanOptions.cpp.o: CMakeFiles/ProjectB.dir/flags.make
CMakeFiles/ProjectB.dir/AmericanOptions.cpp.o: ../AmericanOptions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/stevenovis/CLionProjects/ProjectB/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ProjectB.dir/AmericanOptions.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ProjectB.dir/AmericanOptions.cpp.o -c /Users/stevenovis/CLionProjects/ProjectB/AmericanOptions.cpp

CMakeFiles/ProjectB.dir/AmericanOptions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ProjectB.dir/AmericanOptions.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/stevenovis/CLionProjects/ProjectB/AmericanOptions.cpp > CMakeFiles/ProjectB.dir/AmericanOptions.cpp.i

CMakeFiles/ProjectB.dir/AmericanOptions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ProjectB.dir/AmericanOptions.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/stevenovis/CLionProjects/ProjectB/AmericanOptions.cpp -o CMakeFiles/ProjectB.dir/AmericanOptions.cpp.s

CMakeFiles/ProjectB.dir/AmericanOptions.cpp.o.requires:

.PHONY : CMakeFiles/ProjectB.dir/AmericanOptions.cpp.o.requires

CMakeFiles/ProjectB.dir/AmericanOptions.cpp.o.provides: CMakeFiles/ProjectB.dir/AmericanOptions.cpp.o.requires
	$(MAKE) -f CMakeFiles/ProjectB.dir/build.make CMakeFiles/ProjectB.dir/AmericanOptions.cpp.o.provides.build
.PHONY : CMakeFiles/ProjectB.dir/AmericanOptions.cpp.o.provides

CMakeFiles/ProjectB.dir/AmericanOptions.cpp.o.provides.build: CMakeFiles/ProjectB.dir/AmericanOptions.cpp.o


# Object files for target ProjectB
ProjectB_OBJECTS = \
"CMakeFiles/ProjectB.dir/EuropeanOption.cpp.o" \
"CMakeFiles/ProjectB.dir/main.cpp.o" \
"CMakeFiles/ProjectB.dir/Pricing.cpp.o" \
"CMakeFiles/ProjectB.dir/AmericanOptions.cpp.o"

# External object files for target ProjectB
ProjectB_EXTERNAL_OBJECTS =

ProjectB: CMakeFiles/ProjectB.dir/EuropeanOption.cpp.o
ProjectB: CMakeFiles/ProjectB.dir/main.cpp.o
ProjectB: CMakeFiles/ProjectB.dir/Pricing.cpp.o
ProjectB: CMakeFiles/ProjectB.dir/AmericanOptions.cpp.o
ProjectB: CMakeFiles/ProjectB.dir/build.make
ProjectB: CMakeFiles/ProjectB.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/stevenovis/CLionProjects/ProjectB/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable ProjectB"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ProjectB.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ProjectB.dir/build: ProjectB

.PHONY : CMakeFiles/ProjectB.dir/build

CMakeFiles/ProjectB.dir/requires: CMakeFiles/ProjectB.dir/EuropeanOption.cpp.o.requires
CMakeFiles/ProjectB.dir/requires: CMakeFiles/ProjectB.dir/main.cpp.o.requires
CMakeFiles/ProjectB.dir/requires: CMakeFiles/ProjectB.dir/Pricing.cpp.o.requires
CMakeFiles/ProjectB.dir/requires: CMakeFiles/ProjectB.dir/AmericanOptions.cpp.o.requires

.PHONY : CMakeFiles/ProjectB.dir/requires

CMakeFiles/ProjectB.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ProjectB.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ProjectB.dir/clean

CMakeFiles/ProjectB.dir/depend:
	cd /Users/stevenovis/CLionProjects/ProjectB/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/stevenovis/CLionProjects/ProjectB /Users/stevenovis/CLionProjects/ProjectB /Users/stevenovis/CLionProjects/ProjectB/cmake-build-debug /Users/stevenovis/CLionProjects/ProjectB/cmake-build-debug /Users/stevenovis/CLionProjects/ProjectB/cmake-build-debug/CMakeFiles/ProjectB.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ProjectB.dir/depend

