// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl11api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl11api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl11api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl11api14(int a, int b) {
    return a + b;
}

int Lib17CoreImpl11Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl11Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl11Api1" << std::endl;
        Lib17CoreImpl12Api1 lib17coreimpl12api1;
        lib17coreimpl12api1.doSomething();
        Lib17CoreImpl11Impl lib17coreimpl11impl;
        lib17coreimpl11impl.doSomething();
        Lib17CoreImpl12Api2 lib17coreimpl12api2;
        lib17coreimpl12api2.doSomething();
        Lib17CoreImpl12Api3 lib17coreimpl12api3;
        lib17coreimpl12api3.doSomething();
        visited = 1;
    }
}

