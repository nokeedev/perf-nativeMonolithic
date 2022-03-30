// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl14api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl14api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl14api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl14api14(int a, int b) {
    return a + b;
}

int Lib17CoreImpl14Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl14Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl14Api1" << std::endl;
        Lib17CoreImpl15Api1 lib17coreimpl15api1;
        lib17coreimpl15api1.doSomething();
        Lib17CoreImpl14Impl lib17coreimpl14impl;
        lib17coreimpl14impl.doSomething();
        Lib17CoreImpl15Api2 lib17coreimpl15api2;
        lib17coreimpl15api2.doSomething();
        Lib17CoreImpl15Api3 lib17coreimpl15api3;
        lib17coreimpl15api3.doSomething();
        visited = 1;
    }
}

