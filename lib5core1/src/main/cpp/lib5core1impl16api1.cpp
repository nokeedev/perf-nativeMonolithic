// GENERATED SOURCE FILE

#include "lib5core1_private.h"
#include "lib5core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core1impl16api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl16api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl16api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl16api14(int a, int b) {
    return a + b;
}

int Lib5Core1Impl16Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core1Impl16Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core1Impl16Api1" << std::endl;
        Lib5Core1Impl17Api1 lib5core1impl17api1;
        lib5core1impl17api1.doSomething();
        Lib5Core1Impl16Impl lib5core1impl16impl;
        lib5core1impl16impl.doSomething();
        Lib5Core1Impl17Api2 lib5core1impl17api2;
        lib5core1impl17api2.doSomething();
        Lib5Core1Impl17Api3 lib5core1impl17api3;
        lib5core1impl17api3.doSomething();
        visited = 1;
    }
}

