// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl28impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl28impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl28impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl28impl4(int a, int b) {
    return a + b;
}

int Lib17CoreImpl28Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl28Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl28Impl" << std::endl;
        Lib17CoreImpl28Core1 lib17coreimpl28core1;
        lib17coreimpl28core1.doSomething();
        Lib17CoreImpl28Core2 lib17coreimpl28core2;
        lib17coreimpl28core2.doSomething();
        Lib17CoreImpl29Api1 lib17coreimpl29api1;
        lib17coreimpl29api1.doSomething();
        Lib17CoreImpl29Api2 lib17coreimpl29api2;
        lib17coreimpl29api2.doSomething();
        Lib17CoreImpl29Api3 lib17coreimpl29api3;
        lib17coreimpl29api3.doSomething();
        visited = 1;
    }
}

