// GENERATED SOURCE FILE

#include "lib9core1_private.h"
#include "lib9core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core1impl7api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl7api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl7api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core1impl7api34(int a, int b) {
    return a + b;
}

int Lib9Core1Impl7Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core1Impl7Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core1Impl7Api3" << std::endl;
        Lib9Core1Impl7Impl lib9core1impl7impl;
        lib9core1impl7impl.doSomething();
        Lib9Core1Impl8Api1 lib9core1impl8api1;
        lib9core1impl8api1.doSomething();
        Lib9Core1Impl8Api2 lib9core1impl8api2;
        lib9core1impl8api2.doSomething();
        Lib9Core1Impl8Api3 lib9core1impl8api3;
        lib9core1impl8api3.doSomething();
        visited = 1;
    }
}

