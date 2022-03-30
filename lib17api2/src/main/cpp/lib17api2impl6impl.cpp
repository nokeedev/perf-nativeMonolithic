// GENERATED SOURCE FILE

#include "lib17api2_private.h"
#include "lib17api2_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api2impl6impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl6impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl6impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl6impl4(int a, int b) {
    return a + b;
}

int Lib17Api2Impl6Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api2Impl6Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api2Impl6Impl" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api2Impl6Core1 lib17api2impl6core1;
        lib17api2impl6core1.doSomething();
        Lib17Api2Impl6Core2 lib17api2impl6core2;
        lib17api2impl6core2.doSomething();
        Lib17Api2Impl7Api1 lib17api2impl7api1;
        lib17api2impl7api1.doSomething();
        Lib17Api2Impl7Api2 lib17api2impl7api2;
        lib17api2impl7api2.doSomething();
        Lib17Api2Impl7Api3 lib17api2impl7api3;
        lib17api2impl7api3.doSomething();
        visited = 1;
    }
}

