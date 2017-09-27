# C++ Boilerplate
[![Build Status](https://travis-ci.org/sshazly/cpp-pidcontroller.svg?branch=master)](https://travis-ci.org/dpiet/cpp-boilerplate)
[![Coverage Status](https://coveralls.io/repos/github/sshazly/cpp-pidcontroller/badge.svg?branch=master)](https://coveralls.io/github/sshazly/cpp-pidcontroller?branch=master)
---

## Overview

PID controller with user defined gain variables. 

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

## Improvements

- Next version could use a while loop until the error is within a user defined tolerance.

- Add a control method for class pid that implements the previously discussed while loop

- Add plotting capabilities.

