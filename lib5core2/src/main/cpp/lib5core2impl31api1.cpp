// GENERATED SOURCE FILE

#include "lib5core2_private.h"
#include "lib5core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core2impl31api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl31api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl31api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl31api14(int a, int b) {
    return a + b;
}

int Lib5Core2Impl31Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core2Impl31Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core2Impl31Api1" << std::endl;
        Lib5Core2Impl32Api1 lib5core2impl32api1;
        lib5core2impl32api1.doSomething();
        Lib5Core2Impl31Impl lib5core2impl31impl;
        lib5core2impl31impl.doSomething();
        Lib5Core2Impl32Api2 lib5core2impl32api2;
        lib5core2impl32api2.doSomething();
        Lib5Core2Impl32Api3 lib5core2impl32api3;
        lib5core2impl32api3.doSomething();
        visited = 1;
    }
}

