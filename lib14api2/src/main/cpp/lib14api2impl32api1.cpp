// GENERATED SOURCE FILE

#include "lib14api2_private.h"
#include "lib14api2_impl.h"
#include "lib14impl.h"
#include "lib15api1.h"
#include "lib15api2.h"
#include "lib15api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14api2impl32api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api2impl32api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api2impl32api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api2impl32api14(int a, int b) {
    return a + b;
}

int Lib14Api2Impl32Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api2Impl32Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api2Impl32Api1" << std::endl;
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api2Impl33Api1 lib14api2impl33api1;
        lib14api2impl33api1.doSomething();
        Lib14Api2Impl32Impl lib14api2impl32impl;
        lib14api2impl32impl.doSomething();
        Lib14Api2Impl33Api2 lib14api2impl33api2;
        lib14api2impl33api2.doSomething();
        Lib14Api2Impl33Api3 lib14api2impl33api3;
        lib14api2impl33api3.doSomething();
        visited = 1;
    }
}

