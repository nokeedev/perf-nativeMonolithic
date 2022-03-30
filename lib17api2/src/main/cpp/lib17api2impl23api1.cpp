// GENERATED SOURCE FILE

#include "lib17api2_private.h"
#include "lib17api2_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api2impl23api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl23api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl23api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl23api14(int a, int b) {
    return a + b;
}

int Lib17Api2Impl23Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api2Impl23Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api2Impl23Api1" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api2Impl24Api1 lib17api2impl24api1;
        lib17api2impl24api1.doSomething();
        Lib17Api2Impl23Impl lib17api2impl23impl;
        lib17api2impl23impl.doSomething();
        Lib17Api2Impl24Api2 lib17api2impl24api2;
        lib17api2impl24api2.doSomething();
        Lib17Api2Impl24Api3 lib17api2impl24api3;
        lib17api2impl24api3.doSomething();
        visited = 1;
    }
}

