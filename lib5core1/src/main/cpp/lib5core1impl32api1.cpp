// GENERATED SOURCE FILE

#include "lib5core1_private.h"
#include "lib5core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core1impl32api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl32api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl32api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl32api14(int a, int b) {
    return a + b;
}

int Lib5Core1Impl32Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core1Impl32Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core1Impl32Api1" << std::endl;
        Lib5Core1Impl33Api1 lib5core1impl33api1;
        lib5core1impl33api1.doSomething();
        Lib5Core1Impl32Impl lib5core1impl32impl;
        lib5core1impl32impl.doSomething();
        Lib5Core1Impl33Api2 lib5core1impl33api2;
        lib5core1impl33api2.doSomething();
        Lib5Core1Impl33Api3 lib5core1impl33api3;
        lib5core1impl33api3.doSomething();
        visited = 1;
    }
}

