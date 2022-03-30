// GENERATED SOURCE FILE

#include "lib7core1_private.h"
#include "lib7core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core1impl32api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl32api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl32api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl32api24(int a, int b) {
    return a + b;
}

int Lib7Core1Impl32Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core1Impl32Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core1Impl32Api2" << std::endl;
        Lib7Core1Impl32Impl lib7core1impl32impl;
        lib7core1impl32impl.doSomething();
        Lib7Core1Impl33Api1 lib7core1impl33api1;
        lib7core1impl33api1.doSomething();
        Lib7Core1Impl33Api2 lib7core1impl33api2;
        lib7core1impl33api2.doSomething();
        Lib7Core1Impl33Api3 lib7core1impl33api3;
        lib7core1impl33api3.doSomething();
        visited = 1;
    }
}

