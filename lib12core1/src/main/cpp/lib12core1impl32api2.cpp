// GENERATED SOURCE FILE

#include "lib12core1_private.h"
#include "lib12core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12core1impl32api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl32api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl32api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl32api24(int a, int b) {
    return a + b;
}

int Lib12Core1Impl32Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib12Core1Impl32Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Core1Impl32Api2" << std::endl;
        Lib12Core1Impl32Impl lib12core1impl32impl;
        lib12core1impl32impl.doSomething();
        Lib12Core1Impl33Api1 lib12core1impl33api1;
        lib12core1impl33api1.doSomething();
        Lib12Core1Impl33Api2 lib12core1impl33api2;
        lib12core1impl33api2.doSomething();
        Lib12Core1Impl33Api3 lib12core1impl33api3;
        lib12core1impl33api3.doSomething();
        visited = 1;
    }
}

