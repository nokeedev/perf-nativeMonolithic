// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl32api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl32api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl32api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl32api14(int a, int b) {
    return a + b;
}

int Lib17CoreImpl32Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl32Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl32Api1" << std::endl;
        Lib17CoreImpl33Api1 lib17coreimpl33api1;
        lib17coreimpl33api1.doSomething();
        Lib17CoreImpl32Impl lib17coreimpl32impl;
        lib17coreimpl32impl.doSomething();
        Lib17CoreImpl33Api2 lib17coreimpl33api2;
        lib17coreimpl33api2.doSomething();
        Lib17CoreImpl33Api3 lib17coreimpl33api3;
        lib17coreimpl33api3.doSomething();
        visited = 1;
    }
}

