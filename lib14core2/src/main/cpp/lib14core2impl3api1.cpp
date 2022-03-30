// GENERATED SOURCE FILE

#include "lib14core2_private.h"
#include "lib14core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14core2impl3api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl3api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl3api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14core2impl3api14(int a, int b) {
    return a + b;
}

int Lib14Core2Impl3Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib14Core2Impl3Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Core2Impl3Api1" << std::endl;
        Lib14Core2Impl4Api1 lib14core2impl4api1;
        lib14core2impl4api1.doSomething();
        Lib14Core2Impl3Impl lib14core2impl3impl;
        lib14core2impl3impl.doSomething();
        Lib14Core2Impl4Api2 lib14core2impl4api2;
        lib14core2impl4api2.doSomething();
        Lib14Core2Impl4Api3 lib14core2impl4api3;
        lib14core2impl4api3.doSomething();
        visited = 1;
    }
}

