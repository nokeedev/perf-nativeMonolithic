// GENERATED SOURCE FILE

#include "lib12core1_private.h"
#include "lib12core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12core1impl20api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl20api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl20api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl20api14(int a, int b) {
    return a + b;
}

int Lib12Core1Impl20Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib12Core1Impl20Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Core1Impl20Api1" << std::endl;
        Lib12Core1Impl21Api1 lib12core1impl21api1;
        lib12core1impl21api1.doSomething();
        Lib12Core1Impl20Impl lib12core1impl20impl;
        lib12core1impl20impl.doSomething();
        Lib12Core1Impl21Api2 lib12core1impl21api2;
        lib12core1impl21api2.doSomething();
        Lib12Core1Impl21Api3 lib12core1impl21api3;
        lib12core1impl21api3.doSomething();
        visited = 1;
    }
}

