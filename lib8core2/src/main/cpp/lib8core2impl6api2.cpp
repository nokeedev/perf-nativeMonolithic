// GENERATED SOURCE FILE

#include "lib8core2_private.h"
#include "lib8core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core2impl6api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl6api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl6api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl6api24(int a, int b) {
    return a + b;
}

int Lib8Core2Impl6Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core2Impl6Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core2Impl6Api2" << std::endl;
        Lib8Core2Impl6Impl lib8core2impl6impl;
        lib8core2impl6impl.doSomething();
        Lib8Core2Impl7Api1 lib8core2impl7api1;
        lib8core2impl7api1.doSomething();
        Lib8Core2Impl7Api2 lib8core2impl7api2;
        lib8core2impl7api2.doSomething();
        Lib8Core2Impl7Api3 lib8core2impl7api3;
        lib8core2impl7api3.doSomething();
        visited = 1;
    }
}

