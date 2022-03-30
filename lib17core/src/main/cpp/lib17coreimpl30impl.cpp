// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl30impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl30impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl30impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl30impl4(int a, int b) {
    return a + b;
}

int Lib17CoreImpl30Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl30Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl30Impl" << std::endl;
        Lib17CoreImpl30Core1 lib17coreimpl30core1;
        lib17coreimpl30core1.doSomething();
        Lib17CoreImpl30Core2 lib17coreimpl30core2;
        lib17coreimpl30core2.doSomething();
        Lib17CoreImpl31Api1 lib17coreimpl31api1;
        lib17coreimpl31api1.doSomething();
        Lib17CoreImpl31Api2 lib17coreimpl31api2;
        lib17coreimpl31api2.doSomething();
        Lib17CoreImpl31Api3 lib17coreimpl31api3;
        lib17coreimpl31api3.doSomething();
        visited = 1;
    }
}

