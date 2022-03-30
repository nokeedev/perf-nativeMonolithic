// GENERATED SOURCE FILE

#include "lib17api2_private.h"
#include "lib17api2_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api2impl14api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl14api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl14api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl14api34(int a, int b) {
    return a + b;
}

int Lib17Api2Impl14Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api2Impl14Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api2Impl14Api3" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api2Impl14Impl lib17api2impl14impl;
        lib17api2impl14impl.doSomething();
        Lib17Api2Impl15Api1 lib17api2impl15api1;
        lib17api2impl15api1.doSomething();
        Lib17Api2Impl15Api2 lib17api2impl15api2;
        lib17api2impl15api2.doSomething();
        Lib17Api2Impl15Api3 lib17api2impl15api3;
        lib17api2impl15api3.doSomething();
        visited = 1;
    }
}

