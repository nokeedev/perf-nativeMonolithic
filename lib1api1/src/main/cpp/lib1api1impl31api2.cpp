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
int lib1api1impl31api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api1impl31api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api1impl31api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api1impl31api24(int a, int b) {
    return a + b;
}

int Lib1Api1Impl31Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api1Impl31Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api1Impl31Api2" << std::endl;
        Lib2Api1 lib2api1;
        lib2api1.doSomething();
        Lib1Impl lib1impl;
        lib1impl.doSomething();
        Lib2Api2 lib2api2;
        lib2api2.doSomething();
        Lib2Api3 lib2api3;
        lib2api3.doSomething();
        Lib1Api1Impl31Impl lib1api1impl31impl;
        lib1api1impl31impl.doSomething();
        Lib1Api1Impl32Api1 lib1api1impl32api1;
        lib1api1impl32api1.doSomething();
        Lib1Api1Impl32Api2 lib1api1impl32api2;
        lib1api1impl32api2.doSomething();
        Lib1Api1Impl32Api3 lib1api1impl32api3;
        lib1api1impl32api3.doSomething();
        visited = 1;
    }
}

