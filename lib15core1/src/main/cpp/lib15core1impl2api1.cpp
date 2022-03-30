// GENERATED SOURCE FILE

#include "lib15core1_private.h"
#include "lib15core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core1impl2api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl2api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl2api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl2api14(int a, int b) {
    return a + b;
}

int Lib15Core1Impl2Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core1Impl2Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core1Impl2Api1" << std::endl;
        Lib15Core1Impl3Api1 lib15core1impl3api1;
        lib15core1impl3api1.doSomething();
        Lib15Core1Impl2Impl lib15core1impl2impl;
        lib15core1impl2impl.doSomething();
        Lib15Core1Impl3Api2 lib15core1impl3api2;
        lib15core1impl3api2.doSomething();
        Lib15Core1Impl3Api3 lib15core1impl3api3;
        lib15core1impl3api3.doSomething();
        visited = 1;
    }
}

