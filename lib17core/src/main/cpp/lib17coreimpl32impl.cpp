// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl32impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl32impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl32impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl32impl4(int a, int b) {
    return a + b;
}

int Lib17CoreImpl32Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl32Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl32Impl" << std::endl;
        Lib17CoreImpl32Core1 lib17coreimpl32core1;
        lib17coreimpl32core1.doSomething();
        Lib17CoreImpl32Core2 lib17coreimpl32core2;
        lib17coreimpl32core2.doSomething();
        Lib17CoreImpl33Api1 lib17coreimpl33api1;
        lib17coreimpl33api1.doSomething();
        Lib17CoreImpl33Api2 lib17coreimpl33api2;
        lib17coreimpl33api2.doSomething();
        Lib17CoreImpl33Api3 lib17coreimpl33api3;
        lib17coreimpl33api3.doSomething();
        visited = 1;
    }
}

