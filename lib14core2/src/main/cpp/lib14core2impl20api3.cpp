// GENERATED SOURCE FILE

#include "lib14core2_private.h"
#include "lib14core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core2impl20api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl20api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl20api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl20api34(int a, int b) {
    return a + b;
}

int Lib14Core2Impl20Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core2Impl20Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core2Impl20Api3" << std::endl;
        Lib14Core2Impl20Impl lib14core2impl20impl;
        lib14core2impl20impl.doSomething();
        Lib14Core2Impl21Api1 lib14core2impl21api1;
        lib14core2impl21api1.doSomething();
        Lib14Core2Impl21Api2 lib14core2impl21api2;
        lib14core2impl21api2.doSomething();
        Lib14Core2Impl21Api3 lib14core2impl21api3;
        lib14core2impl21api3.doSomething();
        visited = 1;
    }
}

