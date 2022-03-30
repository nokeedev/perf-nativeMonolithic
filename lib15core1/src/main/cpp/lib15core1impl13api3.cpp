// GENERATED SOURCE FILE

#include "lib15core1_private.h"
#include "lib15core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core1impl13api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl13api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl13api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl13api34(int a, int b) {
    return a + b;
}

int Lib15Core1Impl13Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core1Impl13Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core1Impl13Api3" << std::endl;
        Lib15Core1Impl13Impl lib15core1impl13impl;
        lib15core1impl13impl.doSomething();
        Lib15Core1Impl14Api1 lib15core1impl14api1;
        lib15core1impl14api1.doSomething();
        Lib15Core1Impl14Api2 lib15core1impl14api2;
        lib15core1impl14api2.doSomething();
        Lib15Core1Impl14Api3 lib15core1impl14api3;
        lib15core1impl14api3.doSomething();
        visited = 1;
    }
}

