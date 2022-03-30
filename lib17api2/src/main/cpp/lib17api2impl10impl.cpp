// GENERATED SOURCE FILE

#include "lib17api2_private.h"
#include "lib17api2_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api2impl10impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl10impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl10impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl10impl4(int a, int b) {
    return a + b;
}

int Lib17Api2Impl10Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api2Impl10Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api2Impl10Impl" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api2Impl10Core1 lib17api2impl10core1;
        lib17api2impl10core1.doSomething();
        Lib17Api2Impl10Core2 lib17api2impl10core2;
        lib17api2impl10core2.doSomething();
        Lib17Api2Impl11Api1 lib17api2impl11api1;
        lib17api2impl11api1.doSomething();
        Lib17Api2Impl11Api2 lib17api2impl11api2;
        lib17api2impl11api2.doSomething();
        Lib17Api2Impl11Api3 lib17api2impl11api3;
        lib17api2impl11api3.doSomething();
        visited = 1;
    }
}

