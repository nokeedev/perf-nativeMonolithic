// GENERATED SOURCE FILE

#include "lib6api2_private.h"
#include "lib6api2_impl.h"
#include "lib6impl.h"
#include "lib7api1.h"
#include "lib7api2.h"
#include "lib7api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6api2impl2impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api2impl2impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api2impl2impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api2impl2impl4(int a, int b) {
    return a + b;
}

int Lib6Api2Impl2Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib6Api2Impl2Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Api2Impl2Impl" << std::endl;
        Lib6Impl lib6impl;
        lib6impl.doSomething();
        Lib7Api1 lib7api1;
        lib7api1.doSomething();
        Lib7Api2 lib7api2;
        lib7api2.doSomething();
        Lib7Api3 lib7api3;
        lib7api3.doSomething();
        Lib6Api2Impl2Core1 lib6api2impl2core1;
        lib6api2impl2core1.doSomething();
        Lib6Api2Impl2Core2 lib6api2impl2core2;
        lib6api2impl2core2.doSomething();
        Lib6Api2Impl3Api1 lib6api2impl3api1;
        lib6api2impl3api1.doSomething();
        Lib6Api2Impl3Api2 lib6api2impl3api2;
        lib6api2impl3api2.doSomething();
        Lib6Api2Impl3Api3 lib6api2impl3api3;
        lib6api2impl3api3.doSomething();
        visited = 1;
    }
}

