// GENERATED SOURCE FILE

#include "lib2core2_private.h"
#include "lib2core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2core2impl1api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl1api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl1api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2core2impl1api14(int a, int b) {
    return a + b;
}

int Lib2Core2Impl1Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib2Core2Impl1Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Core2Impl1Api1" << std::endl;
        Lib2Core2Impl2Api1 lib2core2impl2api1;
        lib2core2impl2api1.doSomething();
        Lib2Core2Impl1Impl lib2core2impl1impl;
        lib2core2impl1impl.doSomething();
        Lib2Core2Impl2Api2 lib2core2impl2api2;
        lib2core2impl2api2.doSomething();
        Lib2Core2Impl2Api3 lib2core2impl2api3;
        lib2core2impl2api3.doSomething();
        visited = 1;
    }
}

