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
int lib13api2impl7impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api2impl7impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api2impl7impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api2impl7impl4(int a, int b) {
    return a + b;
}

int Lib13Api2Impl7Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib13Api2Impl7Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Api2Impl7Impl" << std::endl;
        Lib13Impl lib13impl;
        lib13impl.doSomething();
        Lib14Api1 lib14api1;
        lib14api1.doSomething();
        Lib14Api2 lib14api2;
        lib14api2.doSomething();
        Lib14Api3 lib14api3;
        lib14api3.doSomething();
        Lib13Api2Impl7Core1 lib13api2impl7core1;
        lib13api2impl7core1.doSomething();
        Lib13Api2Impl7Core2 lib13api2impl7core2;
        lib13api2impl7core2.doSomething();
        Lib13Api2Impl8Api1 lib13api2impl8api1;
        lib13api2impl8api1.doSomething();
        Lib13Api2Impl8Api2 lib13api2impl8api2;
        lib13api2impl8api2.doSomething();
        Lib13Api2Impl8Api3 lib13api2impl8api3;
        lib13api2impl8api3.doSomething();
        visited = 1;
    }
}

