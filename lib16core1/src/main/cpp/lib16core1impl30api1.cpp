// GENERATED SOURCE FILE

#include "lib16core1_private.h"
#include "lib16core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core1impl30api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl30api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl30api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl30api14(int a, int b) {
    return a + b;
}

int Lib16Core1Impl30Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core1Impl30Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core1Impl30Api1" << std::endl;
        Lib16Core1Impl31Api1 lib16core1impl31api1;
        lib16core1impl31api1.doSomething();
        Lib16Core1Impl30Impl lib16core1impl30impl;
        lib16core1impl30impl.doSomething();
        Lib16Core1Impl31Api2 lib16core1impl31api2;
        lib16core1impl31api2.doSomething();
        Lib16Core1Impl31Api3 lib16core1impl31api3;
        lib16core1impl31api3.doSomething();
        visited = 1;
    }
}

