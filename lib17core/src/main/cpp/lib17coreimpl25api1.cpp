// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl25api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl25api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl25api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl25api14(int a, int b) {
    return a + b;
}

int Lib17CoreImpl25Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl25Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl25Api1" << std::endl;
        Lib17CoreImpl26Api1 lib17coreimpl26api1;
        lib17coreimpl26api1.doSomething();
        Lib17CoreImpl25Impl lib17coreimpl25impl;
        lib17coreimpl25impl.doSomething();
        Lib17CoreImpl26Api2 lib17coreimpl26api2;
        lib17coreimpl26api2.doSomething();
        Lib17CoreImpl26Api3 lib17coreimpl26api3;
        lib17coreimpl26api3.doSomething();
        visited = 1;
    }
}

