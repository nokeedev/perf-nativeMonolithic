// GENERATED SOURCE FILE

#include "lib5core2_private.h"
#include "lib5core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core2impl13api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl13api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl13api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl13api14(int a, int b) {
    return a + b;
}

int Lib5Core2Impl13Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core2Impl13Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core2Impl13Api1" << std::endl;
        Lib5Core2Impl14Api1 lib5core2impl14api1;
        lib5core2impl14api1.doSomething();
        Lib5Core2Impl13Impl lib5core2impl13impl;
        lib5core2impl13impl.doSomething();
        Lib5Core2Impl14Api2 lib5core2impl14api2;
        lib5core2impl14api2.doSomething();
        Lib5Core2Impl14Api3 lib5core2impl14api3;
        lib5core2impl14api3.doSomething();
        visited = 1;
    }
}

