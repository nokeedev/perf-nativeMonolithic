// GENERATED SOURCE FILE

#include "lib7core1_private.h"
#include "lib7core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core1impl2api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl2api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl2api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl2api14(int a, int b) {
    return a + b;
}

int Lib7Core1Impl2Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core1Impl2Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core1Impl2Api1" << std::endl;
        Lib7Core1Impl3Api1 lib7core1impl3api1;
        lib7core1impl3api1.doSomething();
        Lib7Core1Impl2Impl lib7core1impl2impl;
        lib7core1impl2impl.doSomething();
        Lib7Core1Impl3Api2 lib7core1impl3api2;
        lib7core1impl3api2.doSomething();
        Lib7Core1Impl3Api3 lib7core1impl3api3;
        lib7core1impl3api3.doSomething();
        visited = 1;
    }
}

