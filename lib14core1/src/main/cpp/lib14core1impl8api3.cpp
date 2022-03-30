// GENERATED SOURCE FILE

#include "lib14core1_private.h"
#include "lib14core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core1impl8api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl8api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl8api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl8api34(int a, int b) {
    return a + b;
}

int Lib14Core1Impl8Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core1Impl8Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core1Impl8Api3" << std::endl;
        Lib14Core1Impl8Impl lib14core1impl8impl;
        lib14core1impl8impl.doSomething();
        Lib14Core1Impl9Api1 lib14core1impl9api1;
        lib14core1impl9api1.doSomething();
        Lib14Core1Impl9Api2 lib14core1impl9api2;
        lib14core1impl9api2.doSomething();
        Lib14Core1Impl9Api3 lib14core1impl9api3;
        lib14core1impl9api3.doSomething();
        visited = 1;
    }
}

