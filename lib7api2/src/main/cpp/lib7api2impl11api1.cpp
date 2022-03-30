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
int lib7api2impl11api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api2impl11api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api2impl11api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api2impl11api14(int a, int b) {
    return a + b;
}

int Lib7Api2Impl11Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib7Api2Impl11Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Api2Impl11Api1" << std::endl;
        Lib7Impl lib7impl;
        lib7impl.doSomething();
        Lib8Api1 lib8api1;
        lib8api1.doSomething();
        Lib8Api2 lib8api2;
        lib8api2.doSomething();
        Lib8Api3 lib8api3;
        lib8api3.doSomething();
        Lib7Api2Impl12Api1 lib7api2impl12api1;
        lib7api2impl12api1.doSomething();
        Lib7Api2Impl11Impl lib7api2impl11impl;
        lib7api2impl11impl.doSomething();
        Lib7Api2Impl12Api2 lib7api2impl12api2;
        lib7api2impl12api2.doSomething();
        Lib7Api2Impl12Api3 lib7api2impl12api3;
        lib7api2impl12api3.doSomething();
        visited = 1;
    }
}

