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
int lib1api3impl20impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl20impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl20impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl20impl4(int a, int b) {
    return a + b;
}

int Lib1Api3Impl20Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api3Impl20Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api3Impl20Impl" << std::endl;
        Lib1Impl lib1impl;
        lib1impl.doSomething();
        Lib2Api1 lib2api1;
        lib2api1.doSomething();
        Lib2Api2 lib2api2;
        lib2api2.doSomething();
        Lib2Api3 lib2api3;
        lib2api3.doSomething();
        Lib1Api3Impl20Core1 lib1api3impl20core1;
        lib1api3impl20core1.doSomething();
        Lib1Api3Impl20Core2 lib1api3impl20core2;
        lib1api3impl20core2.doSomething();
        Lib1Api3Impl21Api1 lib1api3impl21api1;
        lib1api3impl21api1.doSomething();
        Lib1Api3Impl21Api2 lib1api3impl21api2;
        lib1api3impl21api2.doSomething();
        Lib1Api3Impl21Api3 lib1api3impl21api3;
        lib1api3impl21api3.doSomething();
        visited = 1;
    }
}
