// GENERATED SOURCE FILE

#include "lib16core2_private.h"
#include "lib16core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16core2impl8api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl8api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl8api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16core2impl8api14(int a, int b) {
    return a + b;
}

int Lib16Core2Impl8Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib16Core2Impl8Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Core2Impl8Api1" << std::endl;
        Lib16Core2Impl9Api1 lib16core2impl9api1;
        lib16core2impl9api1.doSomething();
        Lib16Core2Impl8Impl lib16core2impl8impl;
        lib16core2impl8impl.doSomething();
        Lib16Core2Impl9Api2 lib16core2impl9api2;
        lib16core2impl9api2.doSomething();
        Lib16Core2Impl9Api3 lib16core2impl9api3;
        lib16core2impl9api3.doSomething();
        visited = 1;
    }
}

