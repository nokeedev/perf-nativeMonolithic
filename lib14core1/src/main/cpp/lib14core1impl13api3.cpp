// GENERATED SOURCE FILE

#include "lib14core1_private.h"
#include "lib14core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core1impl13api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl13api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl13api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl13api34(int a, int b) {
    return a + b;
}

int Lib14Core1Impl13Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core1Impl13Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core1Impl13Api3" << std::endl;
        Lib14Core1Impl13Impl lib14core1impl13impl;
        lib14core1impl13impl.doSomething();
        Lib14Core1Impl14Api1 lib14core1impl14api1;
        lib14core1impl14api1.doSomething();
        Lib14Core1Impl14Api2 lib14core1impl14api2;
        lib14core1impl14api2.doSomething();
        Lib14Core1Impl14Api3 lib14core1impl14api3;
        lib14core1impl14api3.doSomething();
        visited = 1;
    }
}

