// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl23impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl23impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl23impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl23impl4(int a, int b) {
    return a + b;
}

int Lib17CoreImpl23Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl23Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl23Impl" << std::endl;
        Lib17CoreImpl23Core1 lib17coreimpl23core1;
        lib17coreimpl23core1.doSomething();
        Lib17CoreImpl23Core2 lib17coreimpl23core2;
        lib17coreimpl23core2.doSomething();
        Lib17CoreImpl24Api1 lib17coreimpl24api1;
        lib17coreimpl24api1.doSomething();
        Lib17CoreImpl24Api2 lib17coreimpl24api2;
        lib17coreimpl24api2.doSomething();
        Lib17CoreImpl24Api3 lib17coreimpl24api3;
        lib17coreimpl24api3.doSomething();
        visited = 1;
    }
}

