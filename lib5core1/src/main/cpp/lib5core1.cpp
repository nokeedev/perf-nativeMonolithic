// GENERATED SOURCE FILE

#include "lib5core1_impl.h"
#include "lib5core1_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core14(int a, int b) {
    return a + b;
}

int Lib5Core1::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core1" << std::endl;
        Lib5Core1Impl1Api1 lib5core1impl1api1;
        lib5core1impl1api1.doSomething();
        Lib5Core1Impl1Api2 lib5core1impl1api2;
        lib5core1impl1api2.doSomething();
        Lib5Core1Impl1Api3 lib5core1impl1api3;
        lib5core1impl1api3.doSomething();
        visited = 1;
    }
}

