// GENERATED SOURCE FILE

#include "lib17api2_private.h"
#include "lib17api2_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api2impl17api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl17api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl17api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl17api14(int a, int b) {
    return a + b;
}

int Lib17Api2Impl17Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api2Impl17Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api2Impl17Api1" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api2Impl18Api1 lib17api2impl18api1;
        lib17api2impl18api1.doSomething();
        Lib17Api2Impl17Impl lib17api2impl17impl;
        lib17api2impl17impl.doSomething();
        Lib17Api2Impl18Api2 lib17api2impl18api2;
        lib17api2impl18api2.doSomething();
        Lib17Api2Impl18Api3 lib17api2impl18api3;
        lib17api2impl18api3.doSomething();
        visited = 1;
    }
}

