// GENERATED SOURCE FILE

#include "lib13core1_private.h"
#include "lib13core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core1impl25api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl25api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl25api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core1impl25api14(int a, int b) {
    return a + b;
}

int Lib13Core1Impl25Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core1Impl25Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core1Impl25Api1" << std::endl;
        Lib13Core1Impl26Api1 lib13core1impl26api1;
        lib13core1impl26api1.doSomething();
        Lib13Core1Impl25Impl lib13core1impl25impl;
        lib13core1impl25impl.doSomething();
        Lib13Core1Impl26Api2 lib13core1impl26api2;
        lib13core1impl26api2.doSomething();
        Lib13Core1Impl26Api3 lib13core1impl26api3;
        lib13core1impl26api3.doSomething();
        visited = 1;
    }
}

