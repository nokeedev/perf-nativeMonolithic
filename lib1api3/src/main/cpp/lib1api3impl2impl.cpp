// GENERATED SOURCE FILE

#include "lib1api3_private.h"
#include "lib1api3_impl.h"
#include "lib1impl.h"
#include "lib2api1.h"
#include "lib2api2.h"
#include "lib2api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1api3impl2impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl2impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl2impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl2impl4(int a, int b) {
    return a + b;
}

int Lib1Api3Impl2Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api3Impl2Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api3Impl2Impl" << std::endl;
        Lib1Impl lib1impl;
        lib1impl.doSomething();
        Lib2Api1 lib2api1;
        lib2api1.doSomething();
        Lib2Api2 lib2api2;
        lib2api2.doSomething();
        Lib2Api3 lib2api3;
        lib2api3.doSomething();
        Lib1Api3Impl2Core1 lib1api3impl2core1;
        lib1api3impl2core1.doSomething();
        Lib1Api3Impl2Core2 lib1api3impl2core2;
        lib1api3impl2core2.doSomething();
        Lib1Api3Impl3Api1 lib1api3impl3api1;
        lib1api3impl3api1.doSomething();
        Lib1Api3Impl3Api2 lib1api3impl3api2;
        lib1api3impl3api2.doSomething();
        Lib1Api3Impl3Api3 lib1api3impl3api3;
        lib1api3impl3api3.doSomething();
        visited = 1;
    }
}

