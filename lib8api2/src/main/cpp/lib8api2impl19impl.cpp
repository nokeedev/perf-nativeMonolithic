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
int lib8api2impl19impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api2impl19impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api2impl19impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api2impl19impl4(int a, int b) {
    return a + b;
}

int Lib8Api2Impl19Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib8Api2Impl19Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Api2Impl19Impl" << std::endl;
        Lib8Impl lib8impl;
        lib8impl.doSomething();
        Lib9Api1 lib9api1;
        lib9api1.doSomething();
        Lib9Api2 lib9api2;
        lib9api2.doSomething();
        Lib9Api3 lib9api3;
        lib9api3.doSomething();
        Lib8Api2Impl19Core1 lib8api2impl19core1;
        lib8api2impl19core1.doSomething();
        Lib8Api2Impl19Core2 lib8api2impl19core2;
        lib8api2impl19core2.doSomething();
        Lib8Api2Impl20Api1 lib8api2impl20api1;
        lib8api2impl20api1.doSomething();
        Lib8Api2Impl20Api2 lib8api2impl20api2;
        lib8api2impl20api2.doSomething();
        Lib8Api2Impl20Api3 lib8api2impl20api3;
        lib8api2impl20api3.doSomething();
        visited = 1;
    }
}

