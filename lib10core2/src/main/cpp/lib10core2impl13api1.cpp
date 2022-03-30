// GENERATED SOURCE FILE

#include "lib10core2_private.h"
#include "lib10core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core2impl13api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl13api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl13api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl13api14(int a, int b) {
    return a + b;
}

int Lib10Core2Impl13Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core2Impl13Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core2Impl13Api1" << std::endl;
        Lib10Core2Impl14Api1 lib10core2impl14api1;
        lib10core2impl14api1.doSomething();
        Lib10Core2Impl13Impl lib10core2impl13impl;
        lib10core2impl13impl.doSomething();
        Lib10Core2Impl14Api2 lib10core2impl14api2;
        lib10core2impl14api2.doSomething();
        Lib10Core2Impl14Api3 lib10core2impl14api3;
        lib10core2impl14api3.doSomething();
        visited = 1;
    }
}

