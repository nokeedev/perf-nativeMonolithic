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
int lib1api3impl9api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl9api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl9api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl9api14(int a, int b) {
    return a + b;
}

int Lib1Api3Impl9Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api3Impl9Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api3Impl9Api1" << std::endl;
        Lib1Impl lib1impl;
        lib1impl.doSomething();
        Lib2Api1 lib2api1;
        lib2api1.doSomething();
        Lib2Api2 lib2api2;
        lib2api2.doSomething();
        Lib2Api3 lib2api3;
        lib2api3.doSomething();
        Lib1Api3Impl10Api1 lib1api3impl10api1;
        lib1api3impl10api1.doSomething();
        Lib1Api3Impl9Impl lib1api3impl9impl;
        lib1api3impl9impl.doSomething();
        Lib1Api3Impl10Api2 lib1api3impl10api2;
        lib1api3impl10api2.doSomething();
        Lib1Api3Impl10Api3 lib1api3impl10api3;
        lib1api3impl10api3.doSomething();
        visited = 1;
    }
}

