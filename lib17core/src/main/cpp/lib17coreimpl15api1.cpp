// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl15api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl15api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl15api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl15api14(int a, int b) {
    return a + b;
}

int Lib17CoreImpl15Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl15Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl15Api1" << std::endl;
        Lib17CoreImpl16Api1 lib17coreimpl16api1;
        lib17coreimpl16api1.doSomething();
        Lib17CoreImpl15Impl lib17coreimpl15impl;
        lib17coreimpl15impl.doSomething();
        Lib17CoreImpl16Api2 lib17coreimpl16api2;
        lib17coreimpl16api2.doSomething();
        Lib17CoreImpl16Api3 lib17coreimpl16api3;
        lib17coreimpl16api3.doSomething();
        visited = 1;
    }
}

