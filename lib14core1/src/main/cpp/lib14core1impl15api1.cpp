// GENERATED SOURCE FILE

#include "lib14core1_private.h"
#include "lib14core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core1impl15api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl15api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl15api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl15api14(int a, int b) {
    return a + b;
}

int Lib14Core1Impl15Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core1Impl15Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core1Impl15Api1" << std::endl;
        Lib14Core1Impl16Api1 lib14core1impl16api1;
        lib14core1impl16api1.doSomething();
        Lib14Core1Impl15Impl lib14core1impl15impl;
        lib14core1impl15impl.doSomething();
        Lib14Core1Impl16Api2 lib14core1impl16api2;
        lib14core1impl16api2.doSomething();
        Lib14Core1Impl16Api3 lib14core1impl16api3;
        lib14core1impl16api3.doSomething();
        visited = 1;
    }
}

