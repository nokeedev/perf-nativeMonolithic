// GENERATED SOURCE FILE

#include "lib5core1_private.h"
#include "lib5core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core1impl7api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl7api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl7api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl7api34(int a, int b) {
    return a + b;
}

int Lib5Core1Impl7Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core1Impl7Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core1Impl7Api3" << std::endl;
        Lib5Core1Impl7Impl lib5core1impl7impl;
        lib5core1impl7impl.doSomething();
        Lib5Core1Impl8Api1 lib5core1impl8api1;
        lib5core1impl8api1.doSomething();
        Lib5Core1Impl8Api2 lib5core1impl8api2;
        lib5core1impl8api2.doSomething();
        Lib5Core1Impl8Api3 lib5core1impl8api3;
        lib5core1impl8api3.doSomething();
        visited = 1;
    }
}

