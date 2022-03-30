// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl5impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl5impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl5impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl5impl4(int a, int b) {
    return a + b;
}

int Lib17CoreImpl5Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl5Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl5Impl" << std::endl;
        Lib17CoreImpl5Core1 lib17coreimpl5core1;
        lib17coreimpl5core1.doSomething();
        Lib17CoreImpl5Core2 lib17coreimpl5core2;
        lib17coreimpl5core2.doSomething();
        Lib17CoreImpl6Api1 lib17coreimpl6api1;
        lib17coreimpl6api1.doSomething();
        Lib17CoreImpl6Api2 lib17coreimpl6api2;
        lib17coreimpl6api2.doSomething();
        Lib17CoreImpl6Api3 lib17coreimpl6api3;
        lib17coreimpl6api3.doSomething();
        visited = 1;
    }
}

