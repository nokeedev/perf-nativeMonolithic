// GENERATED SOURCE FILE

#include "lib9core1_private.h"
#include "lib9core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core1impl25api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl25api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl25api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl25api14(int a, int b) {
    return a + b;
}

int Lib9Core1Impl25Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core1Impl25Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core1Impl25Api1" << std::endl;
        Lib9Core1Impl26Api1 lib9core1impl26api1;
        lib9core1impl26api1.doSomething();
        Lib9Core1Impl25Impl lib9core1impl25impl;
        lib9core1impl25impl.doSomething();
        Lib9Core1Impl26Api2 lib9core1impl26api2;
        lib9core1impl26api2.doSomething();
        Lib9Core1Impl26Api3 lib9core1impl26api3;
        lib9core1impl26api3.doSomething();
        visited = 1;
    }
}

