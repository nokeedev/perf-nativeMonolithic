// GENERATED SOURCE FILE

#include "lib16core2_private.h"
#include "lib16core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core2impl6api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl6api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl6api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl6api24(int a, int b) {
    return a + b;
}

int Lib16Core2Impl6Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core2Impl6Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core2Impl6Api2" << std::endl;
        Lib16Core2Impl6Impl lib16core2impl6impl;
        lib16core2impl6impl.doSomething();
        Lib16Core2Impl7Api1 lib16core2impl7api1;
        lib16core2impl7api1.doSomething();
        Lib16Core2Impl7Api2 lib16core2impl7api2;
        lib16core2impl7api2.doSomething();
        Lib16Core2Impl7Api3 lib16core2impl7api3;
        lib16core2impl7api3.doSomething();
        visited = 1;
    }
}

