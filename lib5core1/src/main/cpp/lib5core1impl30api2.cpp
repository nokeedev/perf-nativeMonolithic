// GENERATED SOURCE FILE

#include "lib5core1_private.h"
#include "lib5core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core1impl30api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl30api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl30api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl30api24(int a, int b) {
    return a + b;
}

int Lib5Core1Impl30Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core1Impl30Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core1Impl30Api2" << std::endl;
        Lib5Core1Impl30Impl lib5core1impl30impl;
        lib5core1impl30impl.doSomething();
        Lib5Core1Impl31Api1 lib5core1impl31api1;
        lib5core1impl31api1.doSomething();
        Lib5Core1Impl31Api2 lib5core1impl31api2;
        lib5core1impl31api2.doSomething();
        Lib5Core1Impl31Api3 lib5core1impl31api3;
        lib5core1impl31api3.doSomething();
        visited = 1;
    }
}

