# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /snap/clion/151/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/151/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sosnickiy/rps

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sosnickiy/rps/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/RPS.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/RPS.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RPS.dir/flags.make

CMakeFiles/RPS.dir/SceneManager.cpp.o: CMakeFiles/RPS.dir/flags.make
CMakeFiles/RPS.dir/SceneManager.cpp.o: ../SceneManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sosnickiy/rps/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/RPS.dir/SceneManager.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RPS.dir/SceneManager.cpp.o -c /home/sosnickiy/rps/SceneManager.cpp

CMakeFiles/RPS.dir/SceneManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RPS.dir/SceneManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sosnickiy/rps/SceneManager.cpp > CMakeFiles/RPS.dir/SceneManager.cpp.i

CMakeFiles/RPS.dir/SceneManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RPS.dir/SceneManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sosnickiy/rps/SceneManager.cpp -o CMakeFiles/RPS.dir/SceneManager.cpp.s

CMakeFiles/RPS.dir/EconomyScene.cpp.o: CMakeFiles/RPS.dir/flags.make
CMakeFiles/RPS.dir/EconomyScene.cpp.o: ../EconomyScene.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sosnickiy/rps/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/RPS.dir/EconomyScene.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RPS.dir/EconomyScene.cpp.o -c /home/sosnickiy/rps/EconomyScene.cpp

CMakeFiles/RPS.dir/EconomyScene.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RPS.dir/EconomyScene.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sosnickiy/rps/EconomyScene.cpp > CMakeFiles/RPS.dir/EconomyScene.cpp.i

CMakeFiles/RPS.dir/EconomyScene.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RPS.dir/EconomyScene.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sosnickiy/rps/EconomyScene.cpp -o CMakeFiles/RPS.dir/EconomyScene.cpp.s

CMakeFiles/RPS.dir/BattleScene.cpp.o: CMakeFiles/RPS.dir/flags.make
CMakeFiles/RPS.dir/BattleScene.cpp.o: ../BattleScene.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sosnickiy/rps/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/RPS.dir/BattleScene.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RPS.dir/BattleScene.cpp.o -c /home/sosnickiy/rps/BattleScene.cpp

CMakeFiles/RPS.dir/BattleScene.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RPS.dir/BattleScene.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sosnickiy/rps/BattleScene.cpp > CMakeFiles/RPS.dir/BattleScene.cpp.i

CMakeFiles/RPS.dir/BattleScene.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RPS.dir/BattleScene.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sosnickiy/rps/BattleScene.cpp -o CMakeFiles/RPS.dir/BattleScene.cpp.s

CMakeFiles/RPS.dir/EconomyManager.cpp.o: CMakeFiles/RPS.dir/flags.make
CMakeFiles/RPS.dir/EconomyManager.cpp.o: ../EconomyManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sosnickiy/rps/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/RPS.dir/EconomyManager.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RPS.dir/EconomyManager.cpp.o -c /home/sosnickiy/rps/EconomyManager.cpp

CMakeFiles/RPS.dir/EconomyManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RPS.dir/EconomyManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sosnickiy/rps/EconomyManager.cpp > CMakeFiles/RPS.dir/EconomyManager.cpp.i

CMakeFiles/RPS.dir/EconomyManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RPS.dir/EconomyManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sosnickiy/rps/EconomyManager.cpp -o CMakeFiles/RPS.dir/EconomyManager.cpp.s

CMakeFiles/RPS.dir/Script.cpp.o: CMakeFiles/RPS.dir/flags.make
CMakeFiles/RPS.dir/Script.cpp.o: ../Script.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sosnickiy/rps/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/RPS.dir/Script.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RPS.dir/Script.cpp.o -c /home/sosnickiy/rps/Script.cpp

CMakeFiles/RPS.dir/Script.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RPS.dir/Script.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sosnickiy/rps/Script.cpp > CMakeFiles/RPS.dir/Script.cpp.i

CMakeFiles/RPS.dir/Script.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RPS.dir/Script.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sosnickiy/rps/Script.cpp -o CMakeFiles/RPS.dir/Script.cpp.s

CMakeFiles/RPS.dir/DrawableObject.cpp.o: CMakeFiles/RPS.dir/flags.make
CMakeFiles/RPS.dir/DrawableObject.cpp.o: ../DrawableObject.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sosnickiy/rps/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/RPS.dir/DrawableObject.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RPS.dir/DrawableObject.cpp.o -c /home/sosnickiy/rps/DrawableObject.cpp

CMakeFiles/RPS.dir/DrawableObject.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RPS.dir/DrawableObject.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sosnickiy/rps/DrawableObject.cpp > CMakeFiles/RPS.dir/DrawableObject.cpp.i

CMakeFiles/RPS.dir/DrawableObject.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RPS.dir/DrawableObject.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sosnickiy/rps/DrawableObject.cpp -o CMakeFiles/RPS.dir/DrawableObject.cpp.s

CMakeFiles/RPS.dir/BattleManager.cpp.o: CMakeFiles/RPS.dir/flags.make
CMakeFiles/RPS.dir/BattleManager.cpp.o: ../BattleManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sosnickiy/rps/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/RPS.dir/BattleManager.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RPS.dir/BattleManager.cpp.o -c /home/sosnickiy/rps/BattleManager.cpp

CMakeFiles/RPS.dir/BattleManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RPS.dir/BattleManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sosnickiy/rps/BattleManager.cpp > CMakeFiles/RPS.dir/BattleManager.cpp.i

CMakeFiles/RPS.dir/BattleManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RPS.dir/BattleManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sosnickiy/rps/BattleManager.cpp -o CMakeFiles/RPS.dir/BattleManager.cpp.s

CMakeFiles/RPS.dir/Scene.cpp.o: CMakeFiles/RPS.dir/flags.make
CMakeFiles/RPS.dir/Scene.cpp.o: ../Scene.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sosnickiy/rps/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/RPS.dir/Scene.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RPS.dir/Scene.cpp.o -c /home/sosnickiy/rps/Scene.cpp

CMakeFiles/RPS.dir/Scene.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RPS.dir/Scene.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sosnickiy/rps/Scene.cpp > CMakeFiles/RPS.dir/Scene.cpp.i

CMakeFiles/RPS.dir/Scene.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RPS.dir/Scene.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sosnickiy/rps/Scene.cpp -o CMakeFiles/RPS.dir/Scene.cpp.s

CMakeFiles/RPS.dir/Factory.cpp.o: CMakeFiles/RPS.dir/flags.make
CMakeFiles/RPS.dir/Factory.cpp.o: ../Factory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sosnickiy/rps/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/RPS.dir/Factory.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RPS.dir/Factory.cpp.o -c /home/sosnickiy/rps/Factory.cpp

CMakeFiles/RPS.dir/Factory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RPS.dir/Factory.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sosnickiy/rps/Factory.cpp > CMakeFiles/RPS.dir/Factory.cpp.i

CMakeFiles/RPS.dir/Factory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RPS.dir/Factory.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sosnickiy/rps/Factory.cpp -o CMakeFiles/RPS.dir/Factory.cpp.s

CMakeFiles/RPS.dir/Units.cpp.o: CMakeFiles/RPS.dir/flags.make
CMakeFiles/RPS.dir/Units.cpp.o: ../Units.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sosnickiy/rps/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/RPS.dir/Units.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RPS.dir/Units.cpp.o -c /home/sosnickiy/rps/Units.cpp

CMakeFiles/RPS.dir/Units.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RPS.dir/Units.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sosnickiy/rps/Units.cpp > CMakeFiles/RPS.dir/Units.cpp.i

CMakeFiles/RPS.dir/Units.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RPS.dir/Units.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sosnickiy/rps/Units.cpp -o CMakeFiles/RPS.dir/Units.cpp.s

CMakeFiles/RPS.dir/Squad.cpp.o: CMakeFiles/RPS.dir/flags.make
CMakeFiles/RPS.dir/Squad.cpp.o: ../Squad.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sosnickiy/rps/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/RPS.dir/Squad.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RPS.dir/Squad.cpp.o -c /home/sosnickiy/rps/Squad.cpp

CMakeFiles/RPS.dir/Squad.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RPS.dir/Squad.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sosnickiy/rps/Squad.cpp > CMakeFiles/RPS.dir/Squad.cpp.i

CMakeFiles/RPS.dir/Squad.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RPS.dir/Squad.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sosnickiy/rps/Squad.cpp -o CMakeFiles/RPS.dir/Squad.cpp.s

CMakeFiles/RPS.dir/main.cpp.o: CMakeFiles/RPS.dir/flags.make
CMakeFiles/RPS.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sosnickiy/rps/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/RPS.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RPS.dir/main.cpp.o -c /home/sosnickiy/rps/main.cpp

CMakeFiles/RPS.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RPS.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sosnickiy/rps/main.cpp > CMakeFiles/RPS.dir/main.cpp.i

CMakeFiles/RPS.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RPS.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sosnickiy/rps/main.cpp -o CMakeFiles/RPS.dir/main.cpp.s

# Object files for target RPS
RPS_OBJECTS = \
"CMakeFiles/RPS.dir/SceneManager.cpp.o" \
"CMakeFiles/RPS.dir/EconomyScene.cpp.o" \
"CMakeFiles/RPS.dir/BattleScene.cpp.o" \
"CMakeFiles/RPS.dir/EconomyManager.cpp.o" \
"CMakeFiles/RPS.dir/Script.cpp.o" \
"CMakeFiles/RPS.dir/DrawableObject.cpp.o" \
"CMakeFiles/RPS.dir/BattleManager.cpp.o" \
"CMakeFiles/RPS.dir/Scene.cpp.o" \
"CMakeFiles/RPS.dir/Factory.cpp.o" \
"CMakeFiles/RPS.dir/Units.cpp.o" \
"CMakeFiles/RPS.dir/Squad.cpp.o" \
"CMakeFiles/RPS.dir/main.cpp.o"

# External object files for target RPS
RPS_EXTERNAL_OBJECTS =

../bin/RPS: CMakeFiles/RPS.dir/SceneManager.cpp.o
../bin/RPS: CMakeFiles/RPS.dir/EconomyScene.cpp.o
../bin/RPS: CMakeFiles/RPS.dir/BattleScene.cpp.o
../bin/RPS: CMakeFiles/RPS.dir/EconomyManager.cpp.o
../bin/RPS: CMakeFiles/RPS.dir/Script.cpp.o
../bin/RPS: CMakeFiles/RPS.dir/DrawableObject.cpp.o
../bin/RPS: CMakeFiles/RPS.dir/BattleManager.cpp.o
../bin/RPS: CMakeFiles/RPS.dir/Scene.cpp.o
../bin/RPS: CMakeFiles/RPS.dir/Factory.cpp.o
../bin/RPS: CMakeFiles/RPS.dir/Units.cpp.o
../bin/RPS: CMakeFiles/RPS.dir/Squad.cpp.o
../bin/RPS: CMakeFiles/RPS.dir/main.cpp.o
../bin/RPS: CMakeFiles/RPS.dir/build.make
../bin/RPS: CMakeFiles/RPS.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sosnickiy/rps/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX executable ../bin/RPS"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RPS.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RPS.dir/build: ../bin/RPS

.PHONY : CMakeFiles/RPS.dir/build

CMakeFiles/RPS.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/RPS.dir/cmake_clean.cmake
.PHONY : CMakeFiles/RPS.dir/clean

CMakeFiles/RPS.dir/depend:
	cd /home/sosnickiy/rps/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sosnickiy/rps /home/sosnickiy/rps /home/sosnickiy/rps/cmake-build-debug /home/sosnickiy/rps/cmake-build-debug /home/sosnickiy/rps/cmake-build-debug/CMakeFiles/RPS.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/RPS.dir/depend
