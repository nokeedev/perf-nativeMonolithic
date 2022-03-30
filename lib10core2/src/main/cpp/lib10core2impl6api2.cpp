// GENERATED SOURCE FILE

#include "lib10core2_private.h"
#include "lib10core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10core2impl6api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl6api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl6api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10core2impl6api24(int a, int b) {
    return a + b;
}

int Lib10Core2Impl6Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib10Core2Impl6Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Core2Impl6Api2" << std::endl;
        Lib10Core2Impl6Impl lib10core2impl6impl;
        lib10core2impl6impl.doSomething();
        Lib10Core2Impl7Api1 lib10core2impl7api1;
        lib10core2impl7api1.doSomething();
        Lib10Core2Impl7Api2 lib10core2impl7api2;
        lib10core2impl7api2.doSomething();
        Lib10Core2Impl7Api3 lib10core2impl7api3;
        lib10core2impl7api3.doSomething();
        visited = 1;
    }
}

