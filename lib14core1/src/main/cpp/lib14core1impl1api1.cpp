// GENERATED SOURCE FILE

#include "lib14core1_private.h"
#include "lib14core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core1impl1api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl1api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl1api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl1api14(int a, int b) {
    return a + b;
}

int Lib14Core1Impl1Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core1Impl1Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core1Impl1Api1" << std::endl;
        Lib14Core1Impl2Api1 lib14core1impl2api1;
        lib14core1impl2api1.doSomething();
        Lib14Core1Impl1Impl lib14core1impl1impl;
        lib14core1impl1impl.doSomething();
        Lib14Core1Impl2Api2 lib14core1impl2api2;
        lib14core1impl2api2.doSomething();
        Lib14Core1Impl2Api3 lib14core1impl2api3;
        lib14core1impl2api3.doSomething();
        visited = 1;
    }
}

