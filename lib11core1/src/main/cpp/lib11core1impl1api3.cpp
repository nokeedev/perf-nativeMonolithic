// GENERATED SOURCE FILE

#include "lib11core1_private.h"
#include "lib11core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core1impl1api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl1api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl1api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core1impl1api34(int a, int b) {
    return a + b;
}

int Lib11Core1Impl1Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core1Impl1Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core1Impl1Api3" << std::endl;
        Lib11Core1Impl1Impl lib11core1impl1impl;
        lib11core1impl1impl.doSomething();
        Lib11Core1Impl2Api1 lib11core1impl2api1;
        lib11core1impl2api1.doSomething();
        Lib11Core1Impl2Api2 lib11core1impl2api2;
        lib11core1impl2api2.doSomething();
        Lib11Core1Impl2Api3 lib11core1impl2api3;
        lib11core1impl2api3.doSomething();
        visited = 1;
    }
}

