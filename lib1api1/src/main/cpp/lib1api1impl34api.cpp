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
int lib1api1impl34api1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api1impl34api2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api1impl34api3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib1api1impl34api4(int a, int b) {
    return a + b;
}

int Lib1Api1Impl34Api::visited = 0;

/*
 * Here is a function.
 */
void Lib1Api1Impl34Api::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib1Api1Impl34Api" << std::endl;
        Lib2Api1 lib2api1;
        lib2api1.doSomething();
        Lib1Impl lib1impl;
        lib1impl.doSomething();
        Lib2Api2 lib2api2;
        lib2api2.doSomething();
        Lib2Api3 lib2api3;
        lib2api3.doSomething();
        Lib1Api1Impl34Core lib1api1impl34core;
        lib1api1impl34core.doSomething();
        visited = 1;
    }
}

