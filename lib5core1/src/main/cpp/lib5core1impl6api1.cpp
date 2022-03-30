// GENERATED SOURCE FILE

#include "lib5core1_private.h"
#include "lib5core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core1impl6api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl6api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl6api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl6api14(int a, int b) {
    return a + b;
}

int Lib5Core1Impl6Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core1Impl6Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core1Impl6Api1" << std::endl;
        Lib5Core1Impl7Api1 lib5core1impl7api1;
        lib5core1impl7api1.doSomething();
        Lib5Core1Impl6Impl lib5core1impl6impl;
        lib5core1impl6impl.doSomething();
        Lib5Core1Impl7Api2 lib5core1impl7api2;
        lib5core1impl7api2.doSomething();
        Lib5Core1Impl7Api3 lib5core1impl7api3;
        lib5core1impl7api3.doSomething();
        visited = 1;
    }
}

