// GENERATED SOURCE FILE

#include "lib15core1_private.h"
#include "lib15core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core1impl28api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl28api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl28api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core1impl28api14(int a, int b) {
    return a + b;
}

int Lib15Core1Impl28Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core1Impl28Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core1Impl28Api1" << std::endl;
        Lib15Core1Impl29Api1 lib15core1impl29api1;
        lib15core1impl29api1.doSomething();
        Lib15Core1Impl28Impl lib15core1impl28impl;
        lib15core1impl28impl.doSomething();
        Lib15Core1Impl29Api2 lib15core1impl29api2;
        lib15core1impl29api2.doSomething();
        Lib15Core1Impl29Api3 lib15core1impl29api3;
        lib15core1impl29api3.doSomething();
        visited = 1;
    }
}

