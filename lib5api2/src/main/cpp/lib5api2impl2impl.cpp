// GENERATED SOURCE FILE

#include "lib5api2_private.h"
#include "lib5api2_impl.h"
#include "lib5impl.h"
#include "lib6api1.h"
#include "lib6api2.h"
#include "lib6api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5api2impl2impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api2impl2impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api2impl2impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5api2impl2impl4(int a, int b) {
    return a + b;
}

int Lib5Api2Impl2Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib5Api2Impl2Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Api2Impl2Impl" << std::endl;
        Lib5Impl lib5impl;
        lib5impl.doSomething();
        Lib6Api1 lib6api1;
        lib6api1.doSomething();
        Lib6Api2 lib6api2;
        lib6api2.doSomething();
        Lib6Api3 lib6api3;
        lib6api3.doSomething();
        Lib5Api2Impl2Core1 lib5api2impl2core1;
        lib5api2impl2core1.doSomething();
        Lib5Api2Impl2Core2 lib5api2impl2core2;
        lib5api2impl2core2.doSomething();
        Lib5Api2Impl3Api1 lib5api2impl3api1;
        lib5api2impl3api1.doSomething();
        Lib5Api2Impl3Api2 lib5api2impl3api2;
        lib5api2impl3api2.doSomething();
        Lib5Api2Impl3Api3 lib5api2impl3api3;
        lib5api2impl3api3.doSomething();
        visited = 1;
    }
}

