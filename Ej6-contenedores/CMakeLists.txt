cmake_minimum_required(VERSION 3.27)
project(Ej6_contenedores)

set(CMAKE_CXX_STANDARD 17)

set(BOOST_ROOT "C:/Users/suren/AppData\Roaming/Microsoft/Windows/Start Menu/Programs/JetBrains Toolbox/boost_1_83_0")

find_package(Boost 1.83.0)

if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    add_executable(Ej6_contenedores main.cpp)
target_link_libraries(BoostExample ${Boost_LIBRARIES})
endif()
