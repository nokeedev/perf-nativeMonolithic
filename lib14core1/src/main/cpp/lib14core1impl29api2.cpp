// GENERATED SOURCE FILE

#include "lib14core1_private.h"
#include "lib14core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core1impl29api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl29api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl29api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl29api24(int a, int b) {
    return a + b;
}

int Lib14Core1Impl29Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core1Impl29Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core1Impl29Api2" << std::endl;
        Lib14Core1Impl29Impl lib14core1impl29impl;
        lib14core1impl29impl.doSomething();
        Lib14Core1Impl30Api1 lib14core1impl30api1;
        lib14core1impl30api1.doSomething();
        Lib14Core1Impl30Api2 lib14core1impl30api2;
        lib14core1impl30api2.doSomething();
        Lib14Core1Impl30Api3 lib14core1impl30api3;
        lib14core1impl30api3.doSomething();
        visited = 1;
    }
}

