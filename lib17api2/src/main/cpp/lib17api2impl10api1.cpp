// GENERATED SOURCE FILE

#include "lib17api2_private.h"
#include "lib17api2_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api2impl10api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl10api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl10api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl10api14(int a, int b) {
    return a + b;
}

int Lib17Api2Impl10Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api2Impl10Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api2Impl10Api1" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api2Impl11Api1 lib17api2impl11api1;
        lib17api2impl11api1.doSomething();
        Lib17Api2Impl10Impl lib17api2impl10impl;
        lib17api2impl10impl.doSomething();
        Lib17Api2Impl11Api2 lib17api2impl11api2;
        lib17api2impl11api2.doSomething();
        Lib17Api2Impl11Api3 lib17api2impl11api3;
        lib17api2impl11api3.doSomething();
        visited = 1;
    }
}

