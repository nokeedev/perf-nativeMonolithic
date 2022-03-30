// GENERATED SOURCE FILE

#include "lib14core1_private.h"
#include "lib14core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core1impl32api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl32api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl32api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl32api34(int a, int b) {
    return a + b;
}

int Lib14Core1Impl32Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core1Impl32Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core1Impl32Api3" << std::endl;
        Lib14Core1Impl32Impl lib14core1impl32impl;
        lib14core1impl32impl.doSomething();
        Lib14Core1Impl33Api1 lib14core1impl33api1;
        lib14core1impl33api1.doSomething();
        Lib14Core1Impl33Api2 lib14core1impl33api2;
        lib14core1impl33api2.doSomething();
        Lib14Core1Impl33Api3 lib14core1impl33api3;
        lib14core1impl33api3.doSomething();
        visited = 1;
    }
}

