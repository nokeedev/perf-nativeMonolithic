// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl20api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl20api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl20api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl20api34(int a, int b) {
    return a + b;
}

int Lib17CoreImpl20Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl20Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl20Api3" << std::endl;
        Lib17CoreImpl20Impl lib17coreimpl20impl;
        lib17coreimpl20impl.doSomething();
        Lib17CoreImpl21Api1 lib17coreimpl21api1;
        lib17coreimpl21api1.doSomething();
        Lib17CoreImpl21Api2 lib17coreimpl21api2;
        lib17coreimpl21api2.doSomething();
        Lib17CoreImpl21Api3 lib17coreimpl21api3;
        lib17coreimpl21api3.doSomething();
        visited = 1;
    }
}

