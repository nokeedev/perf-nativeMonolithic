// GENERATED SOURCE FILE

#include "lib14core2_private.h"
#include "lib14core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core2impl7api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl7api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl7api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl7api34(int a, int b) {
    return a + b;
}

int Lib14Core2Impl7Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core2Impl7Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core2Impl7Api3" << std::endl;
        Lib14Core2Impl7Impl lib14core2impl7impl;
        lib14core2impl7impl.doSomething();
        Lib14Core2Impl8Api1 lib14core2impl8api1;
        lib14core2impl8api1.doSomething();
        Lib14Core2Impl8Api2 lib14core2impl8api2;
        lib14core2impl8api2.doSomething();
        Lib14Core2Impl8Api3 lib14core2impl8api3;
        lib14core2impl8api3.doSomething();
        visited = 1;
    }
}

