// GENERATED SOURCE FILE

#include "lib12core1_private.h"
#include "lib12core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12core1impl1api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl1api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl1api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl1api24(int a, int b) {
    return a + b;
}

int Lib12Core1Impl1Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib12Core1Impl1Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Core1Impl1Api2" << std::endl;
        Lib12Core1Impl1Impl lib12core1impl1impl;
        lib12core1impl1impl.doSomething();
        Lib12Core1Impl2Api1 lib12core1impl2api1;
        lib12core1impl2api1.doSomething();
        Lib12Core1Impl2Api2 lib12core1impl2api2;
        lib12core1impl2api2.doSomething();
        Lib12Core1Impl2Api3 lib12core1impl2api3;
        lib12core1impl2api3.doSomething();
        visited = 1;
    }
}

