// GENERATED SOURCE FILE

#include "lib17api2_private.h"
#include "lib17api2_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api2impl13api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl13api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl13api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl13api14(int a, int b) {
    return a + b;
}

int Lib17Api2Impl13Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api2Impl13Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api2Impl13Api1" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api2Impl14Api1 lib17api2impl14api1;
        lib17api2impl14api1.doSomething();
        Lib17Api2Impl13Impl lib17api2impl13impl;
        lib17api2impl13impl.doSomething();
        Lib17Api2Impl14Api2 lib17api2impl14api2;
        lib17api2impl14api2.doSomething();
        Lib17Api2Impl14Api3 lib17api2impl14api3;
        lib17api2impl14api3.doSomething();
        visited = 1;
    }
}

