// GENERATED SOURCE FILE

#include "lib16core2_private.h"
#include "lib16core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core2impl7api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl7api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl7api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl7api34(int a, int b) {
    return a + b;
}

int Lib16Core2Impl7Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core2Impl7Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core2Impl7Api3" << std::endl;
        Lib16Core2Impl7Impl lib16core2impl7impl;
        lib16core2impl7impl.doSomething();
        Lib16Core2Impl8Api1 lib16core2impl8api1;
        lib16core2impl8api1.doSomething();
        Lib16Core2Impl8Api2 lib16core2impl8api2;
        lib16core2impl8api2.doSomething();
        Lib16Core2Impl8Api3 lib16core2impl8api3;
        lib16core2impl8api3.doSomething();
        visited = 1;
    }
}

