cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(A4_HybridX)

include_directories(${CMAKE_SOURCE_DIR}/include)

file(GLOB SRC_SOURCES "src/*.cpp")
file(GLOB TEST_SOURCES "test/*.cpp")

add_executable(A4_HybridX src/car.cpp src/electricCar.cpp src/gasolineCar.cpp src/hybridCar.cpp src/main.cpp)
add_executable(my_test src/car.cpp src/electricCar.cpp src/gasolineCar.cpp src/hybridCar.cpp test/test.cpp)

target_include_directories(my_test PRIVATE ${PROJECT_SOURCE_DIR}/include)
enable_testing()