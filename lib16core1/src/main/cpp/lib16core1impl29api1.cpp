// GENERATED SOURCE FILE

#include "lib16core1_private.h"
#include "lib16core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core1impl29api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl29api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl29api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl29api14(int a, int b) {
    return a + b;
}

int Lib16Core1Impl29Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core1Impl29Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core1Impl29Api1" << std::endl;
        Lib16Core1Impl30Api1 lib16core1impl30api1;
        lib16core1impl30api1.doSomething();
        Lib16Core1Impl29Impl lib16core1impl29impl;
        lib16core1impl29impl.doSomething();
        Lib16Core1Impl30Api2 lib16core1impl30api2;
        lib16core1impl30api2.doSomething();
        Lib16Core1Impl30Api3 lib16core1impl30api3;
        lib16core1impl30api3.doSomething();
        visited = 1;
    }
}

