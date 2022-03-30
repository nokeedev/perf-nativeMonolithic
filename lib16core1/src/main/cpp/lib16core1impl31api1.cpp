// GENERATED SOURCE FILE

#include "lib16core1_private.h"
#include "lib16core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core1impl31api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl31api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl31api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl31api14(int a, int b) {
    return a + b;
}

int Lib16Core1Impl31Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core1Impl31Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core1Impl31Api1" << std::endl;
        Lib16Core1Impl32Api1 lib16core1impl32api1;
        lib16core1impl32api1.doSomething();
        Lib16Core1Impl31Impl lib16core1impl31impl;
        lib16core1impl31impl.doSomething();
        Lib16Core1Impl32Api2 lib16core1impl32api2;
        lib16core1impl32api2.doSomething();
        Lib16Core1Impl32Api3 lib16core1impl32api3;
        lib16core1impl32api3.doSomething();
        visited = 1;
    }
}

