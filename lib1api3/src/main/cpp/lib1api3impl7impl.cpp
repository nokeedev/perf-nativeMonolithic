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
int lib1api3impl7impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl7impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl7impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl7impl4(int a, int b) {
    return a + b;
}

int Lib1Api3Impl7Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api3Impl7Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api3Impl7Impl" << std::endl;
        Lib1Impl lib1impl;
        lib1impl.doSomething();
        Lib2Api1 lib2api1;
        lib2api1.doSomething();
        Lib2Api2 lib2api2;
        lib2api2.doSomething();
        Lib2Api3 lib2api3;
        lib2api3.doSomething();
        Lib1Api3Impl7Core1 lib1api3impl7core1;
        lib1api3impl7core1.doSomething();
        Lib1Api3Impl7Core2 lib1api3impl7core2;
        lib1api3impl7core2.doSomething();
        Lib1Api3Impl8Api1 lib1api3impl8api1;
        lib1api3impl8api1.doSomething();
        Lib1Api3Impl8Api2 lib1api3impl8api2;
        lib1api3impl8api2.doSomething();
        Lib1Api3Impl8Api3 lib1api3impl8api3;
        lib1api3impl8api3.doSomething();
        visited = 1;
    }
}

