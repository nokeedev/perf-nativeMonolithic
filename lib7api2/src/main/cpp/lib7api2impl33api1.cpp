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
int lib7api2impl33api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api2impl33api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api2impl33api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api2impl33api14(int a, int b) {
    return a + b;
}

int Lib7Api2Impl33Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib7Api2Impl33Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Api2Impl33Api1" << std::endl;
        Lib7Impl lib7impl;
        lib7impl.doSomething();
        Lib8Api1 lib8api1;
        lib8api1.doSomething();
        Lib8Api2 lib8api2;
        lib8api2.doSomething();
        Lib8Api3 lib8api3;
        lib8api3.doSomething();
        Lib7Api2Impl34Api lib7api2impl34api;
        lib7api2impl34api.doSomething();
        Lib7Api2Impl33Impl lib7api2impl33impl;
        lib7api2impl33impl.doSomething();
        visited = 1;
    }
}

