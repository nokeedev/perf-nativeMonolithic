// GENERATED SOURCE FILE

#include "lib5core1_private.h"
#include "lib5core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core1impl31api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl31api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl31api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl31api14(int a, int b) {
    return a + b;
}

int Lib5Core1Impl31Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core1Impl31Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core1Impl31Api1" << std::endl;
        Lib5Core1Impl32Api1 lib5core1impl32api1;
        lib5core1impl32api1.doSomething();
        Lib5Core1Impl31Impl lib5core1impl31impl;
        lib5core1impl31impl.doSomething();
        Lib5Core1Impl32Api2 lib5core1impl32api2;
        lib5core1impl32api2.doSomething();
        Lib5Core1Impl32Api3 lib5core1impl32api3;
        lib5core1impl32api3.doSomething();
        visited = 1;
    }
}

