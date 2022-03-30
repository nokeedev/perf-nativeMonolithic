// GENERATED SOURCE FILE

#include "lib7core1_private.h"
#include "lib7core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core1impl14api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl14api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl14api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl14api24(int a, int b) {
    return a + b;
}

int Lib7Core1Impl14Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core1Impl14Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core1Impl14Api2" << std::endl;
        Lib7Core1Impl14Impl lib7core1impl14impl;
        lib7core1impl14impl.doSomething();
        Lib7Core1Impl15Api1 lib7core1impl15api1;
        lib7core1impl15api1.doSomething();
        Lib7Core1Impl15Api2 lib7core1impl15api2;
        lib7core1impl15api2.doSomething();
        Lib7Core1Impl15Api3 lib7core1impl15api3;
        lib7core1impl15api3.doSomething();
        visited = 1;
    }
}

