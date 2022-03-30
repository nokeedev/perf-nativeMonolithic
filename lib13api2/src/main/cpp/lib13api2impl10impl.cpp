// GENERATED SOURCE FILE

#include "lib13api2_private.h"
#include "lib13api2_impl.h"
#include "lib13impl.h"
#include "lib14api1.h"
#include "lib14api2.h"
#include "lib14api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13api2impl10impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api2impl10impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api2impl10impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api2impl10impl4(int a, int b) {
    return a + b;
}

int Lib13Api2Impl10Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib13Api2Impl10Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Api2Impl10Impl" << std::endl;
        Lib13Impl lib13impl;
        lib13impl.doSomething();
        Lib14Api1 lib14api1;
        lib14api1.doSomething();
        Lib14Api2 lib14api2;
        lib14api2.doSomething();
        Lib14Api3 lib14api3;
        lib14api3.doSomething();
        Lib13Api2Impl10Core1 lib13api2impl10core1;
        lib13api2impl10core1.doSomething();
        Lib13Api2Impl10Core2 lib13api2impl10core2;
        lib13api2impl10core2.doSomething();
        Lib13Api2Impl11Api1 lib13api2impl11api1;
        lib13api2impl11api1.doSomething();
        Lib13Api2Impl11Api2 lib13api2impl11api2;
        lib13api2impl11api2.doSomething();
        Lib13Api2Impl11Api3 lib13api2impl11api3;
        lib13api2impl11api3.doSomething();
        visited = 1;
    }
}

