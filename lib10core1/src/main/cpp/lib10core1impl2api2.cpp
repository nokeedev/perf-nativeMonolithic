// GENERATED SOURCE FILE

#include "lib10core1_private.h"
#include "lib10core1_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core1impl2api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl2api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl2api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core1impl2api24(int a, int b) {
    return a + b;
}

int Lib10Core1Impl2Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core1Impl2Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core1Impl2Api2" << std::endl;
        Lib10Core1Impl2Impl lib10core1impl2impl;
        lib10core1impl2impl.doSomething();
        Lib10Core1Impl3Api1 lib10core1impl3api1;
        lib10core1impl3api1.doSomething();
        Lib10Core1Impl3Api2 lib10core1impl3api2;
        lib10core1impl3api2.doSomething();
        Lib10Core1Impl3Api3 lib10core1impl3api3;
        lib10core1impl3api3.doSomething();
        visited = 1;
    }
}

