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
int lib1api2impl29impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api2impl29impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api2impl29impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api2impl29impl4(int a, int b) {
    return a + b;
}

int Lib1Api2Impl29Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api2Impl29Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api2Impl29Impl" << std::endl;
        Lib1Impl lib1impl;
        lib1impl.doSomething();
        Lib2Api1 lib2api1;
        lib2api1.doSomething();
        Lib2Api2 lib2api2;
        lib2api2.doSomething();
        Lib2Api3 lib2api3;
        lib2api3.doSomething();
        Lib1Api2Impl29Core1 lib1api2impl29core1;
        lib1api2impl29core1.doSomething();
        Lib1Api2Impl29Core2 lib1api2impl29core2;
        lib1api2impl29core2.doSomething();
        Lib1Api2Impl30Api1 lib1api2impl30api1;
        lib1api2impl30api1.doSomething();
        Lib1Api2Impl30Api2 lib1api2impl30api2;
        lib1api2impl30api2.doSomething();
        Lib1Api2Impl30Api3 lib1api2impl30api3;
        lib1api2impl30api3.doSomething();
        visited = 1;
    }
}

