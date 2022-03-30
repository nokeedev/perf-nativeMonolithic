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
int lib7api2impl21impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api2impl21impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api2impl21impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api2impl21impl4(int a, int b) {
    return a + b;
}

int Lib7Api2Impl21Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib7Api2Impl21Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Api2Impl21Impl" << std::endl;
        Lib7Impl lib7impl;
        lib7impl.doSomething();
        Lib8Api1 lib8api1;
        lib8api1.doSomething();
        Lib8Api2 lib8api2;
        lib8api2.doSomething();
        Lib8Api3 lib8api3;
        lib8api3.doSomething();
        Lib7Api2Impl21Core1 lib7api2impl21core1;
        lib7api2impl21core1.doSomething();
        Lib7Api2Impl21Core2 lib7api2impl21core2;
        lib7api2impl21core2.doSomething();
        Lib7Api2Impl22Api1 lib7api2impl22api1;
        lib7api2impl22api1.doSomething();
        Lib7Api2Impl22Api2 lib7api2impl22api2;
        lib7api2impl22api2.doSomething();
        Lib7Api2Impl22Api3 lib7api2impl22api3;
        lib7api2impl22api3.doSomething();
        visited = 1;
    }
}

