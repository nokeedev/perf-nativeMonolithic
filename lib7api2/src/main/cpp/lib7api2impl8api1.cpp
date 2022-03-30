// GENERATED SOURCE FILE

#include "lib7api2_private.h"
#include "lib7api2_impl.h"
#include "lib7impl.h"
#include "lib8api1.h"
#include "lib8api2.h"
#include "lib8api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7api2impl8api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api2impl8api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api2impl8api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api2impl8api14(int a, int b) {
    return a + b;
}

int Lib7Api2Impl8Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib7Api2Impl8Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Api2Impl8Api1" << std::endl;
        Lib7Impl lib7impl;
        lib7impl.doSomething();
        Lib8Api1 lib8api1;
        lib8api1.doSomething();
        Lib8Api2 lib8api2;
        lib8api2.doSomething();
        Lib8Api3 lib8api3;
        lib8api3.doSomething();
        Lib7Api2Impl9Api1 lib7api2impl9api1;
        lib7api2impl9api1.doSomething();
        Lib7Api2Impl8Impl lib7api2impl8impl;
        lib7api2impl8impl.doSomething();
        Lib7Api2Impl9Api2 lib7api2impl9api2;
        lib7api2impl9api2.doSomething();
        Lib7Api2Impl9Api3 lib7api2impl9api3;
        lib7api2impl9api3.doSomething();
        visited = 1;
    }
}

