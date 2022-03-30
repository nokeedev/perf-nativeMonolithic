// GENERATED SOURCE FILE

#include "lib17api2_private.h"
#include "lib17api2_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api2impl29api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl29api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl29api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl29api24(int a, int b) {
    return a + b;
}

int Lib17Api2Impl29Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api2Impl29Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api2Impl29Api2" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api2Impl29Impl lib17api2impl29impl;
        lib17api2impl29impl.doSomething();
        Lib17Api2Impl30Api1 lib17api2impl30api1;
        lib17api2impl30api1.doSomething();
        Lib17Api2Impl30Api2 lib17api2impl30api2;
        lib17api2impl30api2.doSomething();
        Lib17Api2Impl30Api3 lib17api2impl30api3;
        lib17api2impl30api3.doSomething();
        visited = 1;
    }
}

