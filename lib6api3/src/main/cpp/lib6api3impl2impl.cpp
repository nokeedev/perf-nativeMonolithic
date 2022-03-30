// GENERATED SOURCE FILE

#include "lib6api3_private.h"
#include "lib6api3_impl.h"
#include "lib6impl.h"
#include "lib7api1.h"
#include "lib7api2.h"
#include "lib7api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6api3impl2impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api3impl2impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api3impl2impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api3impl2impl4(int a, int b) {
    return a + b;
}

int Lib6Api3Impl2Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib6Api3Impl2Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Api3Impl2Impl" << std::endl;
        Lib6Impl lib6impl;
        lib6impl.doSomething();
        Lib7Api1 lib7api1;
        lib7api1.doSomething();
        Lib7Api2 lib7api2;
        lib7api2.doSomething();
        Lib7Api3 lib7api3;
        lib7api3.doSomething();
        Lib6Api3Impl2Core1 lib6api3impl2core1;
        lib6api3impl2core1.doSomething();
        Lib6Api3Impl2Core2 lib6api3impl2core2;
        lib6api3impl2core2.doSomething();
        Lib6Api3Impl3Api1 lib6api3impl3api1;
        lib6api3impl3api1.doSomething();
        Lib6Api3Impl3Api2 lib6api3impl3api2;
        lib6api3impl3api2.doSomething();
        Lib6Api3Impl3Api3 lib6api3impl3api3;
        lib6api3impl3api3.doSomething();
        visited = 1;
    }
}

