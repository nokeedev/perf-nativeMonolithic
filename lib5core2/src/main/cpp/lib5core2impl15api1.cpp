// GENERATED SOURCE FILE

#include "lib5core2_private.h"
#include "lib5core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core2impl15api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl15api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl15api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl15api14(int a, int b) {
    return a + b;
}

int Lib5Core2Impl15Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core2Impl15Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core2Impl15Api1" << std::endl;
        Lib5Core2Impl16Api1 lib5core2impl16api1;
        lib5core2impl16api1.doSomething();
        Lib5Core2Impl15Impl lib5core2impl15impl;
        lib5core2impl15impl.doSomething();
        Lib5Core2Impl16Api2 lib5core2impl16api2;
        lib5core2impl16api2.doSomething();
        Lib5Core2Impl16Api3 lib5core2impl16api3;
        lib5core2impl16api3.doSomething();
        visited = 1;
    }
}

