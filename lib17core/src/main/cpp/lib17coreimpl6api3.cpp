// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl6api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl6api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl6api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl6api34(int a, int b) {
    return a + b;
}

int Lib17CoreImpl6Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl6Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl6Api3" << std::endl;
        Lib17CoreImpl6Impl lib17coreimpl6impl;
        lib17coreimpl6impl.doSomething();
        Lib17CoreImpl7Api1 lib17coreimpl7api1;
        lib17coreimpl7api1.doSomething();
        Lib17CoreImpl7Api2 lib17coreimpl7api2;
        lib17coreimpl7api2.doSomething();
        Lib17CoreImpl7Api3 lib17coreimpl7api3;
        lib17coreimpl7api3.doSomething();
        visited = 1;
    }
}

