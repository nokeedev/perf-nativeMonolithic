// GENERATED SOURCE FILE

#include "lib16core1_private.h"
#include "lib16core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core1impl14api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl14api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl14api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl14api14(int a, int b) {
    return a + b;
}

int Lib16Core1Impl14Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core1Impl14Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core1Impl14Api1" << std::endl;
        Lib16Core1Impl15Api1 lib16core1impl15api1;
        lib16core1impl15api1.doSomething();
        Lib16Core1Impl14Impl lib16core1impl14impl;
        lib16core1impl14impl.doSomething();
        Lib16Core1Impl15Api2 lib16core1impl15api2;
        lib16core1impl15api2.doSomething();
        Lib16Core1Impl15Api3 lib16core1impl15api3;
        lib16core1impl15api3.doSomething();
        visited = 1;
    }
}

