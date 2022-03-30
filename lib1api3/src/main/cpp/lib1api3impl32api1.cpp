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
int lib1api3impl32api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl32api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl32api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl32api14(int a, int b) {
    return a + b;
}

int Lib1Api3Impl32Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api3Impl32Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api3Impl32Api1" << std::endl;
        Lib1Impl lib1impl;
        lib1impl.doSomething();
        Lib2Api1 lib2api1;
        lib2api1.doSomething();
        Lib2Api2 lib2api2;
        lib2api2.doSomething();
        Lib2Api3 lib2api3;
        lib2api3.doSomething();
        Lib1Api3Impl33Api1 lib1api3impl33api1;
        lib1api3impl33api1.doSomething();
        Lib1Api3Impl32Impl lib1api3impl32impl;
        lib1api3impl32impl.doSomething();
        Lib1Api3Impl33Api2 lib1api3impl33api2;
        lib1api3impl33api2.doSomething();
        Lib1Api3Impl33Api3 lib1api3impl33api3;
        lib1api3impl33api3.doSomething();
        visited = 1;
    }
}

