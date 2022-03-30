// GENERATED SOURCE FILE

#include "lib5core1_private.h"
#include "lib5core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core1impl2api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl2api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl2api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl2api14(int a, int b) {
    return a + b;
}

int Lib5Core1Impl2Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core1Impl2Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core1Impl2Api1" << std::endl;
        Lib5Core1Impl3Api1 lib5core1impl3api1;
        lib5core1impl3api1.doSomething();
        Lib5Core1Impl2Impl lib5core1impl2impl;
        lib5core1impl2impl.doSomething();
        Lib5Core1Impl3Api2 lib5core1impl3api2;
        lib5core1impl3api2.doSomething();
        Lib5Core1Impl3Api3 lib5core1impl3api3;
        lib5core1impl3api3.doSomething();
        visited = 1;
    }
}

