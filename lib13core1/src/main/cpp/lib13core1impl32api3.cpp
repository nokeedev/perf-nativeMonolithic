// GENERATED SOURCE FILE

#include "lib13core1_private.h"
#include "lib13core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core1impl32api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl32api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl32api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl32api34(int a, int b) {
    return a + b;
}

int Lib13Core1Impl32Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core1Impl32Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core1Impl32Api3" << std::endl;
        Lib13Core1Impl32Impl lib13core1impl32impl;
        lib13core1impl32impl.doSomething();
        Lib13Core1Impl33Api1 lib13core1impl33api1;
        lib13core1impl33api1.doSomething();
        Lib13Core1Impl33Api2 lib13core1impl33api2;
        lib13core1impl33api2.doSomething();
        Lib13Core1Impl33Api3 lib13core1impl33api3;
        lib13core1impl33api3.doSomething();
        visited = 1;
    }
}

