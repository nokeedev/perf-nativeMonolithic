// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl6impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl6impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl6impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl6impl4(int a, int b) {
    return a + b;
}

int Lib17CoreImpl6Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl6Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl6Impl" << std::endl;
        Lib17CoreImpl6Core1 lib17coreimpl6core1;
        lib17coreimpl6core1.doSomething();
        Lib17CoreImpl6Core2 lib17coreimpl6core2;
        lib17coreimpl6core2.doSomething();
        Lib17CoreImpl7Api1 lib17coreimpl7api1;
        lib17coreimpl7api1.doSomething();
        Lib17CoreImpl7Api2 lib17coreimpl7api2;
        lib17coreimpl7api2.doSomething();
        Lib17CoreImpl7Api3 lib17coreimpl7api3;
        lib17coreimpl7api3.doSomething();
        visited = 1;
    }
}

