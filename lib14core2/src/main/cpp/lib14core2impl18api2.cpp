// GENERATED SOURCE FILE

#include "lib14core2_private.h"
#include "lib14core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core2impl18api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl18api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl18api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl18api24(int a, int b) {
    return a + b;
}

int Lib14Core2Impl18Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core2Impl18Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core2Impl18Api2" << std::endl;
        Lib14Core2Impl18Impl lib14core2impl18impl;
        lib14core2impl18impl.doSomething();
        Lib14Core2Impl19Api1 lib14core2impl19api1;
        lib14core2impl19api1.doSomething();
        Lib14Core2Impl19Api2 lib14core2impl19api2;
        lib14core2impl19api2.doSomething();
        Lib14Core2Impl19Api3 lib14core2impl19api3;
        lib14core2impl19api3.doSomething();
        visited = 1;
    }
}

