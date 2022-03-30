// GENERATED SOURCE FILE

#include "lib15core1_private.h"
#include "lib15core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core1impl15api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl15api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl15api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl15api14(int a, int b) {
    return a + b;
}

int Lib15Core1Impl15Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core1Impl15Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core1Impl15Api1" << std::endl;
        Lib15Core1Impl16Api1 lib15core1impl16api1;
        lib15core1impl16api1.doSomething();
        Lib15Core1Impl15Impl lib15core1impl15impl;
        lib15core1impl15impl.doSomething();
        Lib15Core1Impl16Api2 lib15core1impl16api2;
        lib15core1impl16api2.doSomething();
        Lib15Core1Impl16Api3 lib15core1impl16api3;
        lib15core1impl16api3.doSomething();
        visited = 1;
    }
}

