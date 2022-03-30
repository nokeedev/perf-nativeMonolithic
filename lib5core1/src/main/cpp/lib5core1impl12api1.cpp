// GENERATED SOURCE FILE

#include "lib5core1_private.h"
#include "lib5core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core1impl12api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl12api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl12api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl12api14(int a, int b) {
    return a + b;
}

int Lib5Core1Impl12Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core1Impl12Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core1Impl12Api1" << std::endl;
        Lib5Core1Impl13Api1 lib5core1impl13api1;
        lib5core1impl13api1.doSomething();
        Lib5Core1Impl12Impl lib5core1impl12impl;
        lib5core1impl12impl.doSomething();
        Lib5Core1Impl13Api2 lib5core1impl13api2;
        lib5core1impl13api2.doSomething();
        Lib5Core1Impl13Api3 lib5core1impl13api3;
        lib5core1impl13api3.doSomething();
        visited = 1;
    }
}

