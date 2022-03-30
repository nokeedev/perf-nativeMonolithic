// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl14impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl14impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl14impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl14impl4(int a, int b) {
    return a + b;
}

int Lib17CoreImpl14Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl14Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl14Impl" << std::endl;
        Lib17CoreImpl14Core1 lib17coreimpl14core1;
        lib17coreimpl14core1.doSomething();
        Lib17CoreImpl14Core2 lib17coreimpl14core2;
        lib17coreimpl14core2.doSomething();
        Lib17CoreImpl15Api1 lib17coreimpl15api1;
        lib17coreimpl15api1.doSomething();
        Lib17CoreImpl15Api2 lib17coreimpl15api2;
        lib17coreimpl15api2.doSomething();
        Lib17CoreImpl15Api3 lib17coreimpl15api3;
        lib17coreimpl15api3.doSomething();
        visited = 1;
    }
}

