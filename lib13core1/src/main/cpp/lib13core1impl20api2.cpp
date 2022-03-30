// GENERATED SOURCE FILE

#include "lib13core1_private.h"
#include "lib13core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core1impl20api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl20api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl20api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl20api24(int a, int b) {
    return a + b;
}

int Lib13Core1Impl20Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core1Impl20Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core1Impl20Api2" << std::endl;
        Lib13Core1Impl20Impl lib13core1impl20impl;
        lib13core1impl20impl.doSomething();
        Lib13Core1Impl21Api1 lib13core1impl21api1;
        lib13core1impl21api1.doSomething();
        Lib13Core1Impl21Api2 lib13core1impl21api2;
        lib13core1impl21api2.doSomething();
        Lib13Core1Impl21Api3 lib13core1impl21api3;
        lib13core1impl21api3.doSomething();
        visited = 1;
    }
}

