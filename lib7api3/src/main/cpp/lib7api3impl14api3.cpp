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
int lib7api3impl14api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api3impl14api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api3impl14api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api3impl14api34(int a, int b) {
    return a + b;
}

int Lib7Api3Impl14Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib7Api3Impl14Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Api3Impl14Api3" << std::endl;
        Lib7Impl lib7impl;
        lib7impl.doSomething();
        Lib8Api1 lib8api1;
        lib8api1.doSomething();
        Lib8Api2 lib8api2;
        lib8api2.doSomething();
        Lib8Api3 lib8api3;
        lib8api3.doSomething();
        Lib7Api3Impl14Impl lib7api3impl14impl;
        lib7api3impl14impl.doSomething();
        Lib7Api3Impl15Api1 lib7api3impl15api1;
        lib7api3impl15api1.doSomething();
        Lib7Api3Impl15Api2 lib7api3impl15api2;
        lib7api3impl15api2.doSomething();
        Lib7Api3Impl15Api3 lib7api3impl15api3;
        lib7api3impl15api3.doSomething();
        visited = 1;
    }
}

