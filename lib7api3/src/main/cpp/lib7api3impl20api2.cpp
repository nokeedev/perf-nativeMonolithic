// GENERATED SOURCE FILE

#include "lib7api3_private.h"
#include "lib7api3_impl.h"
#include "lib7impl.h"
#include "lib8api1.h"
#include "lib8api2.h"
#include "lib8api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7api3impl20api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api3impl20api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api3impl20api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api3impl20api24(int a, int b) {
    return a + b;
}

int Lib7Api3Impl20Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib7Api3Impl20Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Api3Impl20Api2" << std::endl;
        Lib7Impl lib7impl;
        lib7impl.doSomething();
        Lib8Api1 lib8api1;
        lib8api1.doSomething();
        Lib8Api2 lib8api2;
        lib8api2.doSomething();
        Lib8Api3 lib8api3;
        lib8api3.doSomething();
        Lib7Api3Impl20Impl lib7api3impl20impl;
        lib7api3impl20impl.doSomething();
        Lib7Api3Impl21Api1 lib7api3impl21api1;
        lib7api3impl21api1.doSomething();
        Lib7Api3Impl21Api2 lib7api3impl21api2;
        lib7api3impl21api2.doSomething();
        Lib7Api3Impl21Api3 lib7api3impl21api3;
        lib7api3impl21api3.doSomething();
        visited = 1;
    }
}

