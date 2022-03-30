// GENERATED SOURCE FILE

#include "lib13core2_private.h"
#include "lib13core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core2impl6api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl6api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl6api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl6api14(int a, int b) {
    return a + b;
}

int Lib13Core2Impl6Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core2Impl6Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core2Impl6Api1" << std::endl;
        Lib13Core2Impl7Api1 lib13core2impl7api1;
        lib13core2impl7api1.doSomething();
        Lib13Core2Impl6Impl lib13core2impl6impl;
        lib13core2impl6impl.doSomething();
        Lib13Core2Impl7Api2 lib13core2impl7api2;
        lib13core2impl7api2.doSomething();
        Lib13Core2Impl7Api3 lib13core2impl7api3;
        lib13core2impl7api3.doSomething();
        visited = 1;
    }
}

