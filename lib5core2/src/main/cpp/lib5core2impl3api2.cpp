// GENERATED SOURCE FILE

#include "lib5core2_private.h"
#include "lib5core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core2impl3api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl3api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl3api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl3api24(int a, int b) {
    return a + b;
}

int Lib5Core2Impl3Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core2Impl3Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core2Impl3Api2" << std::endl;
        Lib5Core2Impl3Impl lib5core2impl3impl;
        lib5core2impl3impl.doSomething();
        Lib5Core2Impl4Api1 lib5core2impl4api1;
        lib5core2impl4api1.doSomething();
        Lib5Core2Impl4Api2 lib5core2impl4api2;
        lib5core2impl4api2.doSomething();
        Lib5Core2Impl4Api3 lib5core2impl4api3;
        lib5core2impl4api3.doSomething();
        visited = 1;
    }
}

