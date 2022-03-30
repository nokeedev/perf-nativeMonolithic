// GENERATED SOURCE FILE

#include "lib11core2_private.h"
#include "lib11core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core2impl13api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl13api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl13api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl13api14(int a, int b) {
    return a + b;
}

int Lib11Core2Impl13Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core2Impl13Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core2Impl13Api1" << std::endl;
        Lib11Core2Impl14Api1 lib11core2impl14api1;
        lib11core2impl14api1.doSomething();
        Lib11Core2Impl13Impl lib11core2impl13impl;
        lib11core2impl13impl.doSomething();
        Lib11Core2Impl14Api2 lib11core2impl14api2;
        lib11core2impl14api2.doSomething();
        Lib11Core2Impl14Api3 lib11core2impl14api3;
        lib11core2impl14api3.doSomething();
        visited = 1;
    }
}

