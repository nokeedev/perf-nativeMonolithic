// GENERATED SOURCE FILE

#include "lib14core1_private.h"
#include "lib14core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core1impl8api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl8api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl8api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl8api14(int a, int b) {
    return a + b;
}

int Lib14Core1Impl8Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core1Impl8Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core1Impl8Api1" << std::endl;
        Lib14Core1Impl9Api1 lib14core1impl9api1;
        lib14core1impl9api1.doSomething();
        Lib14Core1Impl8Impl lib14core1impl8impl;
        lib14core1impl8impl.doSomething();
        Lib14Core1Impl9Api2 lib14core1impl9api2;
        lib14core1impl9api2.doSomething();
        Lib14Core1Impl9Api3 lib14core1impl9api3;
        lib14core1impl9api3.doSomething();
        visited = 1;
    }
}

