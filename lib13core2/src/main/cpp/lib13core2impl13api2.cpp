// GENERATED SOURCE FILE

#include "lib13core2_private.h"
#include "lib13core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core2impl13api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl13api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl13api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl13api24(int a, int b) {
    return a + b;
}

int Lib13Core2Impl13Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core2Impl13Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core2Impl13Api2" << std::endl;
        Lib13Core2Impl13Impl lib13core2impl13impl;
        lib13core2impl13impl.doSomething();
        Lib13Core2Impl14Api1 lib13core2impl14api1;
        lib13core2impl14api1.doSomething();
        Lib13Core2Impl14Api2 lib13core2impl14api2;
        lib13core2impl14api2.doSomething();
        Lib13Core2Impl14Api3 lib13core2impl14api3;
        lib13core2impl14api3.doSomething();
        visited = 1;
    }
}

