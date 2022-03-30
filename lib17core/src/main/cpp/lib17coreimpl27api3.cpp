// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl27api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl27api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl27api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl27api34(int a, int b) {
    return a + b;
}

int Lib17CoreImpl27Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl27Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl27Api3" << std::endl;
        Lib17CoreImpl27Impl lib17coreimpl27impl;
        lib17coreimpl27impl.doSomething();
        Lib17CoreImpl28Api1 lib17coreimpl28api1;
        lib17coreimpl28api1.doSomething();
        Lib17CoreImpl28Api2 lib17coreimpl28api2;
        lib17coreimpl28api2.doSomething();
        Lib17CoreImpl28Api3 lib17coreimpl28api3;
        lib17coreimpl28api3.doSomething();
        visited = 1;
    }
}

