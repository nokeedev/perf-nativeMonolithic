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
int lib7api3impl13impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api3impl13impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api3impl13impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api3impl13impl4(int a, int b) {
    return a + b;
}

int Lib7Api3Impl13Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib7Api3Impl13Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Api3Impl13Impl" << std::endl;
        Lib7Impl lib7impl;
        lib7impl.doSomething();
        Lib8Api1 lib8api1;
        lib8api1.doSomething();
        Lib8Api2 lib8api2;
        lib8api2.doSomething();
        Lib8Api3 lib8api3;
        lib8api3.doSomething();
        Lib7Api3Impl13Core1 lib7api3impl13core1;
        lib7api3impl13core1.doSomething();
        Lib7Api3Impl13Core2 lib7api3impl13core2;
        lib7api3impl13core2.doSomething();
        Lib7Api3Impl14Api1 lib7api3impl14api1;
        lib7api3impl14api1.doSomething();
        Lib7Api3Impl14Api2 lib7api3impl14api2;
        lib7api3impl14api2.doSomething();
        Lib7Api3Impl14Api3 lib7api3impl14api3;
        lib7api3impl14api3.doSomething();
        visited = 1;
    }
}

