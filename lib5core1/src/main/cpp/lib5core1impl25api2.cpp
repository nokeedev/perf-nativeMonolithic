// GENERATED SOURCE FILE

#include "lib5core1_private.h"
#include "lib5core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core1impl25api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl25api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl25api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl25api24(int a, int b) {
    return a + b;
}

int Lib5Core1Impl25Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core1Impl25Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core1Impl25Api2" << std::endl;
        Lib5Core1Impl25Impl lib5core1impl25impl;
        lib5core1impl25impl.doSomething();
        Lib5Core1Impl26Api1 lib5core1impl26api1;
        lib5core1impl26api1.doSomething();
        Lib5Core1Impl26Api2 lib5core1impl26api2;
        lib5core1impl26api2.doSomething();
        Lib5Core1Impl26Api3 lib5core1impl26api3;
        lib5core1impl26api3.doSomething();
        visited = 1;
    }
}

