// GENERATED SOURCE FILE

#include "lib13core2_private.h"
#include "lib13core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13core2impl1api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl1api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl1api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13core2impl1api34(int a, int b) {
    return a + b;
}

int Lib13Core2Impl1Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib13Core2Impl1Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Core2Impl1Api3" << std::endl;
        Lib13Core2Impl1Impl lib13core2impl1impl;
        lib13core2impl1impl.doSomething();
        Lib13Core2Impl2Api1 lib13core2impl2api1;
        lib13core2impl2api1.doSomething();
        Lib13Core2Impl2Api2 lib13core2impl2api2;
        lib13core2impl2api2.doSomething();
        Lib13Core2Impl2Api3 lib13core2impl2api3;
        lib13core2impl2api3.doSomething();
        visited = 1;
    }
}

