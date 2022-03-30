// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl7api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl7api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl7api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl7api14(int a, int b) {
    return a + b;
}

int Lib17CoreImpl7Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl7Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl7Api1" << std::endl;
        Lib17CoreImpl8Api1 lib17coreimpl8api1;
        lib17coreimpl8api1.doSomething();
        Lib17CoreImpl7Impl lib17coreimpl7impl;
        lib17coreimpl7impl.doSomething();
        Lib17CoreImpl8Api2 lib17coreimpl8api2;
        lib17coreimpl8api2.doSomething();
        Lib17CoreImpl8Api3 lib17coreimpl8api3;
        lib17coreimpl8api3.doSomething();
        visited = 1;
    }
}

