# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jose/medeiros_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jose/medeiros_ws/build

# Include any dependencies generated for this target.
include vicos_ros/detection/zbar_detector/CMakeFiles/barcode_detector.dir/depend.make

# Include the progress variables for this target.
include vicos_ros/detection/zbar_detector/CMakeFiles/barcode_detector.dir/progress.make

# Include the compile flags for this target's objects.
include vicos_ros/detection/zbar_detector/CMakeFiles/barcode_detector.dir/flags.make

vicos_ros/detection/zbar_detector/CMakeFiles/barcode_detector.dir/src/main.cpp.o: vicos_ros/detection/zbar_detector/CMakeFiles/barcode_detector.dir/flags.make
vicos_ros/detection/zbar_detector/CMakeFiles/barcode_detector.dir/src/main.cpp.o: /home/jose/medeiros_ws/src/vicos_ros/detection/zbar_detector/src/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/jose/medeiros_ws/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object vicos_ros/detection/zbar_detector/CMakeFiles/barcode_detector.dir/src/main.cpp.o"
	cd /home/jose/medeiros_ws/build/vicos_ros/detection/zbar_detector && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/barcode_detector.dir/src/main.cpp.o -c /home/jose/medeiros_ws/src/vicos_ros/detection/zbar_detector/src/main.cpp

vicos_ros/detection/zbar_detector/CMakeFiles/barcode_detector.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/barcode_detector.dir/src/main.cpp.i"
	cd /home/jose/medeiros_ws/build/vicos_ros/detection/zbar_detector && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/jose/medeiros_ws/src/vicos_ros/detection/zbar_detector/src/main.cpp > CMakeFiles/barcode_detector.dir/src/main.cpp.i

vicos_ros/detection/zbar_detector/CMakeFiles/barcode_detector.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/barcode_detector.dir/src/main.cpp.s"
	cd /home/jose/medeiros_ws/build/vicos_ros/detection/zbar_detector && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/jose/medeiros_ws/src/vicos_ros/detection/zbar_detector/src/main.cpp -o CMakeFiles/barcode_detector.dir/src/main.cpp.s

vicos_ros/detection/zbar_detector/CMakeFiles/barcode_detector.dir/src/main.cpp.o.requires:
.PHONY : vicos_ros/detection/zbar_detector/CMakeFiles/barcode_detector.dir/src/main.cpp.o.requires

vicos_ros/detection/zbar_detector/CMakeFiles/barcode_detector.dir/src/main.cpp.o.provides: vicos_ros/detection/zbar_detector/CMakeFiles/barcode_detector.dir/src/main.cpp.o.requires
	$(MAKE) -f vicos_ros/detection/zbar_detector/CMakeFiles/barcode_detector.dir/build.make vicos_ros/detection/zbar_detector/CMakeFiles/barcode_detector.dir/src/main.cpp.o.provides.build
.PHONY : vicos_ros/detection/zbar_detector/CMakeFiles/barcode_detector.dir/src/main.cpp.o.provides

vicos_ros/detection/zbar_detector/CMakeFiles/barcode_detector.dir/src/main.cpp.o.provides.build: vicos_ros/detection/zbar_detector/CMakeFiles/barcode_detector.dir/src/main.cpp.o

# Object files for target barcode_detector
barcode_detector_OBJECTS = \
"CMakeFiles/barcode_detector.dir/src/main.cpp.o"

# External object files for target barcode_detector
barcode_detector_EXTERNAL_OBJECTS =

/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: vicos_ros/detection/zbar_detector/CMakeFiles/barcode_detector.dir/src/main.cpp.o
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: vicos_ros/detection/zbar_detector/CMakeFiles/barcode_detector.dir/build.make
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /opt/ros/indigo/lib/libimage_transport.so
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /opt/ros/indigo/lib/libmessage_filters.so
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /usr/lib/x86_64-linux-gnu/libtinyxml.so
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /opt/ros/indigo/lib/libclass_loader.so
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /usr/lib/libPocoFoundation.so
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /usr/lib/x86_64-linux-gnu/libdl.so
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /opt/ros/indigo/lib/libroscpp.so
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /usr/lib/x86_64-linux-gnu/libboost_signals.so
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /opt/ros/indigo/lib/libxmlrpcpp.so
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /opt/ros/indigo/lib/libroslib.so
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /opt/ros/indigo/lib/libcv_bridge.so
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /usr/lib/x86_64-linux-gnu/libopencv_videostab.so.2.4.8
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /usr/lib/x86_64-linux-gnu/libopencv_video.so.2.4.8
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /usr/lib/x86_64-linux-gnu/libopencv_superres.so.2.4.8
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /usr/lib/x86_64-linux-gnu/libopencv_stitching.so.2.4.8
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.2.4.8
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /usr/lib/x86_64-linux-gnu/libopencv_ocl.so.2.4.8
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.2.4.8
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.2.4.8
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /usr/lib/x86_64-linux-gnu/libopencv_legacy.so.2.4.8
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.2.4.8
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.2.4.8
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /usr/lib/x86_64-linux-gnu/libopencv_gpu.so.2.4.8
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.2.4.8
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.2.4.8
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /usr/lib/x86_64-linux-gnu/libopencv_core.so.2.4.8
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /usr/lib/x86_64-linux-gnu/libopencv_contrib.so.2.4.8
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.2.4.8
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /opt/ros/indigo/lib/librosconsole.so
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /opt/ros/indigo/lib/librosconsole_log4cxx.so
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /opt/ros/indigo/lib/librosconsole_backend_interface.so
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /usr/lib/liblog4cxx.so
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /opt/ros/indigo/lib/libroscpp_serialization.so
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /opt/ros/indigo/lib/librostime.so
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /opt/ros/indigo/lib/libcpp_common.so
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so
/home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector: vicos_ros/detection/zbar_detector/CMakeFiles/barcode_detector.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable /home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector"
	cd /home/jose/medeiros_ws/build/vicos_ros/detection/zbar_detector && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/barcode_detector.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
vicos_ros/detection/zbar_detector/CMakeFiles/barcode_detector.dir/build: /home/jose/medeiros_ws/devel/lib/zbar_detector/barcode_detector
.PHONY : vicos_ros/detection/zbar_detector/CMakeFiles/barcode_detector.dir/build

vicos_ros/detection/zbar_detector/CMakeFiles/barcode_detector.dir/requires: vicos_ros/detection/zbar_detector/CMakeFiles/barcode_detector.dir/src/main.cpp.o.requires
.PHONY : vicos_ros/detection/zbar_detector/CMakeFiles/barcode_detector.dir/requires

vicos_ros/detection/zbar_detector/CMakeFiles/barcode_detector.dir/clean:
	cd /home/jose/medeiros_ws/build/vicos_ros/detection/zbar_detector && $(CMAKE_COMMAND) -P CMakeFiles/barcode_detector.dir/cmake_clean.cmake
.PHONY : vicos_ros/detection/zbar_detector/CMakeFiles/barcode_detector.dir/clean

vicos_ros/detection/zbar_detector/CMakeFiles/barcode_detector.dir/depend:
	cd /home/jose/medeiros_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jose/medeiros_ws/src /home/jose/medeiros_ws/src/vicos_ros/detection/zbar_detector /home/jose/medeiros_ws/build /home/jose/medeiros_ws/build/vicos_ros/detection/zbar_detector /home/jose/medeiros_ws/build/vicos_ros/detection/zbar_detector/CMakeFiles/barcode_detector.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : vicos_ros/detection/zbar_detector/CMakeFiles/barcode_detector.dir/depend
