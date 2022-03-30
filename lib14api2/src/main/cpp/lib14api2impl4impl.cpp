// GENERATED SOURCE FILE

#include "lib14api2_private.h"
#include "lib14api2_impl.h"
#include "lib14impl.h"
#include "lib15api1.h"
#include "lib15api2.h"
#include "lib15api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14api2impl4impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api2impl4impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api2impl4impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api2impl4impl4(int a, int b) {
    return a + b;
}

int Lib14Api2Impl4Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api2Impl4Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api2Impl4Impl" << std::endl;
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api2Impl4Core1 lib14api2impl4core1;
        lib14api2impl4core1.doSomething();
        Lib14Api2Impl4Core2 lib14api2impl4core2;
        lib14api2impl4core2.doSomething();
        Lib14Api2Impl5Api1 lib14api2impl5api1;
        lib14api2impl5api1.doSomething();
        Lib14Api2Impl5Api2 lib14api2impl5api2;
        lib14api2impl5api2.doSomething();
        Lib14Api2Impl5Api3 lib14api2impl5api3;
        lib14api2impl5api3.doSomething();
        visited = 1;
    }
}

