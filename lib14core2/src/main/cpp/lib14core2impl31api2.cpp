// GENERATED SOURCE FILE

#include "lib14core2_private.h"
#include "lib14core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core2impl31api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl31api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl31api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl31api24(int a, int b) {
    return a + b;
}

int Lib14Core2Impl31Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core2Impl31Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core2Impl31Api2" << std::endl;
        Lib14Core2Impl31Impl lib14core2impl31impl;
        lib14core2impl31impl.doSomething();
        Lib14Core2Impl32Api1 lib14core2impl32api1;
        lib14core2impl32api1.doSomething();
        Lib14Core2Impl32Api2 lib14core2impl32api2;
        lib14core2impl32api2.doSomething();
        Lib14Core2Impl32Api3 lib14core2impl32api3;
        lib14core2impl32api3.doSomething();
        visited = 1;
    }
}

