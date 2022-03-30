// GENERATED SOURCE FILE

#include "lib13core2_private.h"
#include "lib13core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core2impl7api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl7api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl7api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl7api34(int a, int b) {
    return a + b;
}

int Lib13Core2Impl7Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core2Impl7Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core2Impl7Api3" << std::endl;
        Lib13Core2Impl7Impl lib13core2impl7impl;
        lib13core2impl7impl.doSomething();
        Lib13Core2Impl8Api1 lib13core2impl8api1;
        lib13core2impl8api1.doSomething();
        Lib13Core2Impl8Api2 lib13core2impl8api2;
        lib13core2impl8api2.doSomething();
        Lib13Core2Impl8Api3 lib13core2impl8api3;
        lib13core2impl8api3.doSomething();
        visited = 1;
    }
}

