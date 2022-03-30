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
int lib1api2impl31impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api2impl31impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api2impl31impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api2impl31impl4(int a, int b) {
    return a + b;
}

int Lib1Api2Impl31Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api2Impl31Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api2Impl31Impl" << std::endl;
        Lib1Impl lib1impl;
        lib1impl.doSomething();
        Lib2Api1 lib2api1;
        lib2api1.doSomething();
        Lib2Api2 lib2api2;
        lib2api2.doSomething();
        Lib2Api3 lib2api3;
        lib2api3.doSomething();
        Lib1Api2Impl31Core1 lib1api2impl31core1;
        lib1api2impl31core1.doSomething();
        Lib1Api2Impl31Core2 lib1api2impl31core2;
        lib1api2impl31core2.doSomething();
        Lib1Api2Impl32Api1 lib1api2impl32api1;
        lib1api2impl32api1.doSomething();
        Lib1Api2Impl32Api2 lib1api2impl32api2;
        lib1api2impl32api2.doSomething();
        Lib1Api2Impl32Api3 lib1api2impl32api3;
        lib1api2impl32api3.doSomething();
        visited = 1;
    }
}

