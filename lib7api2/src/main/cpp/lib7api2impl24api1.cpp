// GENERATED SOURCE FILE

#include "lib7api2_private.h"
#include "lib7api2_impl.h"
#include "lib7impl.h"
#include "lib8api1.h"
#include "lib8api2.h"
#include "lib8api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7api2impl24api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api2impl24api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api2impl24api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api2impl24api14(int a, int b) {
    return a + b;
}

int Lib7Api2Impl24Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib7Api2Impl24Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Api2Impl24Api1" << std::endl;
        Lib7Impl lib7impl;
        lib7impl.doSomething();
        Lib8Api1 lib8api1;
        lib8api1.doSomething();
        Lib8Api2 lib8api2;
        lib8api2.doSomething();
        Lib8Api3 lib8api3;
        lib8api3.doSomething();
        Lib7Api2Impl25Api1 lib7api2impl25api1;
        lib7api2impl25api1.doSomething();
        Lib7Api2Impl24Impl lib7api2impl24impl;
        lib7api2impl24impl.doSomething();
        Lib7Api2Impl25Api2 lib7api2impl25api2;
        lib7api2impl25api2.doSomething();
        Lib7Api2Impl25Api3 lib7api2impl25api3;
        lib7api2impl25api3.doSomething();
        visited = 1;
    }
}

