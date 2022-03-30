// GENERATED SOURCE FILE

#include "lib11core2_private.h"
#include "lib11core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11core2impl6api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl6api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl6api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11core2impl6api34(int a, int b) {
    return a + b;
}

int Lib11Core2Impl6Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib11Core2Impl6Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Core2Impl6Api3" << std::endl;
        Lib11Core2Impl6Impl lib11core2impl6impl;
        lib11core2impl6impl.doSomething();
        Lib11Core2Impl7Api1 lib11core2impl7api1;
        lib11core2impl7api1.doSomething();
        Lib11Core2Impl7Api2 lib11core2impl7api2;
        lib11core2impl7api2.doSomething();
        Lib11Core2Impl7Api3 lib11core2impl7api3;
        lib11core2impl7api3.doSomething();
        visited = 1;
    }
}

