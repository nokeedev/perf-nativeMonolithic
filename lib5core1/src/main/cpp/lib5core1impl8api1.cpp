// GENERATED SOURCE FILE

#include "lib5core1_private.h"
#include "lib5core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core1impl8api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl8api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl8api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl8api14(int a, int b) {
    return a + b;
}

int Lib5Core1Impl8Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core1Impl8Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core1Impl8Api1" << std::endl;
        Lib5Core1Impl9Api1 lib5core1impl9api1;
        lib5core1impl9api1.doSomething();
        Lib5Core1Impl8Impl lib5core1impl8impl;
        lib5core1impl8impl.doSomething();
        Lib5Core1Impl9Api2 lib5core1impl9api2;
        lib5core1impl9api2.doSomething();
        Lib5Core1Impl9Api3 lib5core1impl9api3;
        lib5core1impl9api3.doSomething();
        visited = 1;
    }
}

