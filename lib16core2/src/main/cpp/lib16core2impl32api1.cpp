// GENERATED SOURCE FILE

#include "lib16core2_private.h"
#include "lib16core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core2impl32api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl32api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl32api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl32api14(int a, int b) {
    return a + b;
}

int Lib16Core2Impl32Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core2Impl32Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core2Impl32Api1" << std::endl;
        Lib16Core2Impl33Api1 lib16core2impl33api1;
        lib16core2impl33api1.doSomething();
        Lib16Core2Impl32Impl lib16core2impl32impl;
        lib16core2impl32impl.doSomething();
        Lib16Core2Impl33Api2 lib16core2impl33api2;
        lib16core2impl33api2.doSomething();
        Lib16Core2Impl33Api3 lib16core2impl33api3;
        lib16core2impl33api3.doSomething();
        visited = 1;
    }
}

