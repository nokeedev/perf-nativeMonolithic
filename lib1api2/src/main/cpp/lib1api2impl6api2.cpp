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
int lib1api2impl6api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api2impl6api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api2impl6api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api2impl6api24(int a, int b) {
    return a + b;
}

int Lib1Api2Impl6Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api2Impl6Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api2Impl6Api2" << std::endl;
        Lib1Impl lib1impl;
        lib1impl.doSomething();
        Lib2Api1 lib2api1;
        lib2api1.doSomething();
        Lib2Api2 lib2api2;
        lib2api2.doSomething();
        Lib2Api3 lib2api3;
        lib2api3.doSomething();
        Lib1Api2Impl6Impl lib1api2impl6impl;
        lib1api2impl6impl.doSomething();
        Lib1Api2Impl7Api1 lib1api2impl7api1;
        lib1api2impl7api1.doSomething();
        Lib1Api2Impl7Api2 lib1api2impl7api2;
        lib1api2impl7api2.doSomething();
        Lib1Api2Impl7Api3 lib1api2impl7api3;
        lib1api2impl7api3.doSomething();
        visited = 1;
    }
}

