// GENERATED SOURCE FILE

#include "lib7core1_private.h"
#include "lib7core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core1impl19api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl19api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl19api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core1impl19api14(int a, int b) {
    return a + b;
}

int Lib7Core1Impl19Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core1Impl19Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core1Impl19Api1" << std::endl;
        Lib7Core1Impl20Api1 lib7core1impl20api1;
        lib7core1impl20api1.doSomething();
        Lib7Core1Impl19Impl lib7core1impl19impl;
        lib7core1impl19impl.doSomething();
        Lib7Core1Impl20Api2 lib7core1impl20api2;
        lib7core1impl20api2.doSomething();
        Lib7Core1Impl20Api3 lib7core1impl20api3;
        lib7core1impl20api3.doSomething();
        visited = 1;
    }
}

