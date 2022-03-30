// GENERATED SOURCE FILE

#include "lib14core1_private.h"
#include "lib14core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core1impl28api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl28api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl28api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl28api14(int a, int b) {
    return a + b;
}

int Lib14Core1Impl28Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core1Impl28Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core1Impl28Api1" << std::endl;
        Lib14Core1Impl29Api1 lib14core1impl29api1;
        lib14core1impl29api1.doSomething();
        Lib14Core1Impl28Impl lib14core1impl28impl;
        lib14core1impl28impl.doSomething();
        Lib14Core1Impl29Api2 lib14core1impl29api2;
        lib14core1impl29api2.doSomething();
        Lib14Core1Impl29Api3 lib14core1impl29api3;
        lib14core1impl29api3.doSomething();
        visited = 1;
    }
}

