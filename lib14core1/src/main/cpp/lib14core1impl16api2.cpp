// GENERATED SOURCE FILE

#include "lib14core1_private.h"
#include "lib14core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core1impl16api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl16api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl16api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl16api24(int a, int b) {
    return a + b;
}

int Lib14Core1Impl16Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core1Impl16Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core1Impl16Api2" << std::endl;
        Lib14Core1Impl16Impl lib14core1impl16impl;
        lib14core1impl16impl.doSomething();
        Lib14Core1Impl17Api1 lib14core1impl17api1;
        lib14core1impl17api1.doSomething();
        Lib14Core1Impl17Api2 lib14core1impl17api2;
        lib14core1impl17api2.doSomething();
        Lib14Core1Impl17Api3 lib14core1impl17api3;
        lib14core1impl17api3.doSomething();
        visited = 1;
    }
}

