// GENERATED SOURCE FILE

#include "lib8core1_private.h"
#include "lib8core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core1impl2api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl2api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl2api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core1impl2api14(int a, int b) {
    return a + b;
}

int Lib8Core1Impl2Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core1Impl2Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core1Impl2Api1" << std::endl;
        Lib8Core1Impl3Api1 lib8core1impl3api1;
        lib8core1impl3api1.doSomething();
        Lib8Core1Impl2Impl lib8core1impl2impl;
        lib8core1impl2impl.doSomething();
        Lib8Core1Impl3Api2 lib8core1impl3api2;
        lib8core1impl3api2.doSomething();
        Lib8Core1Impl3Api3 lib8core1impl3api3;
        lib8core1impl3api3.doSomething();
        visited = 1;
    }
}

