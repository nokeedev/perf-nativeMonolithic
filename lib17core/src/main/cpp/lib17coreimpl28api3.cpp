// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl28api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl28api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl28api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl28api34(int a, int b) {
    return a + b;
}

int Lib17CoreImpl28Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl28Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl28Api3" << std::endl;
        Lib17CoreImpl28Impl lib17coreimpl28impl;
        lib17coreimpl28impl.doSomething();
        Lib17CoreImpl29Api1 lib17coreimpl29api1;
        lib17coreimpl29api1.doSomething();
        Lib17CoreImpl29Api2 lib17coreimpl29api2;
        lib17coreimpl29api2.doSomething();
        Lib17CoreImpl29Api3 lib17coreimpl29api3;
        lib17coreimpl29api3.doSomething();
        visited = 1;
    }
}

