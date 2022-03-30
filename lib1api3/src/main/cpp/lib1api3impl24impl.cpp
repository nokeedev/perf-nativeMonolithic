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
int lib1api3impl24impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl24impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl24impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl24impl4(int a, int b) {
    return a + b;
}

int Lib1Api3Impl24Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api3Impl24Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api3Impl24Impl" << std::endl;
        Lib1Impl lib1impl;
        lib1impl.doSomething();
        Lib2Api1 lib2api1;
        lib2api1.doSomething();
        Lib2Api2 lib2api2;
        lib2api2.doSomething();
        Lib2Api3 lib2api3;
        lib2api3.doSomething();
        Lib1Api3Impl24Core1 lib1api3impl24core1;
        lib1api3impl24core1.doSomething();
        Lib1Api3Impl24Core2 lib1api3impl24core2;
        lib1api3impl24core2.doSomething();
        Lib1Api3Impl25Api1 lib1api3impl25api1;
        lib1api3impl25api1.doSomething();
        Lib1Api3Impl25Api2 lib1api3impl25api2;
        lib1api3impl25api2.doSomething();
        Lib1Api3Impl25Api3 lib1api3impl25api3;
        lib1api3impl25api3.doSomething();
        visited = 1;
    }
}

