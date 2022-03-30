// GENERATED SOURCE FILE

#include "lib1api2_private.h"
#include "lib1api2_impl.h"
#include "lib1impl.h"
#include "lib2api1.h"
#include "lib2api2.h"
#include "lib2api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1api2impl1api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api2impl1api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api2impl1api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api2impl1api14(int a, int b) {
    return a + b;
}

int Lib1Api2Impl1Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api2Impl1Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api2Impl1Api1" << std::endl;
        Lib1Impl lib1impl;
        lib1impl.doSomething();
        Lib2Api1 lib2api1;
        lib2api1.doSomething();
        Lib2Api2 lib2api2;
        lib2api2.doSomething();
        Lib2Api3 lib2api3;
        lib2api3.doSomething();
        Lib1Api2Impl2Api1 lib1api2impl2api1;
        lib1api2impl2api1.doSomething();
        Lib1Api2Impl1Impl lib1api2impl1impl;
        lib1api2impl1impl.doSomething();
        Lib1Api2Impl2Api2 lib1api2impl2api2;
        lib1api2impl2api2.doSomething();
        Lib1Api2Impl2Api3 lib1api2impl2api3;
        lib1api2impl2api3.doSomething();
        visited = 1;
    }
}

