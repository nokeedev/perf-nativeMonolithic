// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl2api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl2api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl2api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl2api14(int a, int b) {
    return a + b;
}

int Lib17CoreImpl2Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl2Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl2Api1" << std::endl;
        Lib17CoreImpl3Api1 lib17coreimpl3api1;
        lib17coreimpl3api1.doSomething();
        Lib17CoreImpl2Impl lib17coreimpl2impl;
        lib17coreimpl2impl.doSomething();
        Lib17CoreImpl3Api2 lib17coreimpl3api2;
        lib17coreimpl3api2.doSomething();
        Lib17CoreImpl3Api3 lib17coreimpl3api3;
        lib17coreimpl3api3.doSomething();
        visited = 1;
    }
}

