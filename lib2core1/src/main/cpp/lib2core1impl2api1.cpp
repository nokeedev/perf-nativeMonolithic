// GENERATED SOURCE FILE

#include "lib2core1_private.h"
#include "lib2core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core1impl2api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl2api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl2api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core1impl2api14(int a, int b) {
    return a + b;
}

int Lib2Core1Impl2Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core1Impl2Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core1Impl2Api1" << std::endl;
        Lib2Core1Impl3Api1 lib2core1impl3api1;
        lib2core1impl3api1.doSomething();
        Lib2Core1Impl2Impl lib2core1impl2impl;
        lib2core1impl2impl.doSomething();
        Lib2Core1Impl3Api2 lib2core1impl3api2;
        lib2core1impl3api2.doSomething();
        Lib2Core1Impl3Api3 lib2core1impl3api3;
        lib2core1impl3api3.doSomething();
        visited = 1;
    }
}

