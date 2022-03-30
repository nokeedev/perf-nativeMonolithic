// GENERATED SOURCE FILE

#include "lib16core1_private.h"
#include "lib16core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core1impl20api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl20api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl20api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl20api14(int a, int b) {
    return a + b;
}

int Lib16Core1Impl20Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core1Impl20Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core1Impl20Api1" << std::endl;
        Lib16Core1Impl21Api1 lib16core1impl21api1;
        lib16core1impl21api1.doSomething();
        Lib16Core1Impl20Impl lib16core1impl20impl;
        lib16core1impl20impl.doSomething();
        Lib16Core1Impl21Api2 lib16core1impl21api2;
        lib16core1impl21api2.doSomething();
        Lib16Core1Impl21Api3 lib16core1impl21api3;
        lib16core1impl21api3.doSomething();
        visited = 1;
    }
}

