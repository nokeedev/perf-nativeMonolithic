// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl24api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl24api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl24api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl24api24(int a, int b) {
    return a + b;
}

int Lib17CoreImpl24Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl24Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl24Api2" << std::endl;
        Lib17CoreImpl24Impl lib17coreimpl24impl;
        lib17coreimpl24impl.doSomething();
        Lib17CoreImpl25Api1 lib17coreimpl25api1;
        lib17coreimpl25api1.doSomething();
        Lib17CoreImpl25Api2 lib17coreimpl25api2;
        lib17coreimpl25api2.doSomething();
        Lib17CoreImpl25Api3 lib17coreimpl25api3;
        lib17coreimpl25api3.doSomething();
        visited = 1;
    }
}

