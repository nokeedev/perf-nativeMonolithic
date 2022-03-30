// GENERATED SOURCE FILE

#include "lib7api2_private.h"
#include "lib7api2_impl.h"
#include "lib7impl.h"
#include "lib8api1.h"
#include "lib8api2.h"
#include "lib8api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7api2impl2api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api2impl2api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api2impl2api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api2impl2api24(int a, int b) {
    return a + b;
}

int Lib7Api2Impl2Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib7Api2Impl2Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Api2Impl2Api2" << std::endl;
        Lib7Impl lib7impl;
        lib7impl.doSomething();
        Lib8Api1 lib8api1;
        lib8api1.doSomething();
        Lib8Api2 lib8api2;
        lib8api2.doSomething();
        Lib8Api3 lib8api3;
        lib8api3.doSomething();
        Lib7Api2Impl2Impl lib7api2impl2impl;
        lib7api2impl2impl.doSomething();
        Lib7Api2Impl3Api1 lib7api2impl3api1;
        lib7api2impl3api1.doSomething();
        Lib7Api2Impl3Api2 lib7api2impl3api2;
        lib7api2impl3api2.doSomething();
        Lib7Api2Impl3Api3 lib7api2impl3api3;
        lib7api2impl3api3.doSomething();
        visited = 1;
    }
}

