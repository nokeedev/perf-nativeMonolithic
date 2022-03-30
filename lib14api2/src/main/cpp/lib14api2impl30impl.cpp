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
int lib14api2impl30impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api2impl30impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api2impl30impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api2impl30impl4(int a, int b) {
    return a + b;
}

int Lib14Api2Impl30Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api2Impl30Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api2Impl30Impl" << std::endl;
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api2Impl30Core1 lib14api2impl30core1;
        lib14api2impl30core1.doSomething();
        Lib14Api2Impl30Core2 lib14api2impl30core2;
        lib14api2impl30core2.doSomething();
        Lib14Api2Impl31Api1 lib14api2impl31api1;
        lib14api2impl31api1.doSomething();
        Lib14Api2Impl31Api2 lib14api2impl31api2;
        lib14api2impl31api2.doSomething();
        Lib14Api2Impl31Api3 lib14api2impl31api3;
        lib14api2impl31api3.doSomething();
        visited = 1;
    }
}

