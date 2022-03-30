// GENERATED SOURCE FILE

#include "lib17api2_private.h"
#include "lib17api2_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api2impl16api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl16api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl16api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl16api14(int a, int b) {
    return a + b;
}

int Lib17Api2Impl16Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api2Impl16Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api2Impl16Api1" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api2Impl17Api1 lib17api2impl17api1;
        lib17api2impl17api1.doSomething();
        Lib17Api2Impl16Impl lib17api2impl16impl;
        lib17api2impl16impl.doSomething();
        Lib17Api2Impl17Api2 lib17api2impl17api2;
        lib17api2impl17api2.doSomething();
        Lib17Api2Impl17Api3 lib17api2impl17api3;
        lib17api2impl17api3.doSomething();
        visited = 1;
    }
}

