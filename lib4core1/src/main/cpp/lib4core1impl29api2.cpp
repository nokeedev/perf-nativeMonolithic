// GENERATED SOURCE FILE

#include "lib4core1_private.h"
#include "lib4core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core1impl29api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl29api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl29api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl29api24(int a, int b) {
    return a + b;
}

int Lib4Core1Impl29Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core1Impl29Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core1Impl29Api2" << std::endl;
        Lib4Core1Impl29Impl lib4core1impl29impl;
        lib4core1impl29impl.doSomething();
        Lib4Core1Impl30Api1 lib4core1impl30api1;
        lib4core1impl30api1.doSomething();
        Lib4Core1Impl30Api2 lib4core1impl30api2;
        lib4core1impl30api2.doSomething();
        Lib4Core1Impl30Api3 lib4core1impl30api3;
        lib4core1impl30api3.doSomething();
        visited = 1;
    }
}

