// GENERATED SOURCE FILE

#include "lib12core1_private.h"
#include "lib12core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12core1impl19api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl19api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl19api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12core1impl19api14(int a, int b) {
    return a + b;
}

int Lib12Core1Impl19Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib12Core1Impl19Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Core1Impl19Api1" << std::endl;
        Lib12Core1Impl20Api1 lib12core1impl20api1;
        lib12core1impl20api1.doSomething();
        Lib12Core1Impl19Impl lib12core1impl19impl;
        lib12core1impl19impl.doSomething();
        Lib12Core1Impl20Api2 lib12core1impl20api2;
        lib12core1impl20api2.doSomething();
        Lib12Core1Impl20Api3 lib12core1impl20api3;
        lib12core1impl20api3.doSomething();
        visited = 1;
    }
}

