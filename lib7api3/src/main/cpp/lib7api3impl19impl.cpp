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
int lib7api3impl19impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api3impl19impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api3impl19impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api3impl19impl4(int a, int b) {
    return a + b;
}

int Lib7Api3Impl19Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib7Api3Impl19Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Api3Impl19Impl" << std::endl;
        Lib7Impl lib7impl;
        lib7impl.doSomething();
        Lib8Api1 lib8api1;
        lib8api1.doSomething();
        Lib8Api2 lib8api2;
        lib8api2.doSomething();
        Lib8Api3 lib8api3;
        lib8api3.doSomething();
        Lib7Api3Impl19Core1 lib7api3impl19core1;
        lib7api3impl19core1.doSomething();
        Lib7Api3Impl19Core2 lib7api3impl19core2;
        lib7api3impl19core2.doSomething();
        Lib7Api3Impl20Api1 lib7api3impl20api1;
        lib7api3impl20api1.doSomething();
        Lib7Api3Impl20Api2 lib7api3impl20api2;
        lib7api3impl20api2.doSomething();
        Lib7Api3Impl20Api3 lib7api3impl20api3;
        lib7api3impl20api3.doSomething();
        visited = 1;
    }
}

