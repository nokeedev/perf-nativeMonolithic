// GENERATED SOURCE FILE

#include "lib8api2_private.h"
#include "lib8api2_impl.h"
#include "lib8impl.h"
#include "lib9api1.h"
#include "lib9api2.h"
#include "lib9api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8api2impl10api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api2impl10api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api2impl10api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api2impl10api14(int a, int b) {
    return a + b;
}

int Lib8Api2Impl10Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib8Api2Impl10Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Api2Impl10Api1" << std::endl;
        Lib8Impl lib8impl;
        lib8impl.doSomething();
        Lib9Api1 lib9api1;
        lib9api1.doSomething();
        Lib9Api2 lib9api2;
        lib9api2.doSomething();
        Lib9Api3 lib9api3;
        lib9api3.doSomething();
        Lib8Api2Impl11Api1 lib8api2impl11api1;
        lib8api2impl11api1.doSomething();
        Lib8Api2Impl10Impl lib8api2impl10impl;
        lib8api2impl10impl.doSomething();
        Lib8Api2Impl11Api2 lib8api2impl11api2;
        lib8api2impl11api2.doSomething();
        Lib8Api2Impl11Api3 lib8api2impl11api3;
        lib8api2impl11api3.doSomething();
        visited = 1;
    }
}

