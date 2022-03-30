// GENERATED SOURCE FILE

#include "lib10core1_private.h"
#include "lib10core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core1impl8api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl8api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl8api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl8api24(int a, int b) {
    return a + b;
}

int Lib10Core1Impl8Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core1Impl8Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core1Impl8Api2" << std::endl;
        Lib10Core1Impl8Impl lib10core1impl8impl;
        lib10core1impl8impl.doSomething();
        Lib10Core1Impl9Api1 lib10core1impl9api1;
        lib10core1impl9api1.doSomething();
        Lib10Core1Impl9Api2 lib10core1impl9api2;
        lib10core1impl9api2.doSomething();
        Lib10Core1Impl9Api3 lib10core1impl9api3;
        lib10core1impl9api3.doSomething();
        visited = 1;
    }
}

