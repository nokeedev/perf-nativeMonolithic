// GENERATED SOURCE FILE

#include "lib17api2_private.h"
#include "lib17api2_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api2impl15api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl15api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl15api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl15api24(int a, int b) {
    return a + b;
}

int Lib17Api2Impl15Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api2Impl15Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api2Impl15Api2" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api2Impl15Impl lib17api2impl15impl;
        lib17api2impl15impl.doSomething();
        Lib17Api2Impl16Api1 lib17api2impl16api1;
        lib17api2impl16api1.doSomething();
        Lib17Api2Impl16Api2 lib17api2impl16api2;
        lib17api2impl16api2.doSomething();
        Lib17Api2Impl16Api3 lib17api2impl16api3;
        lib17api2impl16api3.doSomething();
        visited = 1;
    }
}

