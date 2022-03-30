// GENERATED SOURCE FILE

#include "lib7api1_private.h"
#include "lib7api1_impl.h"
#include "lib8api1.h"
#include "lib7impl.h"
#include "lib8api2.h"
#include "lib8api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7api1impl2api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api1impl2api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api1impl2api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7api1impl2api34(int a, int b) {
    return a + b;
}

int Lib7Api1Impl2Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib7Api1Impl2Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Api1Impl2Api3" << std::endl;
        Lib8Api1 lib8api1;
        lib8api1.doSomething();
        Lib7Impl lib7impl;
        lib7impl.doSomething();
        Lib8Api2 lib8api2;
        lib8api2.doSomething();
        Lib8Api3 lib8api3;
        lib8api3.doSomething();
        Lib7Api1Impl2Impl lib7api1impl2impl;
        lib7api1impl2impl.doSomething();
        Lib7Api1Impl3Api1 lib7api1impl3api1;
        lib7api1impl3api1.doSomething();
        Lib7Api1Impl3Api2 lib7api1impl3api2;
        lib7api1impl3api2.doSomething();
        Lib7Api1Impl3Api3 lib7api1impl3api3;
        lib7api1impl3api3.doSomething();
        visited = 1;
    }
}

