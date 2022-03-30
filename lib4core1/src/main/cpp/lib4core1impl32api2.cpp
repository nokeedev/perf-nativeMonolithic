// GENERATED SOURCE FILE

#include "lib4core1_private.h"
#include "lib4core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core1impl32api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl32api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl32api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core1impl32api24(int a, int b) {
    return a + b;
}

int Lib4Core1Impl32Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core1Impl32Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core1Impl32Api2" << std::endl;
        Lib4Core1Impl32Impl lib4core1impl32impl;
        lib4core1impl32impl.doSomething();
        Lib4Core1Impl33Api1 lib4core1impl33api1;
        lib4core1impl33api1.doSomething();
        Lib4Core1Impl33Api2 lib4core1impl33api2;
        lib4core1impl33api2.doSomething();
        Lib4Core1Impl33Api3 lib4core1impl33api3;
        lib4core1impl33api3.doSomething();
        visited = 1;
    }
}

