// GENERATED SOURCE FILE

#include "lib10core2_private.h"
#include "lib10core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core2impl1api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl1api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl1api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl1api14(int a, int b) {
    return a + b;
}

int Lib10Core2Impl1Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core2Impl1Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core2Impl1Api1" << std::endl;
        Lib10Core2Impl2Api1 lib10core2impl2api1;
        lib10core2impl2api1.doSomething();
        Lib10Core2Impl1Impl lib10core2impl1impl;
        lib10core2impl1impl.doSomething();
        Lib10Core2Impl2Api2 lib10core2impl2api2;
        lib10core2impl2api2.doSomething();
        Lib10Core2Impl2Api3 lib10core2impl2api3;
        lib10core2impl2api3.doSomething();
        visited = 1;
    }
}

