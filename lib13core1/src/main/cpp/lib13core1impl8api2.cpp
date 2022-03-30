// GENERATED SOURCE FILE

#include "lib13core1_private.h"
#include "lib13core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core1impl8api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl8api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl8api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl8api24(int a, int b) {
    return a + b;
}

int Lib13Core1Impl8Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core1Impl8Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core1Impl8Api2" << std::endl;
        Lib13Core1Impl8Impl lib13core1impl8impl;
        lib13core1impl8impl.doSomething();
        Lib13Core1Impl9Api1 lib13core1impl9api1;
        lib13core1impl9api1.doSomething();
        Lib13Core1Impl9Api2 lib13core1impl9api2;
        lib13core1impl9api2.doSomething();
        Lib13Core1Impl9Api3 lib13core1impl9api3;
        lib13core1impl9api3.doSomething();
        visited = 1;
    }
}

