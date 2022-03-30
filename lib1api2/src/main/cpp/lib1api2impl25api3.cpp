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
int lib1api2impl25api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api2impl25api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api2impl25api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api2impl25api34(int a, int b) {
    return a + b;
}

int Lib1Api2Impl25Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api2Impl25Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api2Impl25Api3" << std::endl;
        Lib1Impl lib1impl;
        lib1impl.doSomething();
        Lib2Api1 lib2api1;
        lib2api1.doSomething();
        Lib2Api2 lib2api2;
        lib2api2.doSomething();
        Lib2Api3 lib2api3;
        lib2api3.doSomething();
        Lib1Api2Impl25Impl lib1api2impl25impl;
        lib1api2impl25impl.doSomething();
        Lib1Api2Impl26Api1 lib1api2impl26api1;
        lib1api2impl26api1.doSomething();
        Lib1Api2Impl26Api2 lib1api2impl26api2;
        lib1api2impl26api2.doSomething();
        Lib1Api2Impl26Api3 lib1api2impl26api3;
        lib1api2impl26api3.doSomething();
        visited = 1;
    }
}

