// GENERATED SOURCE FILE

#include "lib7core1_private.h"
#include "lib7core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core1impl7api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl7api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl7api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl7api24(int a, int b) {
    return a + b;
}

int Lib7Core1Impl7Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core1Impl7Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core1Impl7Api2" << std::endl;
        Lib7Core1Impl7Impl lib7core1impl7impl;
        lib7core1impl7impl.doSomething();
        Lib7Core1Impl8Api1 lib7core1impl8api1;
        lib7core1impl8api1.doSomething();
        Lib7Core1Impl8Api2 lib7core1impl8api2;
        lib7core1impl8api2.doSomething();
        Lib7Core1Impl8Api3 lib7core1impl8api3;
        lib7core1impl8api3.doSomething();
        visited = 1;
    }
}

