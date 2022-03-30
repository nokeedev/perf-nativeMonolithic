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
int lib6api2impl32api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api2impl32api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api2impl32api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api2impl32api24(int a, int b) {
    return a + b;
}

int Lib6Api2Impl32Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib6Api2Impl32Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Api2Impl32Api2" << std::endl;
        Lib6Impl lib6impl;
        lib6impl.doSomething();
        Lib7Api1 lib7api1;
        lib7api1.doSomething();
        Lib7Api2 lib7api2;
        lib7api2.doSomething();
        Lib7Api3 lib7api3;
        lib7api3.doSomething();
        Lib6Api2Impl32Impl lib6api2impl32impl;
        lib6api2impl32impl.doSomething();
        Lib6Api2Impl33Api1 lib6api2impl33api1;
        lib6api2impl33api1.doSomething();
        Lib6Api2Impl33Api2 lib6api2impl33api2;
        lib6api2impl33api2.doSomething();
        Lib6Api2Impl33Api3 lib6api2impl33api3;
        lib6api2impl33api3.doSomething();
        visited = 1;
    }
}

