// GENERATED SOURCE FILE

#include "lib5core1_private.h"
#include "lib5core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core1impl15api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl15api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl15api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl15api24(int a, int b) {
    return a + b;
}

int Lib5Core1Impl15Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core1Impl15Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core1Impl15Api2" << std::endl;
        Lib5Core1Impl15Impl lib5core1impl15impl;
        lib5core1impl15impl.doSomething();
        Lib5Core1Impl16Api1 lib5core1impl16api1;
        lib5core1impl16api1.doSomething();
        Lib5Core1Impl16Api2 lib5core1impl16api2;
        lib5core1impl16api2.doSomething();
        Lib5Core1Impl16Api3 lib5core1impl16api3;
        lib5core1impl16api3.doSomething();
        visited = 1;
    }
}

