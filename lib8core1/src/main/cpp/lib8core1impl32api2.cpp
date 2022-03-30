// GENERATED SOURCE FILE

#include "lib8core1_private.h"
#include "lib8core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core1impl32api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl32api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl32api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl32api24(int a, int b) {
    return a + b;
}

int Lib8Core1Impl32Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core1Impl32Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core1Impl32Api2" << std::endl;
        Lib8Core1Impl32Impl lib8core1impl32impl;
        lib8core1impl32impl.doSomething();
        Lib8Core1Impl33Api1 lib8core1impl33api1;
        lib8core1impl33api1.doSomething();
        Lib8Core1Impl33Api2 lib8core1impl33api2;
        lib8core1impl33api2.doSomething();
        Lib8Core1Impl33Api3 lib8core1impl33api3;
        lib8core1impl33api3.doSomething();
        visited = 1;
    }
}

