// GENERATED SOURCE FILE

#include "lib17api2_private.h"
#include "lib17api2_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api2impl3api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl3api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl3api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl3api24(int a, int b) {
    return a + b;
}

int Lib17Api2Impl3Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api2Impl3Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api2Impl3Api2" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api2Impl3Impl lib17api2impl3impl;
        lib17api2impl3impl.doSomething();
        Lib17Api2Impl4Api1 lib17api2impl4api1;
        lib17api2impl4api1.doSomething();
        Lib17Api2Impl4Api2 lib17api2impl4api2;
        lib17api2impl4api2.doSomething();
        Lib17Api2Impl4Api3 lib17api2impl4api3;
        lib17api2impl4api3.doSomething();
        visited = 1;
    }
}

