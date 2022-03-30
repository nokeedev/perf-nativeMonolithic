// GENERATED SOURCE FILE

#include "lib13api3_private.h"
#include "lib13api3_impl.h"
#include "lib13impl.h"
#include "lib14api1.h"
#include "lib14api2.h"
#include "lib14api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13api3impl5impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api3impl5impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api3impl5impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api3impl5impl4(int a, int b) {
    return a + b;
}

int Lib13Api3Impl5Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib13Api3Impl5Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Api3Impl5Impl" << std::endl;
        Lib13Impl lib13impl;
        lib13impl.doSomething();
        Lib14Api1 lib14api1;
        lib14api1.doSomething();
        Lib14Api2 lib14api2;
        lib14api2.doSomething();
        Lib14Api3 lib14api3;
        lib14api3.doSomething();
        Lib13Api3Impl5Core1 lib13api3impl5core1;
        lib13api3impl5core1.doSomething();
        Lib13Api3Impl5Core2 lib13api3impl5core2;
        lib13api3impl5core2.doSomething();
        Lib13Api3Impl6Api1 lib13api3impl6api1;
        lib13api3impl6api1.doSomething();
        Lib13Api3Impl6Api2 lib13api3impl6api2;
        lib13api3impl6api2.doSomething();
        Lib13Api3Impl6Api3 lib13api3impl6api3;
        lib13api3impl6api3.doSomething();
        visited = 1;
    }
}

