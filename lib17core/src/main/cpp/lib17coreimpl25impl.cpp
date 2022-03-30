// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl25impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl25impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl25impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl25impl4(int a, int b) {
    return a + b;
}

int Lib17CoreImpl25Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl25Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl25Impl" << std::endl;
        Lib17CoreImpl25Core1 lib17coreimpl25core1;
        lib17coreimpl25core1.doSomething();
        Lib17CoreImpl25Core2 lib17coreimpl25core2;
        lib17coreimpl25core2.doSomething();
        Lib17CoreImpl26Api1 lib17coreimpl26api1;
        lib17coreimpl26api1.doSomething();
        Lib17CoreImpl26Api2 lib17coreimpl26api2;
        lib17coreimpl26api2.doSomething();
        Lib17CoreImpl26Api3 lib17coreimpl26api3;
        lib17coreimpl26api3.doSomething();
        visited = 1;
    }
}

