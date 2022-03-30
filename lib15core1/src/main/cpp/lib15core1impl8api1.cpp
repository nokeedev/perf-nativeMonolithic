// GENERATED SOURCE FILE

#include "lib15core1_private.h"
#include "lib15core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core1impl8api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl8api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl8api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl8api14(int a, int b) {
    return a + b;
}

int Lib15Core1Impl8Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core1Impl8Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core1Impl8Api1" << std::endl;
        Lib15Core1Impl9Api1 lib15core1impl9api1;
        lib15core1impl9api1.doSomething();
        Lib15Core1Impl8Impl lib15core1impl8impl;
        lib15core1impl8impl.doSomething();
        Lib15Core1Impl9Api2 lib15core1impl9api2;
        lib15core1impl9api2.doSomething();
        Lib15Core1Impl9Api3 lib15core1impl9api3;
        lib15core1impl9api3.doSomething();
        visited = 1;
    }
}

