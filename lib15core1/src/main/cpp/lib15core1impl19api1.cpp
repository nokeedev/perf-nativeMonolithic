// GENERATED SOURCE FILE

#include "lib15core1_private.h"
#include "lib15core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core1impl19api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl19api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl19api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl19api14(int a, int b) {
    return a + b;
}

int Lib15Core1Impl19Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core1Impl19Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core1Impl19Api1" << std::endl;
        Lib15Core1Impl20Api1 lib15core1impl20api1;
        lib15core1impl20api1.doSomething();
        Lib15Core1Impl19Impl lib15core1impl19impl;
        lib15core1impl19impl.doSomething();
        Lib15Core1Impl20Api2 lib15core1impl20api2;
        lib15core1impl20api2.doSomething();
        Lib15Core1Impl20Api3 lib15core1impl20api3;
        lib15core1impl20api3.doSomething();
        visited = 1;
    }
}

