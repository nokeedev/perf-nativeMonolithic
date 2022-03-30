// GENERATED SOURCE FILE

#include "lib10core2_private.h"
#include "lib10core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core2impl20api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl20api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl20api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl20api34(int a, int b) {
    return a + b;
}

int Lib10Core2Impl20Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core2Impl20Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core2Impl20Api3" << std::endl;
        Lib10Core2Impl20Impl lib10core2impl20impl;
        lib10core2impl20impl.doSomething();
        Lib10Core2Impl21Api1 lib10core2impl21api1;
        lib10core2impl21api1.doSomething();
        Lib10Core2Impl21Api2 lib10core2impl21api2;
        lib10core2impl21api2.doSomething();
        Lib10Core2Impl21Api3 lib10core2impl21api3;
        lib10core2impl21api3.doSomething();
        visited = 1;
    }
}

