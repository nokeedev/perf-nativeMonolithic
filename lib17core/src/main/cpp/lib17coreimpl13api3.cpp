// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl13api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl13api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl13api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl13api34(int a, int b) {
    return a + b;
}

int Lib17CoreImpl13Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl13Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl13Api3" << std::endl;
        Lib17CoreImpl13Impl lib17coreimpl13impl;
        lib17coreimpl13impl.doSomething();
        Lib17CoreImpl14Api1 lib17coreimpl14api1;
        lib17coreimpl14api1.doSomething();
        Lib17CoreImpl14Api2 lib17coreimpl14api2;
        lib17coreimpl14api2.doSomething();
        Lib17CoreImpl14Api3 lib17coreimpl14api3;
        lib17coreimpl14api3.doSomething();
        visited = 1;
    }
}

