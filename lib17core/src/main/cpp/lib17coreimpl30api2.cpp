// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl30api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl30api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl30api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl30api24(int a, int b) {
    return a + b;
}

int Lib17CoreImpl30Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl30Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl30Api2" << std::endl;
        Lib17CoreImpl30Impl lib17coreimpl30impl;
        lib17coreimpl30impl.doSomething();
        Lib17CoreImpl31Api1 lib17coreimpl31api1;
        lib17coreimpl31api1.doSomething();
        Lib17CoreImpl31Api2 lib17coreimpl31api2;
        lib17coreimpl31api2.doSomething();
        Lib17CoreImpl31Api3 lib17coreimpl31api3;
        lib17coreimpl31api3.doSomething();
        visited = 1;
    }
}

