// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl7api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl7api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl7api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl7api34(int a, int b) {
    return a + b;
}

int Lib17CoreImpl7Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl7Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl7Api3" << std::endl;
        Lib17CoreImpl7Impl lib17coreimpl7impl;
        lib17coreimpl7impl.doSomething();
        Lib17CoreImpl8Api1 lib17coreimpl8api1;
        lib17coreimpl8api1.doSomething();
        Lib17CoreImpl8Api2 lib17coreimpl8api2;
        lib17coreimpl8api2.doSomething();
        Lib17CoreImpl8Api3 lib17coreimpl8api3;
        lib17coreimpl8api3.doSomething();
        visited = 1;
    }
}

