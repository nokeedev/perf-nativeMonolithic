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
int lib1api3impl28impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl28impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl28impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl28impl4(int a, int b) {
    return a + b;
}

int Lib1Api3Impl28Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api3Impl28Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api3Impl28Impl" << std::endl;
        Lib1Impl lib1impl;
        lib1impl.doSomething();
        Lib2Api1 lib2api1;
        lib2api1.doSomething();
        Lib2Api2 lib2api2;
        lib2api2.doSomething();
        Lib2Api3 lib2api3;
        lib2api3.doSomething();
        Lib1Api3Impl28Core1 lib1api3impl28core1;
        lib1api3impl28core1.doSomething();
        Lib1Api3Impl28Core2 lib1api3impl28core2;
        lib1api3impl28core2.doSomething();
        Lib1Api3Impl29Api1 lib1api3impl29api1;
        lib1api3impl29api1.doSomething();
        Lib1Api3Impl29Api2 lib1api3impl29api2;
        lib1api3impl29api2.doSomething();
        Lib1Api3Impl29Api3 lib1api3impl29api3;
        lib1api3impl29api3.doSomething();
        visited = 1;
    }
}

