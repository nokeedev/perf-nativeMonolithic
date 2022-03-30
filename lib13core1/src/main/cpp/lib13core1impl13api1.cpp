// GENERATED SOURCE FILE

#include "lib13core1_private.h"
#include "lib13core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core1impl13api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl13api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl13api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl13api14(int a, int b) {
    return a + b;
}

int Lib13Core1Impl13Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core1Impl13Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core1Impl13Api1" << std::endl;
        Lib13Core1Impl14Api1 lib13core1impl14api1;
        lib13core1impl14api1.doSomething();
        Lib13Core1Impl13Impl lib13core1impl13impl;
        lib13core1impl13impl.doSomething();
        Lib13Core1Impl14Api2 lib13core1impl14api2;
        lib13core1impl14api2.doSomething();
        Lib13Core1Impl14Api3 lib13core1impl14api3;
        lib13core1impl14api3.doSomething();
        visited = 1;
    }
}

