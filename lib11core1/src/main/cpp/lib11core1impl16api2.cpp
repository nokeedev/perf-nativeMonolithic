// GENERATED SOURCE FILE

#include "lib11core1_private.h"
#include "lib11core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core1impl16api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl16api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl16api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl16api24(int a, int b) {
    return a + b;
}

int Lib11Core1Impl16Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core1Impl16Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core1Impl16Api2" << std::endl;
        Lib11Core1Impl16Impl lib11core1impl16impl;
        lib11core1impl16impl.doSomething();
        Lib11Core1Impl17Api1 lib11core1impl17api1;
        lib11core1impl17api1.doSomething();
        Lib11Core1Impl17Api2 lib11core1impl17api2;
        lib11core1impl17api2.doSomething();
        Lib11Core1Impl17Api3 lib11core1impl17api3;
        lib11core1impl17api3.doSomething();
        visited = 1;
    }
}

