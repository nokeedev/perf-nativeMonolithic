// GENERATED SOURCE FILE

#include "lib1api1_private.h"
#include "lib1api1_impl.h"
#include "lib2api1.h"
#include "lib1impl.h"
#include "lib2api2.h"
#include "lib2api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1api1impl13impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api1impl13impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api1impl13impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api1impl13impl4(int a, int b) {
    return a + b;
}

int Lib1Api1Impl13Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api1Impl13Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api1Impl13Impl" << std::endl;
        Lib2Api1 lib2api1;
        lib2api1.doSomething();
        Lib1Impl lib1impl;
        lib1impl.doSomething();
        Lib2Api2 lib2api2;
        lib2api2.doSomething();
        Lib2Api3 lib2api3;
        lib2api3.doSomething();
        Lib1Api1Impl13Core1 lib1api1impl13core1;
        lib1api1impl13core1.doSomething();
        Lib1Api1Impl13Core2 lib1api1impl13core2;
        lib1api1impl13core2.doSomething();
        Lib1Api1Impl14Api1 lib1api1impl14api1;
        lib1api1impl14api1.doSomething();
        Lib1Api1Impl14Api2 lib1api1impl14api2;
        lib1api1impl14api2.doSomething();
        Lib1Api1Impl14Api3 lib1api1impl14api3;
        lib1api1impl14api3.doSomething();
        visited = 1;
    }
}

