// GENERATED SOURCE FILE

#include "lib11core1_private.h"
#include "lib11core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core1impl8api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl8api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl8api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl8api24(int a, int b) {
    return a + b;
}

int Lib11Core1Impl8Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core1Impl8Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core1Impl8Api2" << std::endl;
        Lib11Core1Impl8Impl lib11core1impl8impl;
        lib11core1impl8impl.doSomething();
        Lib11Core1Impl9Api1 lib11core1impl9api1;
        lib11core1impl9api1.doSomething();
        Lib11Core1Impl9Api2 lib11core1impl9api2;
        lib11core1impl9api2.doSomething();
        Lib11Core1Impl9Api3 lib11core1impl9api3;
        lib11core1impl9api3.doSomething();
        visited = 1;
    }
}

