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
int lib1api2impl32api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api2impl32api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api2impl32api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api2impl32api34(int a, int b) {
    return a + b;
}

int Lib1Api2Impl32Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api2Impl32Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api2Impl32Api3" << std::endl;
        Lib1Impl lib1impl;
        lib1impl.doSomething();
        Lib2Api1 lib2api1;
        lib2api1.doSomething();
        Lib2Api2 lib2api2;
        lib2api2.doSomething();
        Lib2Api3 lib2api3;
        lib2api3.doSomething();
        Lib1Api2Impl32Impl lib1api2impl32impl;
        lib1api2impl32impl.doSomething();
        Lib1Api2Impl33Api1 lib1api2impl33api1;
        lib1api2impl33api1.doSomething();
        Lib1Api2Impl33Api2 lib1api2impl33api2;
        lib1api2impl33api2.doSomething();
        Lib1Api2Impl33Api3 lib1api2impl33api3;
        lib1api2impl33api3.doSomething();
        visited = 1;
    }
}

