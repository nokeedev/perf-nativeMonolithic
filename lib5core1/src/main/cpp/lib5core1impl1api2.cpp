// GENERATED SOURCE FILE

#include "lib5core1_private.h"
#include "lib5core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core1impl1api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl1api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl1api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl1api24(int a, int b) {
    return a + b;
}

int Lib5Core1Impl1Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core1Impl1Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core1Impl1Api2" << std::endl;
        Lib5Core1Impl1Impl lib5core1impl1impl;
        lib5core1impl1impl.doSomething();
        Lib5Core1Impl2Api1 lib5core1impl2api1;
        lib5core1impl2api1.doSomething();
        Lib5Core1Impl2Api2 lib5core1impl2api2;
        lib5core1impl2api2.doSomething();
        Lib5Core1Impl2Api3 lib5core1impl2api3;
        lib5core1impl2api3.doSomething();
        visited = 1;
    }
}

