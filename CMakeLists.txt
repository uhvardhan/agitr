# What version of CMake is needed?
cmake_minimum_required(VERSION 2.8.3)

# Name of this package.
project(agitr)

# Find the catkin build system, and any other packages on which we depend.
find_package(catkin REQUIRED COMPONENTS roscpp geometry_msgs turtlesim)

# Declare our catkin_package.
catkin_package()

# Specify location of header files.
include_directories(include ${catkin_INCLUDE_DIRS})

# Declare the executable, along with its source files. If there are multiple
# executables, use multiple copies of this line.
add_executable(hello hello.cpp)
add_executable(pubvel pubvel.cpp)
add_executable(subpose subpose.cpp)
add_executable(count count.cpp)
add_executable(once once.cpp)
add_executable(throttle throttle.cpp)
add_executable(anon anon.cpp)
add_executable(reverse_cmd_vel reverse_cmd_vel.cpp)

# Specify libraries against which to link. Again, this line should be copies for
# each distinct excutable in the package.
target_link_libraries(hello ${catkin_LIBRARIES})
target_link_libraries(pubvel ${catkin_LIBRARIES})
target_link_libraries(subpose ${catkin_LIBRARIES})
target_link_libraries(count ${catkin_LIBRARIES})
target_link_libraries(once ${catkin_LIBRARIES})
target_link_libraries(throttle ${catkin_LIBRARIES})
target_link_libraries(anon ${catkin_LIBRARIES})
target_link_libraries(reverse_cmd_vel ${catkin_LIBRARIES})
