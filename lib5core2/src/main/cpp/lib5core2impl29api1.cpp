// GENERATED SOURCE FILE

#include "lib5core2_private.h"
#include "lib5core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core2impl29api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl29api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl29api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl29api14(int a, int b) {
    return a + b;
}

int Lib5Core2Impl29Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core2Impl29Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core2Impl29Api1" << std::endl;
        Lib5Core2Impl30Api1 lib5core2impl30api1;
        lib5core2impl30api1.doSomething();
        Lib5Core2Impl29Impl lib5core2impl29impl;
        lib5core2impl29impl.doSomething();
        Lib5Core2Impl30Api2 lib5core2impl30api2;
        lib5core2impl30api2.doSomething();
        Lib5Core2Impl30Api3 lib5core2impl30api3;
        lib5core2impl30api3.doSomething();
        visited = 1;
    }
}

