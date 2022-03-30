// GENERATED SOURCE FILE

#include "lib17api2_private.h"
#include "lib17api2_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api2impl26api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl26api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl26api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl26api24(int a, int b) {
    return a + b;
}

int Lib17Api2Impl26Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api2Impl26Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api2Impl26Api2" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api2Impl26Impl lib17api2impl26impl;
        lib17api2impl26impl.doSomething();
        Lib17Api2Impl27Api1 lib17api2impl27api1;
        lib17api2impl27api1.doSomething();
        Lib17Api2Impl27Api2 lib17api2impl27api2;
        lib17api2impl27api2.doSomething();
        Lib17Api2Impl27Api3 lib17api2impl27api3;
        lib17api2impl27api3.doSomething();
        visited = 1;
    }
}

