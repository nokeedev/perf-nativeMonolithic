// GENERATED SOURCE FILE

#include "lib16core1_private.h"
#include "lib16core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core1impl1api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl1api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl1api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl1api34(int a, int b) {
    return a + b;
}

int Lib16Core1Impl1Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core1Impl1Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core1Impl1Api3" << std::endl;
        Lib16Core1Impl1Impl lib16core1impl1impl;
        lib16core1impl1impl.doSomething();
        Lib16Core1Impl2Api1 lib16core1impl2api1;
        lib16core1impl2api1.doSomething();
        Lib16Core1Impl2Api2 lib16core1impl2api2;
        lib16core1impl2api2.doSomething();
        Lib16Core1Impl2Api3 lib16core1impl2api3;
        lib16core1impl2api3.doSomething();
        visited = 1;
    }
}

