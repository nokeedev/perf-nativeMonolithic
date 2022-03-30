// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl12api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl12api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl12api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl12api14(int a, int b) {
    return a + b;
}

int Lib17CoreImpl12Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl12Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl12Api1" << std::endl;
        Lib17CoreImpl13Api1 lib17coreimpl13api1;
        lib17coreimpl13api1.doSomething();
        Lib17CoreImpl12Impl lib17coreimpl12impl;
        lib17coreimpl12impl.doSomething();
        Lib17CoreImpl13Api2 lib17coreimpl13api2;
        lib17coreimpl13api2.doSomething();
        Lib17CoreImpl13Api3 lib17coreimpl13api3;
        lib17coreimpl13api3.doSomething();
        visited = 1;
    }
}

