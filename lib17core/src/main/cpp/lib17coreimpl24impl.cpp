// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl24impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl24impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl24impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl24impl4(int a, int b) {
    return a + b;
}

int Lib17CoreImpl24Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl24Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl24Impl" << std::endl;
        Lib17CoreImpl24Core1 lib17coreimpl24core1;
        lib17coreimpl24core1.doSomething();
        Lib17CoreImpl24Core2 lib17coreimpl24core2;
        lib17coreimpl24core2.doSomething();
        Lib17CoreImpl25Api1 lib17coreimpl25api1;
        lib17coreimpl25api1.doSomething();
        Lib17CoreImpl25Api2 lib17coreimpl25api2;
        lib17coreimpl25api2.doSomething();
        Lib17CoreImpl25Api3 lib17coreimpl25api3;
        lib17coreimpl25api3.doSomething();
        visited = 1;
    }
}

