// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl12impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl12impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl12impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl12impl4(int a, int b) {
    return a + b;
}

int Lib17CoreImpl12Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl12Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl12Impl" << std::endl;
        Lib17CoreImpl12Core1 lib17coreimpl12core1;
        lib17coreimpl12core1.doSomething();
        Lib17CoreImpl12Core2 lib17coreimpl12core2;
        lib17coreimpl12core2.doSomething();
        Lib17CoreImpl13Api1 lib17coreimpl13api1;
        lib17coreimpl13api1.doSomething();
        Lib17CoreImpl13Api2 lib17coreimpl13api2;
        lib17coreimpl13api2.doSomething();
        Lib17CoreImpl13Api3 lib17coreimpl13api3;
        lib17coreimpl13api3.doSomething();
        visited = 1;
    }
}

