// GENERATED SOURCE FILE

#include "lib5core1_private.h"
#include "lib5core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core1impl19api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl19api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl19api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl19api34(int a, int b) {
    return a + b;
}

int Lib5Core1Impl19Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core1Impl19Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core1Impl19Api3" << std::endl;
        Lib5Core1Impl19Impl lib5core1impl19impl;
        lib5core1impl19impl.doSomething();
        Lib5Core1Impl20Api1 lib5core1impl20api1;
        lib5core1impl20api1.doSomething();
        Lib5Core1Impl20Api2 lib5core1impl20api2;
        lib5core1impl20api2.doSomething();
        Lib5Core1Impl20Api3 lib5core1impl20api3;
        lib5core1impl20api3.doSomething();
        visited = 1;
    }
}

