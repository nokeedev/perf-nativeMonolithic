// GENERATED SOURCE FILE

#include "lib15core1_private.h"
#include "lib15core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core1impl6api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl6api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl6api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl6api24(int a, int b) {
    return a + b;
}

int Lib15Core1Impl6Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core1Impl6Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core1Impl6Api2" << std::endl;
        Lib15Core1Impl6Impl lib15core1impl6impl;
        lib15core1impl6impl.doSomething();
        Lib15Core1Impl7Api1 lib15core1impl7api1;
        lib15core1impl7api1.doSomething();
        Lib15Core1Impl7Api2 lib15core1impl7api2;
        lib15core1impl7api2.doSomething();
        Lib15Core1Impl7Api3 lib15core1impl7api3;
        lib15core1impl7api3.doSomething();
        visited = 1;
    }
}

