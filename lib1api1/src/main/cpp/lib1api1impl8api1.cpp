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
int lib1api1impl8api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api1impl8api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api1impl8api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api1impl8api14(int a, int b) {
    return a + b;
}

int Lib1Api1Impl8Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api1Impl8Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api1Impl8Api1" << std::endl;
        Lib2Api1 lib2api1;
        lib2api1.doSomething();
        Lib1Impl lib1impl;
        lib1impl.doSomething();
        Lib2Api2 lib2api2;
        lib2api2.doSomething();
        Lib2Api3 lib2api3;
        lib2api3.doSomething();
        Lib1Api1Impl9Api1 lib1api1impl9api1;
        lib1api1impl9api1.doSomething();
        Lib1Api1Impl8Impl lib1api1impl8impl;
        lib1api1impl8impl.doSomething();
        Lib1Api1Impl9Api2 lib1api1impl9api2;
        lib1api1impl9api2.doSomething();
        Lib1Api1Impl9Api3 lib1api1impl9api3;
        lib1api1impl9api3.doSomething();
        visited = 1;
    }
}

