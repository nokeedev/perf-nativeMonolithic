// GENERATED SOURCE FILE

#include "lib14core1_private.h"
#include "lib14core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core1impl19api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl19api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl19api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl19api14(int a, int b) {
    return a + b;
}

int Lib14Core1Impl19Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core1Impl19Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core1Impl19Api1" << std::endl;
        Lib14Core1Impl20Api1 lib14core1impl20api1;
        lib14core1impl20api1.doSomething();
        Lib14Core1Impl19Impl lib14core1impl19impl;
        lib14core1impl19impl.doSomething();
        Lib14Core1Impl20Api2 lib14core1impl20api2;
        lib14core1impl20api2.doSomething();
        Lib14Core1Impl20Api3 lib14core1impl20api3;
        lib14core1impl20api3.doSomething();
        visited = 1;
    }
}

