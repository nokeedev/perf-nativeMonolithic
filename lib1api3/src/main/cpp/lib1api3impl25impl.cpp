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
int lib1api3impl25impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl25impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl25impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl25impl4(int a, int b) {
    return a + b;
}

int Lib1Api3Impl25Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api3Impl25Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api3Impl25Impl" << std::endl;
        Lib1Impl lib1impl;
        lib1impl.doSomething();
        Lib2Api1 lib2api1;
        lib2api1.doSomething();
        Lib2Api2 lib2api2;
        lib2api2.doSomething();
        Lib2Api3 lib2api3;
        lib2api3.doSomething();
        Lib1Api3Impl25Core1 lib1api3impl25core1;
        lib1api3impl25core1.doSomething();
        Lib1Api3Impl25Core2 lib1api3impl25core2;
        lib1api3impl25core2.doSomething();
        Lib1Api3Impl26Api1 lib1api3impl26api1;
        lib1api3impl26api1.doSomething();
        Lib1Api3Impl26Api2 lib1api3impl26api2;
        lib1api3impl26api2.doSomething();
        Lib1Api3Impl26Api3 lib1api3impl26api3;
        lib1api3impl26api3.doSomething();
        visited = 1;
    }
}

