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
int lib7api2impl16api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api2impl16api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api2impl16api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api2impl16api14(int a, int b) {
    return a + b;
}

int Lib7Api2Impl16Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib7Api2Impl16Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Api2Impl16Api1" << std::endl;
        Lib7Impl lib7impl;
        lib7impl.doSomething();
        Lib8Api1 lib8api1;
        lib8api1.doSomething();
        Lib8Api2 lib8api2;
        lib8api2.doSomething();
        Lib8Api3 lib8api3;
        lib8api3.doSomething();
        Lib7Api2Impl17Api1 lib7api2impl17api1;
        lib7api2impl17api1.doSomething();
        Lib7Api2Impl16Impl lib7api2impl16impl;
        lib7api2impl16impl.doSomething();
        Lib7Api2Impl17Api2 lib7api2impl17api2;
        lib7api2impl17api2.doSomething();
        Lib7Api2Impl17Api3 lib7api2impl17api3;
        lib7api2impl17api3.doSomething();
        visited = 1;
    }
}

