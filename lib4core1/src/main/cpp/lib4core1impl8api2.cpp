// GENERATED SOURCE FILE

#include "lib4core1_private.h"
#include "lib4core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core1impl8api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl8api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl8api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl8api24(int a, int b) {
    return a + b;
}

int Lib4Core1Impl8Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core1Impl8Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core1Impl8Api2" << std::endl;
        Lib4Core1Impl8Impl lib4core1impl8impl;
        lib4core1impl8impl.doSomething();
        Lib4Core1Impl9Api1 lib4core1impl9api1;
        lib4core1impl9api1.doSomething();
        Lib4Core1Impl9Api2 lib4core1impl9api2;
        lib4core1impl9api2.doSomething();
        Lib4Core1Impl9Api3 lib4core1impl9api3;
        lib4core1impl9api3.doSomething();
        visited = 1;
    }
}

