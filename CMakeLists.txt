cmake_minimum_required(VERSION 3.4)
project(base_cpp_project)
SET(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Threads REQUIRED)

#[[ ### Top-Level Project Configuration Options
    # Use this Top-Level CMakeLists.txt file to set the common project configuration Options
    # Compiler
    # Preprocessor Variable Definition
    # Compiler Flags
    # Build / Bin / Lib / Test Target directories.
    # Necessary Environment Variables (How do you use Environment Variables in CMAKE)
    # Additional Flags / Commands
    # Global Includes
    # Global Software Dependencies and Linked Libraries
#]]

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -fPIC" )
set(CMAKE_BUILD_TYPE Debug)

# Set Output Directories
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# Includes
include_directories(include)
include_directories(src)
include_directories(test)

#[[ Add All Corresponding Source Directories and Targets based on Directory.
#    All "subdirectories" should contain their own 'CMakeLists.txt' file.
#]]
# add_subdirectory(src)
# add_subdirectory(src/sample_shared_lib)
# add_subdirectory(src/sample_static_lib)

##### STATIC LIBRARY DEFINITION #####
file(GLOB CLI_LIB_SRC_FILES "src/cli_library/*.cpp")
add_library(cli_library STATIC ${CLI_LIB_SRC_FILES})

##### SHARED LIBRARY DEFINITION #####
file(GLOB MPP_SHARED_LIB_SRC_FILES "src/mpp_library/*.cpp")
add_library(mpp_library SHARED ${MPP_SHARED_LIB_SRC_FILES} )
target_link_libraries(mpp_library cli_library)

##### MAIN EXECUTABLE DEFINITION #####

# Set Main Exectutable Sources files
set(MAIN_SRC_FILES src/main.cpp)
#[[ ALTERNATIVELY :
 # The file(GLOB...) allows for wildcard additions:
#]]
# file(GLOB MAIN_SRC_FILES "src/*.cpp")

# Define & Link Target + Dependencies
add_executable(cpp_training_app ${MAIN_SRC_FILES})
target_link_libraries(cpp_training_app cli_library mpp_library)

##### UNIT TEST DEFINITION #####
# Google Mock/Test Dependency
option(BUILD_TESTS "BUILD_TESTS" ON)

if(BUILD_TESTS)
    
    enable_testing()

    include(ExternalProject)

    if(DEFINED ENV{GMOCK_URL})
        message("GMOCK_URL set to :" $ENV{GMOCK_URL})
        set(GMOCK_URL $ENV{GMOCK_URL})
    else()
        file(GLOB_RECURSE GMOCK_URL "gmock-1.7.0.zip")
        if (GMOCK_URL)
            list(GET GMOCK_URL 0 GMOCK_URL)
        else()
            set(GMOCK_URL https://googlemock.googlecode.com/files/gmock-1.7.0.zip)
        endif()
    endif()


    # Download and install GoogleMock
    ExternalProject_Add(
            gmock
            URL ${GMOCK_URL}
            PREFIX ${CMAKE_SOURCE_DIR}/gmock
            # Disable install step
            INSTALL_COMMAND ""
            LOG_DOWNLOAD ON
            LOG_CONFIGURE ON
            LOG_BUILD ON
    )

    # Create a libgmock target to be used as a dependency by test programs
    add_library(libgmock IMPORTED STATIC GLOBAL)
    add_dependencies(libgmock gmock)
    add_library(libgmock_main IMPORTED STATIC GLOBAL)
    add_dependencies(libgmock_main gmock)

    # Set gmock properties
    ExternalProject_Get_Property(gmock source_dir binary_dir)
    set_target_properties(libgmock PROPERTIES
            "IMPORTED_LOCATION" "${binary_dir}/libgmock.a"
            "IMPORTED_LINK_INTERFACE_LIBRARIES" "${CMAKE_THREAD_LIBS_INIT}"
            )
    set_target_properties(libgmock_main PROPERTIES
            "IMPORTED_LOCATION" "${binary_dir}/libgmock_main.a"
            "IMPORTED_LINK_INTERFACE_LIBRARIES" "${CMAKE_THREAD_LIBS_INIT}"
            )

    include_directories("${source_dir}/include")
    include_directories("${source_dir}/gtest/include")

    macro(add_gtest test_source test_name)
        add_executable(${test_name} ${test_source} test/unit/unit_test.cpp)
        target_link_libraries(${test_name} libgmock libgmock_main cli_library mpp_library)
        add_test(${test_name} bin/${test_name})
    endmacro(add_gtest)

    # FUNCTIONAL TESTS

    # file(GLOB FUNCTIONAL_TEST_SRC_FILES "test/functional/*.cpp")
    # add_executable(FunctionTest_CLI ${FUNCTIONAL_TEST_SRC_FILES})
    # target_link_libraries(FunctionTest_CLI libgmock libgmock_main)
    # add_test(FunctionTest_CLI bin/FunctionTest_CLI)

    # All UNIT TESTS

    file(GLOB UNIT_TEST_SRC_FILES "test/unit/*.cpp")
    add_executable(TestAllUnits ${UNIT_TEST_SRC_FILES})
    target_link_libraries(TestAllUnits libgmock libgmock_main cli_library mpp_library)
    add_test(TestAllUnits bin/TestAllUnits)

    # UNIT TESTS
    add_gtest(test/unit/TestCommandLineInterface.cpp TestCommandLineInterface)
    add_gtest(test/unit/TestMenu.cpp TestMenu)
    add_gtest(test/unit/TestInputBehavior.cpp TestInputBehavior)    
    add_gtest(test/unit/TestUserInput.cpp TestUserInput)
    add_gtest(test/unit/TestMaxPairedProduct.cpp TestMaxPairedProduct)

endif()

