// GENERATED SOURCE FILE

#include "lib12core1_private.h"
#include "lib12core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12core1impl31api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl31api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl31api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl31api24(int a, int b) {
    return a + b;
}

int Lib12Core1Impl31Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib12Core1Impl31Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Core1Impl31Api2" << std::endl;
        Lib12Core1Impl31Impl lib12core1impl31impl;
        lib12core1impl31impl.doSomething();
        Lib12Core1Impl32Api1 lib12core1impl32api1;
        lib12core1impl32api1.doSomething();
        Lib12Core1Impl32Api2 lib12core1impl32api2;
        lib12core1impl32api2.doSomething();
        Lib12Core1Impl32Api3 lib12core1impl32api3;
        lib12core1impl32api3.doSomething();
        visited = 1;
    }
}

