// GENERATED SOURCE FILE

#include "lib17api2_private.h"
#include "lib17api2_impl.h"
#include "lib17core.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17api2impl24api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl24api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl24api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17api2impl24api34(int a, int b) {
    return a + b;
}

int Lib17Api2Impl24Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib17Api2Impl24Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Api2Impl24Api3" << std::endl;
        Lib17Core lib17core;
        lib17core.doSomething();
        Lib17Api2Impl24Impl lib17api2impl24impl;
        lib17api2impl24impl.doSomething();
        Lib17Api2Impl25Api1 lib17api2impl25api1;
        lib17api2impl25api1.doSomething();
        Lib17Api2Impl25Api2 lib17api2impl25api2;
        lib17api2impl25api2.doSomething();
        Lib17Api2Impl25Api3 lib17api2impl25api3;
        lib17api2impl25api3.doSomething();
        visited = 1;
    }
}

