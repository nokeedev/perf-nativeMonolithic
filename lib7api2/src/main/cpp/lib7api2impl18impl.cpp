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
int lib7api2impl18impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api2impl18impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api2impl18impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api2impl18impl4(int a, int b) {
    return a + b;
}

int Lib7Api2Impl18Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib7Api2Impl18Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Api2Impl18Impl" << std::endl;
        Lib7Impl lib7impl;
        lib7impl.doSomething();
        Lib8Api1 lib8api1;
        lib8api1.doSomething();
        Lib8Api2 lib8api2;
        lib8api2.doSomething();
        Lib8Api3 lib8api3;
        lib8api3.doSomething();
        Lib7Api2Impl18Core1 lib7api2impl18core1;
        lib7api2impl18core1.doSomething();
        Lib7Api2Impl18Core2 lib7api2impl18core2;
        lib7api2impl18core2.doSomething();
        Lib7Api2Impl19Api1 lib7api2impl19api1;
        lib7api2impl19api1.doSomething();
        Lib7Api2Impl19Api2 lib7api2impl19api2;
        lib7api2impl19api2.doSomething();
        Lib7Api2Impl19Api3 lib7api2impl19api3;
        lib7api2impl19api3.doSomething();
        visited = 1;
    }
}

