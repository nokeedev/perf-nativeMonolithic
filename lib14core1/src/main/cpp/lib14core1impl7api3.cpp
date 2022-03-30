// GENERATED SOURCE FILE

#include "lib14core1_private.h"
#include "lib14core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core1impl7api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl7api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl7api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl7api34(int a, int b) {
    return a + b;
}

int Lib14Core1Impl7Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core1Impl7Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core1Impl7Api3" << std::endl;
        Lib14Core1Impl7Impl lib14core1impl7impl;
        lib14core1impl7impl.doSomething();
        Lib14Core1Impl8Api1 lib14core1impl8api1;
        lib14core1impl8api1.doSomething();
        Lib14Core1Impl8Api2 lib14core1impl8api2;
        lib14core1impl8api2.doSomething();
        Lib14Core1Impl8Api3 lib14core1impl8api3;
        lib14core1impl8api3.doSomething();
        visited = 1;
    }
}

