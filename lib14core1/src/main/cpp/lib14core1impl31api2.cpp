// GENERATED SOURCE FILE

#include "lib14core1_private.h"
#include "lib14core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core1impl31api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl31api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl31api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl31api24(int a, int b) {
    return a + b;
}

int Lib14Core1Impl31Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core1Impl31Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core1Impl31Api2" << std::endl;
        Lib14Core1Impl31Impl lib14core1impl31impl;
        lib14core1impl31impl.doSomething();
        Lib14Core1Impl32Api1 lib14core1impl32api1;
        lib14core1impl32api1.doSomething();
        Lib14Core1Impl32Api2 lib14core1impl32api2;
        lib14core1impl32api2.doSomething();
        Lib14Core1Impl32Api3 lib14core1impl32api3;
        lib14core1impl32api3.doSomething();
        visited = 1;
    }
}
