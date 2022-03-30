// GENERATED SOURCE FILE

#include "lib13core1_private.h"
#include "lib13core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core1impl29api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl29api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl29api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl29api14(int a, int b) {
    return a + b;
}

int Lib13Core1Impl29Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core1Impl29Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core1Impl29Api1" << std::endl;
        Lib13Core1Impl30Api1 lib13core1impl30api1;
        lib13core1impl30api1.doSomething();
        Lib13Core1Impl29Impl lib13core1impl29impl;
        lib13core1impl29impl.doSomething();
        Lib13Core1Impl30Api2 lib13core1impl30api2;
        lib13core1impl30api2.doSomething();
        Lib13Core1Impl30Api3 lib13core1impl30api3;
        lib13core1impl30api3.doSomething();
        visited = 1;
    }
}

