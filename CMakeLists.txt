cmake_minimum_required(VERSION 2.8)
project( DisplayImage )
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )
add_executable( DisplayImage 
/home/abhishek/Desktop/C++_Projects/Opencv/02_Loading_Showing_Saving/main.cpp )
target_link_libraries( DisplayImage ${OpenCV_LIBS} )