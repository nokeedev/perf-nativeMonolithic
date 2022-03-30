// GENERATED SOURCE FILE

#include "lib15core2_private.h"
#include "lib15core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15core2impl1api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl1api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl1api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15core2impl1api14(int a, int b) {
    return a + b;
}

int Lib15Core2Impl1Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib15Core2Impl1Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Core2Impl1Api1" << std::endl;
        Lib15Core2Impl2Api1 lib15core2impl2api1;
        lib15core2impl2api1.doSomething();
        Lib15Core2Impl1Impl lib15core2impl1impl;
        lib15core2impl1impl.doSomething();
        Lib15Core2Impl2Api2 lib15core2impl2api2;
        lib15core2impl2api2.doSomething();
        Lib15Core2Impl2Api3 lib15core2impl2api3;
        lib15core2impl2api3.doSomething();
        visited = 1;
    }
}

