// GENERATED SOURCE FILE

#include "lib5core1_private.h"
#include "lib5core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core1impl14api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl14api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl14api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl14api14(int a, int b) {
    return a + b;
}

int Lib5Core1Impl14Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core1Impl14Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core1Impl14Api1" << std::endl;
        Lib5Core1Impl15Api1 lib5core1impl15api1;
        lib5core1impl15api1.doSomething();
        Lib5Core1Impl14Impl lib5core1impl14impl;
        lib5core1impl14impl.doSomething();
        Lib5Core1Impl15Api2 lib5core1impl15api2;
        lib5core1impl15api2.doSomething();
        Lib5Core1Impl15Api3 lib5core1impl15api3;
        lib5core1impl15api3.doSomething();
        visited = 1;
    }
}

