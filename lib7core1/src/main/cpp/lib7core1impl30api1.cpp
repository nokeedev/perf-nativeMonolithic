// GENERATED SOURCE FILE

#include "lib7core1_private.h"
#include "lib7core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core1impl30api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl30api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl30api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl30api14(int a, int b) {
    return a + b;
}

int Lib7Core1Impl30Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core1Impl30Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core1Impl30Api1" << std::endl;
        Lib7Core1Impl31Api1 lib7core1impl31api1;
        lib7core1impl31api1.doSomething();
        Lib7Core1Impl30Impl lib7core1impl30impl;
        lib7core1impl30impl.doSomething();
        Lib7Core1Impl31Api2 lib7core1impl31api2;
        lib7core1impl31api2.doSomething();
        Lib7Core1Impl31Api3 lib7core1impl31api3;
        lib7core1impl31api3.doSomething();
        visited = 1;
    }
}

