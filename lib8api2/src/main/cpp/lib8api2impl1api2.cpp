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
int lib8api2impl1api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api2impl1api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api2impl1api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api2impl1api24(int a, int b) {
    return a + b;
}

int Lib8Api2Impl1Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib8Api2Impl1Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Api2Impl1Api2" << std::endl;
        Lib8Impl lib8impl;
        lib8impl.doSomething();
        Lib9Api1 lib9api1;
        lib9api1.doSomething();
        Lib9Api2 lib9api2;
        lib9api2.doSomething();
        Lib9Api3 lib9api3;
        lib9api3.doSomething();
        Lib8Api2Impl1Impl lib8api2impl1impl;
        lib8api2impl1impl.doSomething();
        Lib8Api2Impl2Api1 lib8api2impl2api1;
        lib8api2impl2api1.doSomething();
        Lib8Api2Impl2Api2 lib8api2impl2api2;
        lib8api2impl2api2.doSomething();
        Lib8Api2Impl2Api3 lib8api2impl2api3;
        lib8api2impl2api3.doSomething();
        visited = 1;
    }
}

