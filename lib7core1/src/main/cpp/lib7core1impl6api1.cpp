// GENERATED SOURCE FILE

#include "lib7core1_private.h"
#include "lib7core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core1impl6api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl6api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl6api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl6api14(int a, int b) {
    return a + b;
}

int Lib7Core1Impl6Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core1Impl6Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core1Impl6Api1" << std::endl;
        Lib7Core1Impl7Api1 lib7core1impl7api1;
        lib7core1impl7api1.doSomething();
        Lib7Core1Impl6Impl lib7core1impl6impl;
        lib7core1impl6impl.doSomething();
        Lib7Core1Impl7Api2 lib7core1impl7api2;
        lib7core1impl7api2.doSomething();
        Lib7Core1Impl7Api3 lib7core1impl7api3;
        lib7core1impl7api3.doSomething();
        visited = 1;
    }
}
