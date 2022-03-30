// GENERATED SOURCE FILE

#include "lib8core2_private.h"
#include "lib8core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8core2impl8api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl8api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl8api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8core2impl8api14(int a, int b) {
    return a + b;
}

int Lib8Core2Impl8Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib8Core2Impl8Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Core2Impl8Api1" << std::endl;
        Lib8Core2Impl9Api1 lib8core2impl9api1;
        lib8core2impl9api1.doSomething();
        Lib8Core2Impl8Impl lib8core2impl8impl;
        lib8core2impl8impl.doSomething();
        Lib8Core2Impl9Api2 lib8core2impl9api2;
        lib8core2impl9api2.doSomething();
        Lib8Core2Impl9Api3 lib8core2impl9api3;
        lib8core2impl9api3.doSomething();
        visited = 1;
    }
}

