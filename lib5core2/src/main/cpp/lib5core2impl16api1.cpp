// GENERATED SOURCE FILE

#include "lib5core2_private.h"
#include "lib5core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core2impl16api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl16api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl16api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl16api14(int a, int b) {
    return a + b;
}

int Lib5Core2Impl16Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core2Impl16Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core2Impl16Api1" << std::endl;
        Lib5Core2Impl17Api1 lib5core2impl17api1;
        lib5core2impl17api1.doSomething();
        Lib5Core2Impl16Impl lib5core2impl16impl;
        lib5core2impl16impl.doSomething();
        Lib5Core2Impl17Api2 lib5core2impl17api2;
        lib5core2impl17api2.doSomething();
        Lib5Core2Impl17Api3 lib5core2impl17api3;
        lib5core2impl17api3.doSomething();
        visited = 1;
    }
}

