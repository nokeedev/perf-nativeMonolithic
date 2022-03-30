// GENERATED SOURCE FILE

#include "lib9core1_private.h"
#include "lib9core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core1impl14api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl14api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl14api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl14api14(int a, int b) {
    return a + b;
}

int Lib9Core1Impl14Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core1Impl14Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core1Impl14Api1" << std::endl;
        Lib9Core1Impl15Api1 lib9core1impl15api1;
        lib9core1impl15api1.doSomething();
        Lib9Core1Impl14Impl lib9core1impl14impl;
        lib9core1impl14impl.doSomething();
        Lib9Core1Impl15Api2 lib9core1impl15api2;
        lib9core1impl15api2.doSomething();
        Lib9Core1Impl15Api3 lib9core1impl15api3;
        lib9core1impl15api3.doSomething();
        visited = 1;
    }
}

