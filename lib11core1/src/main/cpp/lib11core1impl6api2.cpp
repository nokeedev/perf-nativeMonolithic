// GENERATED SOURCE FILE

#include "lib11core1_private.h"
#include "lib11core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core1impl6api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl6api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl6api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl6api24(int a, int b) {
    return a + b;
}

int Lib11Core1Impl6Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core1Impl6Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core1Impl6Api2" << std::endl;
        Lib11Core1Impl6Impl lib11core1impl6impl;
        lib11core1impl6impl.doSomething();
        Lib11Core1Impl7Api1 lib11core1impl7api1;
        lib11core1impl7api1.doSomething();
        Lib11Core1Impl7Api2 lib11core1impl7api2;
        lib11core1impl7api2.doSomething();
        Lib11Core1Impl7Api3 lib11core1impl7api3;
        lib11core1impl7api3.doSomething();
        visited = 1;
    }
}

