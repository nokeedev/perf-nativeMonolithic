// GENERATED SOURCE FILE

#include "lib14api2_impl.h"
#include "lib14api2_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api24(int a, int b) {
    return a + b;
}

int Lib14Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api2" << std::endl;
        Lib14Api2Impl1Api1 lib14api2impl1api1;
        lib14api2impl1api1.doSomething();
        Lib14Api2Impl1Api2 lib14api2impl1api2;
        lib14api2impl1api2.doSomething();
        Lib14Api2Impl1Api3 lib14api2impl1api3;
        lib14api2impl1api3.doSomething();
        visited = 1;
    }
}

