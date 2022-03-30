// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl31api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl31api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl31api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl31api14(int a, int b) {
    return a + b;
}

int Lib17CoreImpl31Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl31Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl31Api1" << std::endl;
        Lib17CoreImpl32Api1 lib17coreimpl32api1;
        lib17coreimpl32api1.doSomething();
        Lib17CoreImpl31Impl lib17coreimpl31impl;
        lib17coreimpl31impl.doSomething();
        Lib17CoreImpl32Api2 lib17coreimpl32api2;
        lib17coreimpl32api2.doSomething();
        Lib17CoreImpl32Api3 lib17coreimpl32api3;
        lib17coreimpl32api3.doSomething();
        visited = 1;
    }
}

