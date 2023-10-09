# Test Driven Development

## Badges

![CICD Workflow status](https://github.com/lorocks/TestDrivenDev/actions/workflows/run-unit-test-and-upload-codecov.yml/badge.svg) [![codecov](https://codecov.io/gh/lorocks/TestDrivenDev/branch/main/graph/badge.svg)](https://codecov.io/gh/lorocks/TestDrivenDev) [![License](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE)

## Overview

Simple starter C++ project with:

- CMake
- GoogleTest

To implement a PID controller in discrete time

## Authors

### Part 1 - Solo Programmer

Name: Lowell Aaron Lobo

GitHub: lorocks

### Part 2 - Pair Programming

Driver: Abhimanyu Saxena [GitHub](github.com/abhimanyu-saxena)

Navigator: Kshitij Karnawat [GitHub](github.com/KshitijKarnawat)

## Discussion Notes

1 - The unit tests had to be manually calculated and then compared with expected result
2 - EXPECT_DOUBLE_EQ did not work as intended thus EXPECT_NEAR had to be used

## UML Diagrams

### Class Diagram

![PID Class Diagram](https://github.com/lorocks/TestDrivenDev/blob/main/images/class%20diagram.PNG)

### Main Activity Diagram

![Activity Diagram for main functionality](https://github.com/lorocks/TestDrivenDev/blob/main/images/Main%20activity%20diagram.PNG)

### compute method Activity Diagram

![Activity Diagram for the compute method inside PID class](https://github.com/lorocks/TestDrivenDev/blob/main/images/compute%20method%20activity%20diagram.PNG)

## Standard install via command-line

```bash
# Make sure to be inside the TestDrivenDev directory before running the commands below
# Create make files
  cmake -S ./ -B build/
# Compile and build the project & get compile_commands.json file:
  # Using bear:
    # build compile_commands.json from scratch
  bear -- cmake --build build/ --clean-first
    # or, update the existing compile_commands.json
  bear --append -- cmake --build build/

# Run program:
  ./build/app/shell-app
# Run tests:
  cd build/; ctest; cd -
  # or if you have newer cmake
  ctest --test-dir build/

# Clean
  cmake --build build/ --target clean
# Clean and start over:
  rm -rf build/
```

## To make and view Doxygen Documentation

### Download Doxygen

```bash
  sudo apt-get install doxygen
```

### Get documentation

```bash
  doxygen dconfig
```

ref: <https://cmake.org/cmake/help/latest/manual/cmake.1.html>

## Building for code coverage (for assignments beginning in Week 4)

```bash
# if you don't have gcovr or lcov installed, do:
  sudo apt-get install gcovr lcov
# Set the build type to Debug and WANT_COVERAGE=ON
  cmake -D WANT_COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug -S ./ -B build/
# Now, do a clean compile, run unit test, and generate the covereage report
  cmake --build build/ --clean-first --target all test_coverage
# open a web browser to browse the test coverage report
  open build/test_coverage/index.html

This generates a index.html page in the build/test_coverage sub-directory that can be viewed locally in a web browser.
```

You can also get code coverage report for the *shell-app* target, instead of unit test. Repeat the previous 2 steps but with the *app_coverage* target:

``` bash
# Now, do another clean compile, run shell-app, and generate its covereage report
  cmake --build build/ --clean-first --target all app_coverage
# open a web browser to browse the test coverage report
  open build/app_coverage/index.html 

This generates a index.html page in the build/app_coverage sub-directory that can be viewed locally in a web browser.
```

## compile_commands.json Errors

In case of errors with generation of compile_commands.json file,
Delete the compile_commands.json file and run,

```bash
  bear -- cmake --build build/ --clean-first
```
