// GENERATED SOURCE FILE

#include "lib10core1_private.h"
#include "lib10core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core1impl16api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl16api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl16api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl16api24(int a, int b) {
    return a + b;
}

int Lib10Core1Impl16Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core1Impl16Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core1Impl16Api2" << std::endl;
        Lib10Core1Impl16Impl lib10core1impl16impl;
        lib10core1impl16impl.doSomething();
        Lib10Core1Impl17Api1 lib10core1impl17api1;
        lib10core1impl17api1.doSomething();
        Lib10Core1Impl17Api2 lib10core1impl17api2;
        lib10core1impl17api2.doSomething();
        Lib10Core1Impl17Api3 lib10core1impl17api3;
        lib10core1impl17api3.doSomething();
        visited = 1;
    }
}

