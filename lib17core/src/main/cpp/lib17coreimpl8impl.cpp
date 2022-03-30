// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl8impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl8impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl8impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl8impl4(int a, int b) {
    return a + b;
}

int Lib17CoreImpl8Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl8Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl8Impl" << std::endl;
        Lib17CoreImpl8Core1 lib17coreimpl8core1;
        lib17coreimpl8core1.doSomething();
        Lib17CoreImpl8Core2 lib17coreimpl8core2;
        lib17coreimpl8core2.doSomething();
        Lib17CoreImpl9Api1 lib17coreimpl9api1;
        lib17coreimpl9api1.doSomething();
        Lib17CoreImpl9Api2 lib17coreimpl9api2;
        lib17coreimpl9api2.doSomething();
        Lib17CoreImpl9Api3 lib17coreimpl9api3;
        lib17coreimpl9api3.doSomething();
        visited = 1;
    }
}

