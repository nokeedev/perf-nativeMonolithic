// GENERATED SOURCE FILE

#include "lib10core1_private.h"
#include "lib10core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core1impl1api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl1api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl1api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl1api24(int a, int b) {
    return a + b;
}

int Lib10Core1Impl1Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core1Impl1Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core1Impl1Api2" << std::endl;
        Lib10Core1Impl1Impl lib10core1impl1impl;
        lib10core1impl1impl.doSomething();
        Lib10Core1Impl2Api1 lib10core1impl2api1;
        lib10core1impl2api1.doSomething();
        Lib10Core1Impl2Api2 lib10core1impl2api2;
        lib10core1impl2api2.doSomething();
        Lib10Core1Impl2Api3 lib10core1impl2api3;
        lib10core1impl2api3.doSomething();
        visited = 1;
    }
}

