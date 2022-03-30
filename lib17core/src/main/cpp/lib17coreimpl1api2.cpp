// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl1api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl1api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl1api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl1api24(int a, int b) {
    return a + b;
}

int Lib17CoreImpl1Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl1Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl1Api2" << std::endl;
        Lib17CoreImpl1Impl lib17coreimpl1impl;
        lib17coreimpl1impl.doSomething();
        Lib17CoreImpl2Api1 lib17coreimpl2api1;
        lib17coreimpl2api1.doSomething();
        Lib17CoreImpl2Api2 lib17coreimpl2api2;
        lib17coreimpl2api2.doSomething();
        Lib17CoreImpl2Api3 lib17coreimpl2api3;
        lib17coreimpl2api3.doSomething();
        visited = 1;
    }
}

