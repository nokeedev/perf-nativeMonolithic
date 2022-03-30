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
int lib13api2impl31api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api2impl31api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api2impl31api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api2impl31api34(int a, int b) {
    return a + b;
}

int Lib13Api2Impl31Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib13Api2Impl31Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Api2Impl31Api3" << std::endl;
        Lib13Impl lib13impl;
        lib13impl.doSomething();
        Lib14Api1 lib14api1;
        lib14api1.doSomething();
        Lib14Api2 lib14api2;
        lib14api2.doSomething();
        Lib14Api3 lib14api3;
        lib14api3.doSomething();
        Lib13Api2Impl31Impl lib13api2impl31impl;
        lib13api2impl31impl.doSomething();
        Lib13Api2Impl32Api1 lib13api2impl32api1;
        lib13api2impl32api1.doSomething();
        Lib13Api2Impl32Api2 lib13api2impl32api2;
        lib13api2impl32api2.doSomething();
        Lib13Api2Impl32Api3 lib13api2impl32api3;
        lib13api2impl32api3.doSomething();
        visited = 1;
    }
}

