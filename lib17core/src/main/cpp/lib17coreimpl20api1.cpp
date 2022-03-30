// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl20api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl20api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl20api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl20api14(int a, int b) {
    return a + b;
}

int Lib17CoreImpl20Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl20Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl20Api1" << std::endl;
        Lib17CoreImpl21Api1 lib17coreimpl21api1;
        lib17coreimpl21api1.doSomething();
        Lib17CoreImpl20Impl lib17coreimpl20impl;
        lib17coreimpl20impl.doSomething();
        Lib17CoreImpl21Api2 lib17coreimpl21api2;
        lib17coreimpl21api2.doSomething();
        Lib17CoreImpl21Api3 lib17coreimpl21api3;
        lib17coreimpl21api3.doSomething();
        visited = 1;
    }
}

