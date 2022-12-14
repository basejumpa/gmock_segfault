cmake_minimum_required(VERSION 3.14)
project(my_project)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG main
)

if (WIN32)
    # Prevent overriding the parent project's compiler/linker
    # settings on Windows
    set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
endif()

FetchContent_MakeAvailable(googletest)

include(GoogleTest)

find_package(Threads REQUIRED)

enable_testing()


macro(create_test_executable NAME)
  add_executable(
      ${NAME}
      ${NAME}.cc
  )
    
  target_link_libraries(
    ${NAME}
  GTest::gtest_main
  GTest::gmock_main
  Threads::Threads
  )

  gtest_discover_tests(${NAME})
endmacro(create_test_executable)


create_test_executable(test_expectation_met__leaked)
create_test_executable(test_expectation_met__not_leaked)
create_test_executable(test_expectation_not_met__leaked)
create_test_executable(test_expectation_not_met__not_leaked)

