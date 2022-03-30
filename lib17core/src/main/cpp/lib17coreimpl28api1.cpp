// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl28api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl28api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl28api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl28api14(int a, int b) {
    return a + b;
}

int Lib17CoreImpl28Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl28Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl28Api1" << std::endl;
        Lib17CoreImpl29Api1 lib17coreimpl29api1;
        lib17coreimpl29api1.doSomething();
        Lib17CoreImpl28Impl lib17coreimpl28impl;
        lib17coreimpl28impl.doSomething();
        Lib17CoreImpl29Api2 lib17coreimpl29api2;
        lib17coreimpl29api2.doSomething();
        Lib17CoreImpl29Api3 lib17coreimpl29api3;
        lib17coreimpl29api3.doSomething();
        visited = 1;
    }
}

