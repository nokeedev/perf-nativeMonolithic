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
int lib14api3impl10impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl10impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl10impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl10impl4(int a, int b) {
    return a + b;
}

int Lib14Api3Impl10Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api3Impl10Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api3Impl10Impl" << std::endl;
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api3Impl10Core1 lib14api3impl10core1;
        lib14api3impl10core1.doSomething();
        Lib14Api3Impl10Core2 lib14api3impl10core2;
        lib14api3impl10core2.doSomething();
        Lib14Api3Impl11Api1 lib14api3impl11api1;
        lib14api3impl11api1.doSomething();
        Lib14Api3Impl11Api2 lib14api3impl11api2;
        lib14api3impl11api2.doSomething();
        Lib14Api3Impl11Api3 lib14api3impl11api3;
        lib14api3impl11api3.doSomething();
        visited = 1;
    }
}

