// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl8api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl8api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl8api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl8api24(int a, int b) {
    return a + b;
}

int Lib17CoreImpl8Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl8Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl8Api2" << std::endl;
        Lib17CoreImpl8Impl lib17coreimpl8impl;
        lib17coreimpl8impl.doSomething();
        Lib17CoreImpl9Api1 lib17coreimpl9api1;
        lib17coreimpl9api1.doSomething();
        Lib17CoreImpl9Api2 lib17coreimpl9api2;
        lib17coreimpl9api2.doSomething();
        Lib17CoreImpl9Api3 lib17coreimpl9api3;
        lib17coreimpl9api3.doSomething();
        visited = 1;
    }
}

