// GENERATED SOURCE FILE

#include "lib16core2_private.h"
#include "lib16core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core2impl1api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl1api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl1api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl1api14(int a, int b) {
    return a + b;
}

int Lib16Core2Impl1Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core2Impl1Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core2Impl1Api1" << std::endl;
        Lib16Core2Impl2Api1 lib16core2impl2api1;
        lib16core2impl2api1.doSomething();
        Lib16Core2Impl1Impl lib16core2impl1impl;
        lib16core2impl1impl.doSomething();
        Lib16Core2Impl2Api2 lib16core2impl2api2;
        lib16core2impl2api2.doSomething();
        Lib16Core2Impl2Api3 lib16core2impl2api3;
        lib16core2impl2api3.doSomething();
        visited = 1;
    }
}

