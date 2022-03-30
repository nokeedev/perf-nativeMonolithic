// GENERATED SOURCE FILE

#include "lib10core2_private.h"
#include "lib10core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core2impl2api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl2api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl2api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl2api14(int a, int b) {
    return a + b;
}

int Lib10Core2Impl2Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core2Impl2Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core2Impl2Api1" << std::endl;
        Lib10Core2Impl3Api1 lib10core2impl3api1;
        lib10core2impl3api1.doSomething();
        Lib10Core2Impl2Impl lib10core2impl2impl;
        lib10core2impl2impl.doSomething();
        Lib10Core2Impl3Api2 lib10core2impl3api2;
        lib10core2impl3api2.doSomething();
        Lib10Core2Impl3Api3 lib10core2impl3api3;
        lib10core2impl3api3.doSomething();
        visited = 1;
    }
}

