cmake_minimum_required(VERSION 3.15)
project(sorting_mystery)
set(CMAKE_CXX_STANDARD 14)

# Create the executable for sorting
add_executable(sorting_mystery main.cpp)

message("Linking to mystery_sorting lib")
find_library(MYSTERY_LIBRARY mystery_sorting_wsl2 lib)
target_link_libraries(sorting_mystery LINK_PUBLIC ${MYSTERY_LIBRARY})







