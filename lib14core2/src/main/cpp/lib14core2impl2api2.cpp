// GENERATED SOURCE FILE

#include "lib14core2_private.h"
#include "lib14core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core2impl2api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl2api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl2api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl2api24(int a, int b) {
    return a + b;
}

int Lib14Core2Impl2Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core2Impl2Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core2Impl2Api2" << std::endl;
        Lib14Core2Impl2Impl lib14core2impl2impl;
        lib14core2impl2impl.doSomething();
        Lib14Core2Impl3Api1 lib14core2impl3api1;
        lib14core2impl3api1.doSomething();
        Lib14Core2Impl3Api2 lib14core2impl3api2;
        lib14core2impl3api2.doSomething();
        Lib14Core2Impl3Api3 lib14core2impl3api3;
        lib14core2impl3api3.doSomething();
        visited = 1;
    }
}

