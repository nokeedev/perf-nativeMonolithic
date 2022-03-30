// GENERATED SOURCE FILE

#include "lib9core1_private.h"
#include "lib9core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core1impl8api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl8api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl8api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl8api24(int a, int b) {
    return a + b;
}

int Lib9Core1Impl8Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core1Impl8Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core1Impl8Api2" << std::endl;
        Lib9Core1Impl8Impl lib9core1impl8impl;
        lib9core1impl8impl.doSomething();
        Lib9Core1Impl9Api1 lib9core1impl9api1;
        lib9core1impl9api1.doSomething();
        Lib9Core1Impl9Api2 lib9core1impl9api2;
        lib9core1impl9api2.doSomething();
        Lib9Core1Impl9Api3 lib9core1impl9api3;
        lib9core1impl9api3.doSomething();
        visited = 1;
    }
}

