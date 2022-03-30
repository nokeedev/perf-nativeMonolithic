// GENERATED SOURCE FILE

#include "lib17api2_private.h"
#include "lib17api2_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api2impl20api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl20api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl20api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl20api24(int a, int b) {
    return a + b;
}

int Lib17Api2Impl20Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api2Impl20Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api2Impl20Api2" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api2Impl20Impl lib17api2impl20impl;
        lib17api2impl20impl.doSomething();
        Lib17Api2Impl21Api1 lib17api2impl21api1;
        lib17api2impl21api1.doSomething();
        Lib17Api2Impl21Api2 lib17api2impl21api2;
        lib17api2impl21api2.doSomething();
        Lib17Api2Impl21Api3 lib17api2impl21api3;
        lib17api2impl21api3.doSomething();
        visited = 1;
    }
}

