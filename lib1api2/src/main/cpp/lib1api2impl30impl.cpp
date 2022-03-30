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
int lib1api2impl30impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api2impl30impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api2impl30impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api2impl30impl4(int a, int b) {
    return a + b;
}

int Lib1Api2Impl30Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api2Impl30Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api2Impl30Impl" << std::endl;
        Lib1Impl lib1impl;
        lib1impl.doSomething();
        Lib2Api1 lib2api1;
        lib2api1.doSomething();
        Lib2Api2 lib2api2;
        lib2api2.doSomething();
        Lib2Api3 lib2api3;
        lib2api3.doSomething();
        Lib1Api2Impl30Core1 lib1api2impl30core1;
        lib1api2impl30core1.doSomething();
        Lib1Api2Impl30Core2 lib1api2impl30core2;
        lib1api2impl30core2.doSomething();
        Lib1Api2Impl31Api1 lib1api2impl31api1;
        lib1api2impl31api1.doSomething();
        Lib1Api2Impl31Api2 lib1api2impl31api2;
        lib1api2impl31api2.doSomething();
        Lib1Api2Impl31Api3 lib1api2impl31api3;
        lib1api2impl31api3.doSomething();
        visited = 1;
    }
}

