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
int lib7api3impl10impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api3impl10impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api3impl10impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api3impl10impl4(int a, int b) {
    return a + b;
}

int Lib7Api3Impl10Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib7Api3Impl10Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Api3Impl10Impl" << std::endl;
        Lib7Impl lib7impl;
        lib7impl.doSomething();
        Lib8Api1 lib8api1;
        lib8api1.doSomething();
        Lib8Api2 lib8api2;
        lib8api2.doSomething();
        Lib8Api3 lib8api3;
        lib8api3.doSomething();
        Lib7Api3Impl10Core1 lib7api3impl10core1;
        lib7api3impl10core1.doSomething();
        Lib7Api3Impl10Core2 lib7api3impl10core2;
        lib7api3impl10core2.doSomething();
        Lib7Api3Impl11Api1 lib7api3impl11api1;
        lib7api3impl11api1.doSomething();
        Lib7Api3Impl11Api2 lib7api3impl11api2;
        lib7api3impl11api2.doSomething();
        Lib7Api3Impl11Api3 lib7api3impl11api3;
        lib7api3impl11api3.doSomething();
        visited = 1;
    }
}

