// GENERATED SOURCE FILE

#include "lib17api2_private.h"
#include "lib17api2_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api2impl8api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl8api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl8api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl8api24(int a, int b) {
    return a + b;
}

int Lib17Api2Impl8Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api2Impl8Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api2Impl8Api2" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api2Impl8Impl lib17api2impl8impl;
        lib17api2impl8impl.doSomething();
        Lib17Api2Impl9Api1 lib17api2impl9api1;
        lib17api2impl9api1.doSomething();
        Lib17Api2Impl9Api2 lib17api2impl9api2;
        lib17api2impl9api2.doSomething();
        Lib17Api2Impl9Api3 lib17api2impl9api3;
        lib17api2impl9api3.doSomething();
        visited = 1;
    }
}

