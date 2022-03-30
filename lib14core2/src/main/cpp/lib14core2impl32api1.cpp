// GENERATED SOURCE FILE

#include "lib14core2_private.h"
#include "lib14core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core2impl32api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl32api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl32api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl32api14(int a, int b) {
    return a + b;
}

int Lib14Core2Impl32Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core2Impl32Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core2Impl32Api1" << std::endl;
        Lib14Core2Impl33Api1 lib14core2impl33api1;
        lib14core2impl33api1.doSomething();
        Lib14Core2Impl32Impl lib14core2impl32impl;
        lib14core2impl32impl.doSomething();
        Lib14Core2Impl33Api2 lib14core2impl33api2;
        lib14core2impl33api2.doSomething();
        Lib14Core2Impl33Api3 lib14core2impl33api3;
        lib14core2impl33api3.doSomething();
        visited = 1;
    }
}

