// GENERATED SOURCE FILE

#include "lib14core1_private.h"
#include "lib14core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core1impl25api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl25api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl25api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core1impl25api14(int a, int b) {
    return a + b;
}

int Lib14Core1Impl25Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core1Impl25Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core1Impl25Api1" << std::endl;
        Lib14Core1Impl26Api1 lib14core1impl26api1;
        lib14core1impl26api1.doSomething();
        Lib14Core1Impl25Impl lib14core1impl25impl;
        lib14core1impl25impl.doSomething();
        Lib14Core1Impl26Api2 lib14core1impl26api2;
        lib14core1impl26api2.doSomething();
        Lib14Core1Impl26Api3 lib14core1impl26api3;
        lib14core1impl26api3.doSomething();
        visited = 1;
    }
}

