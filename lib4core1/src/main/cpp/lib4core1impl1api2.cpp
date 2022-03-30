// GENERATED SOURCE FILE

#include "lib4core1_private.h"
#include "lib4core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core1impl1api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl1api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl1api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl1api24(int a, int b) {
    return a + b;
}

int Lib4Core1Impl1Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core1Impl1Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core1Impl1Api2" << std::endl;
        Lib4Core1Impl1Impl lib4core1impl1impl;
        lib4core1impl1impl.doSomething();
        Lib4Core1Impl2Api1 lib4core1impl2api1;
        lib4core1impl2api1.doSomething();
        Lib4Core1Impl2Api2 lib4core1impl2api2;
        lib4core1impl2api2.doSomething();
        Lib4Core1Impl2Api3 lib4core1impl2api3;
        lib4core1impl2api3.doSomething();
        visited = 1;
    }
}

