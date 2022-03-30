// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl13impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl13impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl13impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl13impl4(int a, int b) {
    return a + b;
}

int Lib17CoreImpl13Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl13Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl13Impl" << std::endl;
        Lib17CoreImpl13Core1 lib17coreimpl13core1;
        lib17coreimpl13core1.doSomething();
        Lib17CoreImpl13Core2 lib17coreimpl13core2;
        lib17coreimpl13core2.doSomething();
        Lib17CoreImpl14Api1 lib17coreimpl14api1;
        lib17coreimpl14api1.doSomething();
        Lib17CoreImpl14Api2 lib17coreimpl14api2;
        lib17coreimpl14api2.doSomething();
        Lib17CoreImpl14Api3 lib17coreimpl14api3;
        lib17coreimpl14api3.doSomething();
        visited = 1;
    }
}

