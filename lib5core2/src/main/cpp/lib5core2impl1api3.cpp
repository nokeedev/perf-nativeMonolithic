// GENERATED SOURCE FILE

#include "lib5core2_private.h"
#include "lib5core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5core2impl1api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl1api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl1api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5core2impl1api34(int a, int b) {
    return a + b;
}

int Lib5Core2Impl1Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib5Core2Impl1Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Core2Impl1Api3" << std::endl;
        Lib5Core2Impl1Impl lib5core2impl1impl;
        lib5core2impl1impl.doSomething();
        Lib5Core2Impl2Api1 lib5core2impl2api1;
        lib5core2impl2api1.doSomething();
        Lib5Core2Impl2Api2 lib5core2impl2api2;
        lib5core2impl2api2.doSomething();
        Lib5Core2Impl2Api3 lib5core2impl2api3;
        lib5core2impl2api3.doSomething();
        visited = 1;
    }
}

