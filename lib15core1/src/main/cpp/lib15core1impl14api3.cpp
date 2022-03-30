// GENERATED SOURCE FILE

#include "lib15core1_private.h"
#include "lib15core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core1impl14api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl14api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl14api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl14api34(int a, int b) {
    return a + b;
}

int Lib15Core1Impl14Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core1Impl14Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core1Impl14Api3" << std::endl;
        Lib15Core1Impl14Impl lib15core1impl14impl;
        lib15core1impl14impl.doSomething();
        Lib15Core1Impl15Api1 lib15core1impl15api1;
        lib15core1impl15api1.doSomething();
        Lib15Core1Impl15Api2 lib15core1impl15api2;
        lib15core1impl15api2.doSomething();
        Lib15Core1Impl15Api3 lib15core1impl15api3;
        lib15core1impl15api3.doSomething();
        visited = 1;
    }
}

