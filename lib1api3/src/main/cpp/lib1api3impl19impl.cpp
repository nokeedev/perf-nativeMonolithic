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
int lib1api3impl19impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl19impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl19impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl19impl4(int a, int b) {
    return a + b;
}

int Lib1Api3Impl19Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api3Impl19Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api3Impl19Impl" << std::endl;
        Lib1Impl lib1impl;
        lib1impl.doSomething();
        Lib2Api1 lib2api1;
        lib2api1.doSomething();
        Lib2Api2 lib2api2;
        lib2api2.doSomething();
        Lib2Api3 lib2api3;
        lib2api3.doSomething();
        Lib1Api3Impl19Core1 lib1api3impl19core1;
        lib1api3impl19core1.doSomething();
        Lib1Api3Impl19Core2 lib1api3impl19core2;
        lib1api3impl19core2.doSomething();
        Lib1Api3Impl20Api1 lib1api3impl20api1;
        lib1api3impl20api1.doSomething();
        Lib1Api3Impl20Api2 lib1api3impl20api2;
        lib1api3impl20api2.doSomething();
        Lib1Api3Impl20Api3 lib1api3impl20api3;
        lib1api3impl20api3.doSomething();
        visited = 1;
    }
}

