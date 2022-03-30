// GENERATED SOURCE FILE

#include "lib1api1_private.h"
#include "lib1api1_impl.h"
#include "lib2api1.h"
#include "lib1impl.h"
#include "lib2api2.h"
#include "lib2api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib1api1impl6api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api1impl6api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api1impl6api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api1impl6api24(int a, int b) {
    return a + b;
}

int Lib1Api1Impl6Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api1Impl6Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api1Impl6Api2" << std::endl;
        Lib2Api1 lib2api1;
        lib2api1.doSomething();
        Lib1Impl lib1impl;
        lib1impl.doSomething();
        Lib2Api2 lib2api2;
        lib2api2.doSomething();
        Lib2Api3 lib2api3;
        lib2api3.doSomething();
        Lib1Api1Impl6Impl lib1api1impl6impl;
        lib1api1impl6impl.doSomething();
        Lib1Api1Impl7Api1 lib1api1impl7api1;
        lib1api1impl7api1.doSomething();
        Lib1Api1Impl7Api2 lib1api1impl7api2;
        lib1api1impl7api2.doSomething();
        Lib1Api1Impl7Api3 lib1api1impl7api3;
        lib1api1impl7api3.doSomething();
        visited = 1;
    }
}

