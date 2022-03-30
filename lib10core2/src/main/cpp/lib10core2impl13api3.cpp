// GENERATED SOURCE FILE

#include "lib10core2_private.h"
#include "lib10core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core2impl13api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl13api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl13api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl13api34(int a, int b) {
    return a + b;
}

int Lib10Core2Impl13Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core2Impl13Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core2Impl13Api3" << std::endl;
        Lib10Core2Impl13Impl lib10core2impl13impl;
        lib10core2impl13impl.doSomething();
        Lib10Core2Impl14Api1 lib10core2impl14api1;
        lib10core2impl14api1.doSomething();
        Lib10Core2Impl14Api2 lib10core2impl14api2;
        lib10core2impl14api2.doSomething();
        Lib10Core2Impl14Api3 lib10core2impl14api3;
        lib10core2impl14api3.doSomething();
        visited = 1;
    }
}

