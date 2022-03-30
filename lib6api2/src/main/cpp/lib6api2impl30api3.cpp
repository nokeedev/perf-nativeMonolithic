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
int lib6api2impl30api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api2impl30api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api2impl30api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api2impl30api34(int a, int b) {
    return a + b;
}

int Lib6Api2Impl30Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib6Api2Impl30Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Api2Impl30Api3" << std::endl;
        Lib6Impl lib6impl;
        lib6impl.doSomething();
        Lib7Api1 lib7api1;
        lib7api1.doSomething();
        Lib7Api2 lib7api2;
        lib7api2.doSomething();
        Lib7Api3 lib7api3;
        lib7api3.doSomething();
        Lib6Api2Impl30Impl lib6api2impl30impl;
        lib6api2impl30impl.doSomething();
        Lib6Api2Impl31Api1 lib6api2impl31api1;
        lib6api2impl31api1.doSomething();
        Lib6Api2Impl31Api2 lib6api2impl31api2;
        lib6api2impl31api2.doSomething();
        Lib6Api2Impl31Api3 lib6api2impl31api3;
        lib6api2impl31api3.doSomething();
        visited = 1;
    }
}

