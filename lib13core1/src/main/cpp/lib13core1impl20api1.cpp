// GENERATED SOURCE FILE

#include "lib13core1_private.h"
#include "lib13core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core1impl20api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl20api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl20api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl20api14(int a, int b) {
    return a + b;
}

int Lib13Core1Impl20Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core1Impl20Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core1Impl20Api1" << std::endl;
        Lib13Core1Impl21Api1 lib13core1impl21api1;
        lib13core1impl21api1.doSomething();
        Lib13Core1Impl20Impl lib13core1impl20impl;
        lib13core1impl20impl.doSomething();
        Lib13Core1Impl21Api2 lib13core1impl21api2;
        lib13core1impl21api2.doSomething();
        Lib13Core1Impl21Api3 lib13core1impl21api3;
        lib13core1impl21api3.doSomething();
        visited = 1;
    }
}

