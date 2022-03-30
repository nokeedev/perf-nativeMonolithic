// GENERATED SOURCE FILE

#include "lib17api2_private.h"
#include "lib17api2_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api2impl33api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl33api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl33api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl33api24(int a, int b) {
    return a + b;
}

int Lib17Api2Impl33Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api2Impl33Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api2Impl33Api2" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api2Impl33Impl lib17api2impl33impl;
        lib17api2impl33impl.doSomething();
        Lib17Api2Impl34Api lib17api2impl34api;
        lib17api2impl34api.doSomething();
        visited = 1;
    }
}

