// GENERATED SOURCE FILE

#include "lib7api2_impl.h"
#include "lib7api2_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api24(int a, int b) {
    return a + b;
}

int Lib7Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib7Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Api2" << std::endl;
        Lib7Api2Impl1Api1 lib7api2impl1api1;
        lib7api2impl1api1.doSomething();
        Lib7Api2Impl1Api2 lib7api2impl1api2;
        lib7api2impl1api2.doSomething();
        Lib7Api2Impl1Api3 lib7api2impl1api3;
        lib7api2impl1api3.doSomething();
        visited = 1;
    }
}

