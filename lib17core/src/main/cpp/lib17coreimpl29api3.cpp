// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl29api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl29api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl29api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl29api34(int a, int b) {
    return a + b;
}

int Lib17CoreImpl29Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl29Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl29Api3" << std::endl;
        Lib17CoreImpl29Impl lib17coreimpl29impl;
        lib17coreimpl29impl.doSomething();
        Lib17CoreImpl30Api1 lib17coreimpl30api1;
        lib17coreimpl30api1.doSomething();
        Lib17CoreImpl30Api2 lib17coreimpl30api2;
        lib17coreimpl30api2.doSomething();
        Lib17CoreImpl30Api3 lib17coreimpl30api3;
        lib17coreimpl30api3.doSomething();
        visited = 1;
    }
}

