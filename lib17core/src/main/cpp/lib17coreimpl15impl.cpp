// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl15impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl15impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl15impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl15impl4(int a, int b) {
    return a + b;
}

int Lib17CoreImpl15Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl15Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl15Impl" << std::endl;
        Lib17CoreImpl15Core1 lib17coreimpl15core1;
        lib17coreimpl15core1.doSomething();
        Lib17CoreImpl15Core2 lib17coreimpl15core2;
        lib17coreimpl15core2.doSomething();
        Lib17CoreImpl16Api1 lib17coreimpl16api1;
        lib17coreimpl16api1.doSomething();
        Lib17CoreImpl16Api2 lib17coreimpl16api2;
        lib17coreimpl16api2.doSomething();
        Lib17CoreImpl16Api3 lib17coreimpl16api3;
        lib17coreimpl16api3.doSomething();
        visited = 1;
    }
}

