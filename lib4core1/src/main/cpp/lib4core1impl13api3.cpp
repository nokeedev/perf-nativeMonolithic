// GENERATED SOURCE FILE

#include "lib4core1_private.h"
#include "lib4core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core1impl13api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl13api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl13api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl13api34(int a, int b) {
    return a + b;
}

int Lib4Core1Impl13Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core1Impl13Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core1Impl13Api3" << std::endl;
        Lib4Core1Impl13Impl lib4core1impl13impl;
        lib4core1impl13impl.doSomething();
        Lib4Core1Impl14Api1 lib4core1impl14api1;
        lib4core1impl14api1.doSomething();
        Lib4Core1Impl14Api2 lib4core1impl14api2;
        lib4core1impl14api2.doSomething();
        Lib4Core1Impl14Api3 lib4core1impl14api3;
        lib4core1impl14api3.doSomething();
        visited = 1;
    }
}

