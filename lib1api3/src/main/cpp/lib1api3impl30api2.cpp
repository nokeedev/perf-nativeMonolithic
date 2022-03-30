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
int lib1api3impl30api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl30api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl30api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl30api24(int a, int b) {
    return a + b;
}

int Lib1Api3Impl30Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api3Impl30Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api3Impl30Api2" << std::endl;
        Lib1Impl lib1impl;
        lib1impl.doSomething();
        Lib2Api1 lib2api1;
        lib2api1.doSomething();
        Lib2Api2 lib2api2;
        lib2api2.doSomething();
        Lib2Api3 lib2api3;
        lib2api3.doSomething();
        Lib1Api3Impl30Impl lib1api3impl30impl;
        lib1api3impl30impl.doSomething();
        Lib1Api3Impl31Api1 lib1api3impl31api1;
        lib1api3impl31api1.doSomething();
        Lib1Api3Impl31Api2 lib1api3impl31api2;
        lib1api3impl31api2.doSomething();
        Lib1Api3Impl31Api3 lib1api3impl31api3;
        lib1api3impl31api3.doSomething();
        visited = 1;
    }
}

