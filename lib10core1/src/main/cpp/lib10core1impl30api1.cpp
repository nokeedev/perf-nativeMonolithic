// GENERATED SOURCE FILE

#include "lib10core1_private.h"
#include "lib10core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core1impl30api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl30api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl30api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl30api14(int a, int b) {
    return a + b;
}

int Lib10Core1Impl30Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core1Impl30Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core1Impl30Api1" << std::endl;
        Lib10Core1Impl31Api1 lib10core1impl31api1;
        lib10core1impl31api1.doSomething();
        Lib10Core1Impl30Impl lib10core1impl30impl;
        lib10core1impl30impl.doSomething();
        Lib10Core1Impl31Api2 lib10core1impl31api2;
        lib10core1impl31api2.doSomething();
        Lib10Core1Impl31Api3 lib10core1impl31api3;
        lib10core1impl31api3.doSomething();
        visited = 1;
    }
}

