// GENERATED SOURCE FILE

#include "lib13core2_private.h"
#include "lib13core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core2impl20api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl20api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl20api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl20api24(int a, int b) {
    return a + b;
}

int Lib13Core2Impl20Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core2Impl20Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core2Impl20Api2" << std::endl;
        Lib13Core2Impl20Impl lib13core2impl20impl;
        lib13core2impl20impl.doSomething();
        Lib13Core2Impl21Api1 lib13core2impl21api1;
        lib13core2impl21api1.doSomething();
        Lib13Core2Impl21Api2 lib13core2impl21api2;
        lib13core2impl21api2.doSomething();
        Lib13Core2Impl21Api3 lib13core2impl21api3;
        lib13core2impl21api3.doSomething();
        visited = 1;
    }
}

