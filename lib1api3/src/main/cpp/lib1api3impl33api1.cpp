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
int lib1api3impl33api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl33api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl33api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api3impl33api14(int a, int b) {
    return a + b;
}

int Lib1Api3Impl33Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api3Impl33Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api3Impl33Api1" << std::endl;
        Lib1Impl lib1impl;
        lib1impl.doSomething();
        Lib2Api1 lib2api1;
        lib2api1.doSomething();
        Lib2Api2 lib2api2;
        lib2api2.doSomething();
        Lib2Api3 lib2api3;
        lib2api3.doSomething();
        Lib1Api3Impl34Api lib1api3impl34api;
        lib1api3impl34api.doSomething();
        Lib1Api3Impl33Impl lib1api3impl33impl;
        lib1api3impl33impl.doSomething();
        visited = 1;
    }
}

