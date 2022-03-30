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
int lib1api2impl14impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api2impl14impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api2impl14impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api2impl14impl4(int a, int b) {
    return a + b;
}

int Lib1Api2Impl14Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api2Impl14Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api2Impl14Impl" << std::endl;
        Lib1Impl lib1impl;
        lib1impl.doSomething();
        Lib2Api1 lib2api1;
        lib2api1.doSomething();
        Lib2Api2 lib2api2;
        lib2api2.doSomething();
        Lib2Api3 lib2api3;
        lib2api3.doSomething();
        Lib1Api2Impl14Core1 lib1api2impl14core1;
        lib1api2impl14core1.doSomething();
        Lib1Api2Impl14Core2 lib1api2impl14core2;
        lib1api2impl14core2.doSomething();
        Lib1Api2Impl15Api1 lib1api2impl15api1;
        lib1api2impl15api1.doSomething();
        Lib1Api2Impl15Api2 lib1api2impl15api2;
        lib1api2impl15api2.doSomething();
        Lib1Api2Impl15Api3 lib1api2impl15api3;
        lib1api2impl15api3.doSomething();
        visited = 1;
    }
}

