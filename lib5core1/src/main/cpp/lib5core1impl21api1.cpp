// GENERATED SOURCE FILE

#include "lib5core1_private.h"
#include "lib5core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core1impl21api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl21api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl21api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl21api14(int a, int b) {
    return a + b;
}

int Lib5Core1Impl21Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core1Impl21Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core1Impl21Api1" << std::endl;
        Lib5Core1Impl22Api1 lib5core1impl22api1;
        lib5core1impl22api1.doSomething();
        Lib5Core1Impl21Impl lib5core1impl21impl;
        lib5core1impl21impl.doSomething();
        Lib5Core1Impl22Api2 lib5core1impl22api2;
        lib5core1impl22api2.doSomething();
        Lib5Core1Impl22Api3 lib5core1impl22api3;
        lib5core1impl22api3.doSomething();
        visited = 1;
    }
}

