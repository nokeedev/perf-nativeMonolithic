// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl26impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl26impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl26impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl26impl4(int a, int b) {
    return a + b;
}

int Lib17CoreImpl26Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl26Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl26Impl" << std::endl;
        Lib17CoreImpl26Core1 lib17coreimpl26core1;
        lib17coreimpl26core1.doSomething();
        Lib17CoreImpl26Core2 lib17coreimpl26core2;
        lib17coreimpl26core2.doSomething();
        Lib17CoreImpl27Api1 lib17coreimpl27api1;
        lib17coreimpl27api1.doSomething();
        Lib17CoreImpl27Api2 lib17coreimpl27api2;
        lib17coreimpl27api2.doSomething();
        Lib17CoreImpl27Api3 lib17coreimpl27api3;
        lib17coreimpl27api3.doSomething();
        visited = 1;
    }
}

