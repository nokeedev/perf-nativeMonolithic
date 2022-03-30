// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl7impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl7impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl7impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl7impl4(int a, int b) {
    return a + b;
}

int Lib17CoreImpl7Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl7Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl7Impl" << std::endl;
        Lib17CoreImpl7Core1 lib17coreimpl7core1;
        lib17coreimpl7core1.doSomething();
        Lib17CoreImpl7Core2 lib17coreimpl7core2;
        lib17coreimpl7core2.doSomething();
        Lib17CoreImpl8Api1 lib17coreimpl8api1;
        lib17coreimpl8api1.doSomething();
        Lib17CoreImpl8Api2 lib17coreimpl8api2;
        lib17coreimpl8api2.doSomething();
        Lib17CoreImpl8Api3 lib17coreimpl8api3;
        lib17coreimpl8api3.doSomething();
        visited = 1;
    }
}

