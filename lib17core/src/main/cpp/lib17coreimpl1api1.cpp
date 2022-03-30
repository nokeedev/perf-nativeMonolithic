// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl1api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl1api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl1api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl1api14(int a, int b) {
    return a + b;
}

int Lib17CoreImpl1Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl1Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl1Api1" << std::endl;
        Lib17CoreImpl2Api1 lib17coreimpl2api1;
        lib17coreimpl2api1.doSomething();
        Lib17CoreImpl1Impl lib17coreimpl1impl;
        lib17coreimpl1impl.doSomething();
        Lib17CoreImpl2Api2 lib17coreimpl2api2;
        lib17coreimpl2api2.doSomething();
        Lib17CoreImpl2Api3 lib17coreimpl2api3;
        lib17coreimpl2api3.doSomething();
        visited = 1;
    }
}

