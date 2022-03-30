// GENERATED SOURCE FILE

#include "lib16core1_private.h"
#include "lib16core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core1impl7api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl7api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl7api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl7api24(int a, int b) {
    return a + b;
}

int Lib16Core1Impl7Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core1Impl7Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core1Impl7Api2" << std::endl;
        Lib16Core1Impl7Impl lib16core1impl7impl;
        lib16core1impl7impl.doSomething();
        Lib16Core1Impl8Api1 lib16core1impl8api1;
        lib16core1impl8api1.doSomething();
        Lib16Core1Impl8Api2 lib16core1impl8api2;
        lib16core1impl8api2.doSomething();
        Lib16Core1Impl8Api3 lib16core1impl8api3;
        lib16core1impl8api3.doSomething();
        visited = 1;
    }
}

