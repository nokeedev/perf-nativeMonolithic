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
int lib7api2impl12impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api2impl12impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api2impl12impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api2impl12impl4(int a, int b) {
    return a + b;
}

int Lib7Api2Impl12Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib7Api2Impl12Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Api2Impl12Impl" << std::endl;
        Lib7Impl lib7impl;
        lib7impl.doSomething();
        Lib8Api1 lib8api1;
        lib8api1.doSomething();
        Lib8Api2 lib8api2;
        lib8api2.doSomething();
        Lib8Api3 lib8api3;
        lib8api3.doSomething();
        Lib7Api2Impl12Core1 lib7api2impl12core1;
        lib7api2impl12core1.doSomething();
        Lib7Api2Impl12Core2 lib7api2impl12core2;
        lib7api2impl12core2.doSomething();
        Lib7Api2Impl13Api1 lib7api2impl13api1;
        lib7api2impl13api1.doSomething();
        Lib7Api2Impl13Api2 lib7api2impl13api2;
        lib7api2impl13api2.doSomething();
        Lib7Api2Impl13Api3 lib7api2impl13api3;
        lib7api2impl13api3.doSomething();
        visited = 1;
    }
}

