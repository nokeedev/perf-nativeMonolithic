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
int lib7api3impl30api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api3impl30api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api3impl30api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api3impl30api34(int a, int b) {
    return a + b;
}

int Lib7Api3Impl30Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib7Api3Impl30Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Api3Impl30Api3" << std::endl;
        Lib7Impl lib7impl;
        lib7impl.doSomething();
        Lib8Api1 lib8api1;
        lib8api1.doSomething();
        Lib8Api2 lib8api2;
        lib8api2.doSomething();
        Lib8Api3 lib8api3;
        lib8api3.doSomething();
        Lib7Api3Impl30Impl lib7api3impl30impl;
        lib7api3impl30impl.doSomething();
        Lib7Api3Impl31Api1 lib7api3impl31api1;
        lib7api3impl31api1.doSomething();
        Lib7Api3Impl31Api2 lib7api3impl31api2;
        lib7api3impl31api2.doSomething();
        Lib7Api3Impl31Api3 lib7api3impl31api3;
        lib7api3impl31api3.doSomething();
        visited = 1;
    }
}

