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
int lib7api3impl1api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api3impl1api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api3impl1api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api3impl1api34(int a, int b) {
    return a + b;
}

int Lib7Api3Impl1Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib7Api3Impl1Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Api3Impl1Api3" << std::endl;
        Lib7Impl lib7impl;
        lib7impl.doSomething();
        Lib8Api1 lib8api1;
        lib8api1.doSomething();
        Lib8Api2 lib8api2;
        lib8api2.doSomething();
        Lib8Api3 lib8api3;
        lib8api3.doSomething();
        Lib7Api3Impl1Impl lib7api3impl1impl;
        lib7api3impl1impl.doSomething();
        Lib7Api3Impl2Api1 lib7api3impl2api1;
        lib7api3impl2api1.doSomething();
        Lib7Api3Impl2Api2 lib7api3impl2api2;
        lib7api3impl2api2.doSomething();
        Lib7Api3Impl2Api3 lib7api3impl2api3;
        lib7api3impl2api3.doSomething();
        visited = 1;
    }
}

