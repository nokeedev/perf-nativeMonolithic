// GENERATED SOURCE FILE

#include "lib14core1_private.h"
#include "lib14core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core1impl14api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl14api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl14api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl14api14(int a, int b) {
    return a + b;
}

int Lib14Core1Impl14Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core1Impl14Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core1Impl14Api1" << std::endl;
        Lib14Core1Impl15Api1 lib14core1impl15api1;
        lib14core1impl15api1.doSomething();
        Lib14Core1Impl14Impl lib14core1impl14impl;
        lib14core1impl14impl.doSomething();
        Lib14Core1Impl15Api2 lib14core1impl15api2;
        lib14core1impl15api2.doSomething();
        Lib14Core1Impl15Api3 lib14core1impl15api3;
        lib14core1impl15api3.doSomething();
        visited = 1;
    }
}

