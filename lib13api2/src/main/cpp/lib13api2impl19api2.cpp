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
int lib13api2impl19api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api2impl19api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api2impl19api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api2impl19api24(int a, int b) {
    return a + b;
}

int Lib13Api2Impl19Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib13Api2Impl19Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Api2Impl19Api2" << std::endl;
        Lib13Impl lib13impl;
        lib13impl.doSomething();
        Lib14Api1 lib14api1;
        lib14api1.doSomething();
        Lib14Api2 lib14api2;
        lib14api2.doSomething();
        Lib14Api3 lib14api3;
        lib14api3.doSomething();
        Lib13Api2Impl19Impl lib13api2impl19impl;
        lib13api2impl19impl.doSomething();
        Lib13Api2Impl20Api1 lib13api2impl20api1;
        lib13api2impl20api1.doSomething();
        Lib13Api2Impl20Api2 lib13api2impl20api2;
        lib13api2impl20api2.doSomething();
        Lib13Api2Impl20Api3 lib13api2impl20api3;
        lib13api2impl20api3.doSomething();
        visited = 1;
    }
}

