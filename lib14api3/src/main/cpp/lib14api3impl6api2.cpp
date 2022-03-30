// GENERATED SOURCE FILE

#include "lib14api3_private.h"
#include "lib14api3_impl.h"
#include "lib14impl.h"
#include "lib15api1.h"
#include "lib15api2.h"
#include "lib15api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14api3impl6api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl6api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl6api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl6api24(int a, int b) {
    return a + b;
}

int Lib14Api3Impl6Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api3Impl6Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api3Impl6Api2" << std::endl;
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api3Impl6Impl lib14api3impl6impl;
        lib14api3impl6impl.doSomething();
        Lib14Api3Impl7Api1 lib14api3impl7api1;
        lib14api3impl7api1.doSomething();
        Lib14Api3Impl7Api2 lib14api3impl7api2;
        lib14api3impl7api2.doSomething();
        Lib14Api3Impl7Api3 lib14api3impl7api3;
        lib14api3impl7api3.doSomething();
        visited = 1;
    }
}

