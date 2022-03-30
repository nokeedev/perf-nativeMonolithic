// GENERATED SOURCE FILE

#include "lib17api2_private.h"
#include "lib17api2_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api2impl30api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl30api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl30api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl30api34(int a, int b) {
    return a + b;
}

int Lib17Api2Impl30Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api2Impl30Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api2Impl30Api3" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api2Impl30Impl lib17api2impl30impl;
        lib17api2impl30impl.doSomething();
        Lib17Api2Impl31Api1 lib17api2impl31api1;
        lib17api2impl31api1.doSomething();
        Lib17Api2Impl31Api2 lib17api2impl31api2;
        lib17api2impl31api2.doSomething();
        Lib17Api2Impl31Api3 lib17api2impl31api3;
        lib17api2impl31api3.doSomething();
        visited = 1;
    }
}

