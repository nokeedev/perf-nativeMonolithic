// GENERATED SOURCE FILE

#include "lib16core1_private.h"
#include "lib16core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core1impl2api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl2api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl2api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core1impl2api34(int a, int b) {
    return a + b;
}

int Lib16Core1Impl2Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core1Impl2Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core1Impl2Api3" << std::endl;
        Lib16Core1Impl2Impl lib16core1impl2impl;
        lib16core1impl2impl.doSomething();
        Lib16Core1Impl3Api1 lib16core1impl3api1;
        lib16core1impl3api1.doSomething();
        Lib16Core1Impl3Api2 lib16core1impl3api2;
        lib16core1impl3api2.doSomething();
        Lib16Core1Impl3Api3 lib16core1impl3api3;
        lib16core1impl3api3.doSomething();
        visited = 1;
    }
}

