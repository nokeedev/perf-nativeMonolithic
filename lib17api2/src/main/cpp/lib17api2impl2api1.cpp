// GENERATED SOURCE FILE

#include "lib17api2_private.h"
#include "lib17api2_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api2impl2api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl2api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl2api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl2api14(int a, int b) {
    return a + b;
}

int Lib17Api2Impl2Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api2Impl2Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api2Impl2Api1" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api2Impl3Api1 lib17api2impl3api1;
        lib17api2impl3api1.doSomething();
        Lib17Api2Impl2Impl lib17api2impl2impl;
        lib17api2impl2impl.doSomething();
        Lib17Api2Impl3Api2 lib17api2impl3api2;
        lib17api2impl3api2.doSomething();
        Lib17Api2Impl3Api3 lib17api2impl3api3;
        lib17api2impl3api3.doSomething();
        visited = 1;
    }
}

