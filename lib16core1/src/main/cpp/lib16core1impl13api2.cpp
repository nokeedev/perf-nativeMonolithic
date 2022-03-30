// GENERATED SOURCE FILE

#include "lib16core1_private.h"
#include "lib16core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core1impl13api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl13api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl13api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl13api24(int a, int b) {
    return a + b;
}

int Lib16Core1Impl13Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core1Impl13Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core1Impl13Api2" << std::endl;
        Lib16Core1Impl13Impl lib16core1impl13impl;
        lib16core1impl13impl.doSomething();
        Lib16Core1Impl14Api1 lib16core1impl14api1;
        lib16core1impl14api1.doSomething();
        Lib16Core1Impl14Api2 lib16core1impl14api2;
        lib16core1impl14api2.doSomething();
        Lib16Core1Impl14Api3 lib16core1impl14api3;
        lib16core1impl14api3.doSomething();
        visited = 1;
    }
}

