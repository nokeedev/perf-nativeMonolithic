// GENERATED SOURCE FILE

#include "lib5core1_private.h"
#include "lib5core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core1impl27api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl27api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl27api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl27api14(int a, int b) {
    return a + b;
}

int Lib5Core1Impl27Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core1Impl27Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core1Impl27Api1" << std::endl;
        Lib5Core1Impl28Api1 lib5core1impl28api1;
        lib5core1impl28api1.doSomething();
        Lib5Core1Impl27Impl lib5core1impl27impl;
        lib5core1impl27impl.doSomething();
        Lib5Core1Impl28Api2 lib5core1impl28api2;
        lib5core1impl28api2.doSomething();
        Lib5Core1Impl28Api3 lib5core1impl28api3;
        lib5core1impl28api3.doSomething();
        visited = 1;
    }
}
