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
int lib6api2impl7api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api2impl7api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api2impl7api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api2impl7api34(int a, int b) {
    return a + b;
}

int Lib6Api2Impl7Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib6Api2Impl7Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Api2Impl7Api3" << std::endl;
        Lib6Impl lib6impl;
        lib6impl.doSomething();
        Lib7Api1 lib7api1;
        lib7api1.doSomething();
        Lib7Api2 lib7api2;
        lib7api2.doSomething();
        Lib7Api3 lib7api3;
        lib7api3.doSomething();
        Lib6Api2Impl7Impl lib6api2impl7impl;
        lib6api2impl7impl.doSomething();
        Lib6Api2Impl8Api1 lib6api2impl8api1;
        lib6api2impl8api1.doSomething();
        Lib6Api2Impl8Api2 lib6api2impl8api2;
        lib6api2impl8api2.doSomething();
        Lib6Api2Impl8Api3 lib6api2impl8api3;
        lib6api2impl8api3.doSomething();
        visited = 1;
    }
}

