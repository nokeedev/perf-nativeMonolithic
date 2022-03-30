// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl2api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl2api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl2api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl2api34(int a, int b) {
    return a + b;
}

int Lib17CoreImpl2Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl2Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl2Api3" << std::endl;
        Lib17CoreImpl2Impl lib17coreimpl2impl;
        lib17coreimpl2impl.doSomething();
        Lib17CoreImpl3Api1 lib17coreimpl3api1;
        lib17coreimpl3api1.doSomething();
        Lib17CoreImpl3Api2 lib17coreimpl3api2;
        lib17coreimpl3api2.doSomething();
        Lib17CoreImpl3Api3 lib17coreimpl3api3;
        lib17coreimpl3api3.doSomething();
        visited = 1;
    }
}

