// GENERATED SOURCE FILE

#include "lib5core1_private.h"
#include "lib5core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core1impl26api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl26api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl26api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl26api14(int a, int b) {
    return a + b;
}

int Lib5Core1Impl26Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core1Impl26Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core1Impl26Api1" << std::endl;
        Lib5Core1Impl27Api1 lib5core1impl27api1;
        lib5core1impl27api1.doSomething();
        Lib5Core1Impl26Impl lib5core1impl26impl;
        lib5core1impl26impl.doSomething();
        Lib5Core1Impl27Api2 lib5core1impl27api2;
        lib5core1impl27api2.doSomething();
        Lib5Core1Impl27Api3 lib5core1impl27api3;
        lib5core1impl27api3.doSomething();
        visited = 1;
    }
}

