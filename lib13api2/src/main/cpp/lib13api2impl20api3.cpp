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
int lib13api2impl20api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api2impl20api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api2impl20api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api2impl20api34(int a, int b) {
    return a + b;
}

int Lib13Api2Impl20Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib13Api2Impl20Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Api2Impl20Api3" << std::endl;
        Lib13Impl lib13impl;
        lib13impl.doSomething();
        Lib14Api1 lib14api1;
        lib14api1.doSomething();
        Lib14Api2 lib14api2;
        lib14api2.doSomething();
        Lib14Api3 lib14api3;
        lib14api3.doSomething();
        Lib13Api2Impl20Impl lib13api2impl20impl;
        lib13api2impl20impl.doSomething();
        Lib13Api2Impl21Api1 lib13api2impl21api1;
        lib13api2impl21api1.doSomething();
        Lib13Api2Impl21Api2 lib13api2impl21api2;
        lib13api2impl21api2.doSomething();
        Lib13Api2Impl21Api3 lib13api2impl21api3;
        lib13api2impl21api3.doSomething();
        visited = 1;
    }
}

