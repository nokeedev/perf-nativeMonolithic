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
int lib1api3impl29impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl29impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl29impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl29impl4(int a, int b) {
    return a + b;
}

int Lib1Api3Impl29Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api3Impl29Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api3Impl29Impl" << std::endl;
        Lib1Impl lib1impl;
        lib1impl.doSomething();
        Lib2Api1 lib2api1;
        lib2api1.doSomething();
        Lib2Api2 lib2api2;
        lib2api2.doSomething();
        Lib2Api3 lib2api3;
        lib2api3.doSomething();
        Lib1Api3Impl29Core1 lib1api3impl29core1;
        lib1api3impl29core1.doSomething();
        Lib1Api3Impl29Core2 lib1api3impl29core2;
        lib1api3impl29core2.doSomething();
        Lib1Api3Impl30Api1 lib1api3impl30api1;
        lib1api3impl30api1.doSomething();
        Lib1Api3Impl30Api2 lib1api3impl30api2;
        lib1api3impl30api2.doSomething();
        Lib1Api3Impl30Api3 lib1api3impl30api3;
        lib1api3impl30api3.doSomething();
        visited = 1;
    }
}

