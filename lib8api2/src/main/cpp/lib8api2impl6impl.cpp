// GENERATED SOURCE FILE

#include "lib8api2_private.h"
#include "lib8api2_impl.h"
#include "lib8impl.h"
#include "lib9api1.h"
#include "lib9api2.h"
#include "lib9api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8api2impl6impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api2impl6impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api2impl6impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api2impl6impl4(int a, int b) {
    return a + b;
}

int Lib8Api2Impl6Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib8Api2Impl6Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Api2Impl6Impl" << std::endl;
        Lib8Impl lib8impl;
        lib8impl.doSomething();
        Lib9Api1 lib9api1;
        lib9api1.doSomething();
        Lib9Api2 lib9api2;
        lib9api2.doSomething();
        Lib9Api3 lib9api3;
        lib9api3.doSomething();
        Lib8Api2Impl6Core1 lib8api2impl6core1;
        lib8api2impl6core1.doSomething();
        Lib8Api2Impl6Core2 lib8api2impl6core2;
        lib8api2impl6core2.doSomething();
        Lib8Api2Impl7Api1 lib8api2impl7api1;
        lib8api2impl7api1.doSomething();
        Lib8Api2Impl7Api2 lib8api2impl7api2;
        lib8api2impl7api2.doSomething();
        Lib8Api2Impl7Api3 lib8api2impl7api3;
        lib8api2impl7api3.doSomething();
        visited = 1;
    }
}

