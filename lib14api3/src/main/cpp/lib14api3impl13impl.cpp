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
int lib14api3impl13impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl13impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl13impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl13impl4(int a, int b) {
    return a + b;
}

int Lib14Api3Impl13Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api3Impl13Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api3Impl13Impl" << std::endl;
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api3Impl13Core1 lib14api3impl13core1;
        lib14api3impl13core1.doSomething();
        Lib14Api3Impl13Core2 lib14api3impl13core2;
        lib14api3impl13core2.doSomething();
        Lib14Api3Impl14Api1 lib14api3impl14api1;
        lib14api3impl14api1.doSomething();
        Lib14Api3Impl14Api2 lib14api3impl14api2;
        lib14api3impl14api2.doSomething();
        Lib14Api3Impl14Api3 lib14api3impl14api3;
        lib14api3impl14api3.doSomething();
        visited = 1;
    }
}

