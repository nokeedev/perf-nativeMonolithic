// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl26api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl26api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl26api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl26api14(int a, int b) {
    return a + b;
}

int Lib17CoreImpl26Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl26Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl26Api1" << std::endl;
        Lib17CoreImpl27Api1 lib17coreimpl27api1;
        lib17coreimpl27api1.doSomething();
        Lib17CoreImpl26Impl lib17coreimpl26impl;
        lib17coreimpl26impl.doSomething();
        Lib17CoreImpl27Api2 lib17coreimpl27api2;
        lib17coreimpl27api2.doSomething();
        Lib17CoreImpl27Api3 lib17coreimpl27api3;
        lib17coreimpl27api3.doSomething();
        visited = 1;
    }
}

