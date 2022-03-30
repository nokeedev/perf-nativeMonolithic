// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl23api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl23api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl23api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl23api34(int a, int b) {
    return a + b;
}

int Lib17CoreImpl23Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl23Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl23Api3" << std::endl;
        Lib17CoreImpl23Impl lib17coreimpl23impl;
        lib17coreimpl23impl.doSomething();
        Lib17CoreImpl24Api1 lib17coreimpl24api1;
        lib17coreimpl24api1.doSomething();
        Lib17CoreImpl24Api2 lib17coreimpl24api2;
        lib17coreimpl24api2.doSomething();
        Lib17CoreImpl24Api3 lib17coreimpl24api3;
        lib17coreimpl24api3.doSomething();
        visited = 1;
    }
}

