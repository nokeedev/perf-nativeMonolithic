// GENERATED SOURCE FILE

#include "lib5core1_private.h"
#include "lib5core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core1impl29api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl29api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl29api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core1impl29api34(int a, int b) {
    return a + b;
}

int Lib5Core1Impl29Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core1Impl29Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core1Impl29Api3" << std::endl;
        Lib5Core1Impl29Impl lib5core1impl29impl;
        lib5core1impl29impl.doSomething();
        Lib5Core1Impl30Api1 lib5core1impl30api1;
        lib5core1impl30api1.doSomething();
        Lib5Core1Impl30Api2 lib5core1impl30api2;
        lib5core1impl30api2.doSomething();
        Lib5Core1Impl30Api3 lib5core1impl30api3;
        lib5core1impl30api3.doSomething();
        visited = 1;
    }
}

