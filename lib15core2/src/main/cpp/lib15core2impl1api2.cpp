// GENERATED SOURCE FILE

#include "lib15core2_private.h"
#include "lib15core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core2impl1api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl1api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl1api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl1api24(int a, int b) {
    return a + b;
}

int Lib15Core2Impl1Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core2Impl1Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core2Impl1Api2" << std::endl;
        Lib15Core2Impl1Impl lib15core2impl1impl;
        lib15core2impl1impl.doSomething();
        Lib15Core2Impl2Api1 lib15core2impl2api1;
        lib15core2impl2api1.doSomething();
        Lib15Core2Impl2Api2 lib15core2impl2api2;
        lib15core2impl2api2.doSomething();
        Lib15Core2Impl2Api3 lib15core2impl2api3;
        lib15core2impl2api3.doSomething();
        visited = 1;
    }
}

