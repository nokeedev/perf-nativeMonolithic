// GENERATED SOURCE FILE

#include "lib4core2_private.h"
#include "lib4core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4core2impl1api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl1api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl1api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4core2impl1api34(int a, int b) {
    return a + b;
}

int Lib4Core2Impl1Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib4Core2Impl1Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Core2Impl1Api3" << std::endl;
        Lib4Core2Impl1Impl lib4core2impl1impl;
        lib4core2impl1impl.doSomething();
        Lib4Core2Impl2Api1 lib4core2impl2api1;
        lib4core2impl2api1.doSomething();
        Lib4Core2Impl2Api2 lib4core2impl2api2;
        lib4core2impl2api2.doSomething();
        Lib4Core2Impl2Api3 lib4core2impl2api3;
        lib4core2impl2api3.doSomething();
        visited = 1;
    }
}

