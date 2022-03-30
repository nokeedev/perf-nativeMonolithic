// GENERATED SOURCE FILE

#include "lib17api2_private.h"
#include "lib17api2_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api2impl5api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl5api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl5api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl5api34(int a, int b) {
    return a + b;
}

int Lib17Api2Impl5Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api2Impl5Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api2Impl5Api3" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api2Impl5Impl lib17api2impl5impl;
        lib17api2impl5impl.doSomething();
        Lib17Api2Impl6Api1 lib17api2impl6api1;
        lib17api2impl6api1.doSomething();
        Lib17Api2Impl6Api2 lib17api2impl6api2;
        lib17api2impl6api2.doSomething();
        Lib17Api2Impl6Api3 lib17api2impl6api3;
        lib17api2impl6api3.doSomething();
        visited = 1;
    }
}

