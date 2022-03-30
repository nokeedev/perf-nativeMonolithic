// GENERATED SOURCE FILE

#include "lib12core1_private.h"
#include "lib12core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12core1impl6api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl6api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl6api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl6api14(int a, int b) {
    return a + b;
}

int Lib12Core1Impl6Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib12Core1Impl6Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Core1Impl6Api1" << std::endl;
        Lib12Core1Impl7Api1 lib12core1impl7api1;
        lib12core1impl7api1.doSomething();
        Lib12Core1Impl6Impl lib12core1impl6impl;
        lib12core1impl6impl.doSomething();
        Lib12Core1Impl7Api2 lib12core1impl7api2;
        lib12core1impl7api2.doSomething();
        Lib12Core1Impl7Api3 lib12core1impl7api3;
        lib12core1impl7api3.doSomething();
        visited = 1;
    }
}

