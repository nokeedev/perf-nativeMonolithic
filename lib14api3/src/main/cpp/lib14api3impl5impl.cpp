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
int lib14api3impl5impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl5impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl5impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api3impl5impl4(int a, int b) {
    return a + b;
}

int Lib14Api3Impl5Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api3Impl5Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api3Impl5Impl" << std::endl;
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api3Impl5Core1 lib14api3impl5core1;
        lib14api3impl5core1.doSomething();
        Lib14Api3Impl5Core2 lib14api3impl5core2;
        lib14api3impl5core2.doSomething();
        Lib14Api3Impl6Api1 lib14api3impl6api1;
        lib14api3impl6api1.doSomething();
        Lib14Api3Impl6Api2 lib14api3impl6api2;
        lib14api3impl6api2.doSomething();
        Lib14Api3Impl6Api3 lib14api3impl6api3;
        lib14api3impl6api3.doSomething();
        visited = 1;
    }
}

