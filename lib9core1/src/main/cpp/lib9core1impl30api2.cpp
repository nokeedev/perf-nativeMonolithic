// GENERATED SOURCE FILE

#include "lib9core1_private.h"
#include "lib9core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core1impl30api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl30api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl30api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl30api24(int a, int b) {
    return a + b;
}

int Lib9Core1Impl30Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core1Impl30Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core1Impl30Api2" << std::endl;
        Lib9Core1Impl30Impl lib9core1impl30impl;
        lib9core1impl30impl.doSomething();
        Lib9Core1Impl31Api1 lib9core1impl31api1;
        lib9core1impl31api1.doSomething();
        Lib9Core1Impl31Api2 lib9core1impl31api2;
        lib9core1impl31api2.doSomething();
        Lib9Core1Impl31Api3 lib9core1impl31api3;
        lib9core1impl31api3.doSomething();
        visited = 1;
    }
}

