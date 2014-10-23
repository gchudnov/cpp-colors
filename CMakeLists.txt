cmake_minimum_required(VERSION 2.8.4)
project(cpp_colors)
enable_testing()

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "bin")

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

include_directories(include)

set(SOURCE_TEST_FILES
    include/cpp-colors/impl/dotnet/dotnet_colors.h
    include/cpp-colors/impl/dotnet/dotnet_constants.h
    include/cpp-colors/impl/dotnet/dotnet_named.h
    include/cpp-colors/impl/wpf/wpf_colors.h
    include/cpp-colors/impl/wpf/wpf_constants.h
    include/cpp-colors/impl/wpf/wpf_named.h
    include/cpp-colors/impl/colors_impl.h
    include/cpp-colors/impl/constants_impl.h
    include/cpp-colors/impl/named_impl.h
    include/cpp-colors/color.h
    include/cpp-colors/color_error.h
    include/cpp-colors/color_io.h
    include/cpp-colors/color_named.h
    include/cpp-colors/colors.h
    include/cpp-colors/pixel_format.h
    include/cpp-colors/pixel_utils.h
    test/suites/test_color.cpp
    test/tester.cpp)

add_executable(run_tests ${SOURCE_TEST_FILES})
target_link_libraries(run_tests ${GTEST_LIBRARIES} pthread)

# add_executable(pretty_json examples/example.cpp)

add_test(TestAll bin/run_tests)


add_custom_target(clean-all
   COMMAND ${CMAKE_BUILD_TOOL} clean
   COMMAND ${CMAKE_COMMAND} -P clean-all.cmake
)