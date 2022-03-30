// GENERATED SOURCE FILE

#include "lib4core2_private.h"
#include "lib4core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core2impl13api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl13api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl13api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl13api14(int a, int b) {
    return a + b;
}

int Lib4Core2Impl13Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core2Impl13Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core2Impl13Api1" << std::endl;
        Lib4Core2Impl14Api1 lib4core2impl14api1;
        lib4core2impl14api1.doSomething();
        Lib4Core2Impl13Impl lib4core2impl13impl;
        lib4core2impl13impl.doSomething();
        Lib4Core2Impl14Api2 lib4core2impl14api2;
        lib4core2impl14api2.doSomething();
        Lib4Core2Impl14Api3 lib4core2impl14api3;
        lib4core2impl14api3.doSomething();
        visited = 1;
    }
}

