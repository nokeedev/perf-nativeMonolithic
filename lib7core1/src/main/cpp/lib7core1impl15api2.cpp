// GENERATED SOURCE FILE

#include "lib7core1_private.h"
#include "lib7core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core1impl15api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl15api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl15api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl15api24(int a, int b) {
    return a + b;
}

int Lib7Core1Impl15Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core1Impl15Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core1Impl15Api2" << std::endl;
        Lib7Core1Impl15Impl lib7core1impl15impl;
        lib7core1impl15impl.doSomething();
        Lib7Core1Impl16Api1 lib7core1impl16api1;
        lib7core1impl16api1.doSomething();
        Lib7Core1Impl16Api2 lib7core1impl16api2;
        lib7core1impl16api2.doSomething();
        Lib7Core1Impl16Api3 lib7core1impl16api3;
        lib7core1impl16api3.doSomething();
        visited = 1;
    }
}

