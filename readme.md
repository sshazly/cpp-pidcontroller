# C++ Boilerplate
[![Build Status](https://travis-ci.org/sshazly/cpp-pidcontroller.svg?branch=master)](https://travis-ci.org/dpiet/cpp-boilerplate)
[![Coverage Status](https://coveralls.io/repos/github/sshazly/cpp-pidcontroller/badge.svg?branch=master)](https://coveralls.io/github/sshazly/cpp-pidcontroller?branch=master)
---

## Overview

V1.0
Using PID.hpp class controller the main file runs a 100 incremented for loop to calculate the output of a PID system while printing the output to the console.

## Upcoming Improvements

V1.1
- Use a while loop that exits when the output reaches a certain tolerance relative to the setpoint.

- Create a control() method for PID class that implements the while loop to allow for simple execution

- Create a setDt() method for PID class

- Create a track(double newSetPoint) method for PID class

- Implement plotting functions


## Standard install via command-line
```
git clone --recursive https://github.com/sshazly/cpp-pidcontroller
cd <path to repository>
mkdir build
cd build
cmake ..
make
Run tests: ./test/cpp-test
Run program: ./app/shell-app
```
