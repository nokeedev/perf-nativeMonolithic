// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl25api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl25api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl25api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl25api34(int a, int b) {
    return a + b;
}

int Lib17CoreImpl25Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl25Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl25Api3" << std::endl;
        Lib17CoreImpl25Impl lib17coreimpl25impl;
        lib17coreimpl25impl.doSomething();
        Lib17CoreImpl26Api1 lib17coreimpl26api1;
        lib17coreimpl26api1.doSomething();
        Lib17CoreImpl26Api2 lib17coreimpl26api2;
        lib17coreimpl26api2.doSomething();
        Lib17CoreImpl26Api3 lib17coreimpl26api3;
        lib17coreimpl26api3.doSomething();
        visited = 1;
    }
}

