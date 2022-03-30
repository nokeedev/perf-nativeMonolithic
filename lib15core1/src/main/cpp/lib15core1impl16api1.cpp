// GENERATED SOURCE FILE

#include "lib15core1_private.h"
#include "lib15core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core1impl16api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl16api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl16api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl16api14(int a, int b) {
    return a + b;
}

int Lib15Core1Impl16Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core1Impl16Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core1Impl16Api1" << std::endl;
        Lib15Core1Impl17Api1 lib15core1impl17api1;
        lib15core1impl17api1.doSomething();
        Lib15Core1Impl16Impl lib15core1impl16impl;
        lib15core1impl16impl.doSomething();
        Lib15Core1Impl17Api2 lib15core1impl17api2;
        lib15core1impl17api2.doSomething();
        Lib15Core1Impl17Api3 lib15core1impl17api3;
        lib15core1impl17api3.doSomething();
        visited = 1;
    }
}

