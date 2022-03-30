// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl1impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl1impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl1impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl1impl4(int a, int b) {
    return a + b;
}

int Lib17CoreImpl1Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl1Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl1Impl" << std::endl;
        Lib17CoreImpl1Core1 lib17coreimpl1core1;
        lib17coreimpl1core1.doSomething();
        Lib17CoreImpl1Core2 lib17coreimpl1core2;
        lib17coreimpl1core2.doSomething();
        Lib17CoreImpl2Api1 lib17coreimpl2api1;
        lib17coreimpl2api1.doSomething();
        Lib17CoreImpl2Api2 lib17coreimpl2api2;
        lib17coreimpl2api2.doSomething();
        Lib17CoreImpl2Api3 lib17coreimpl2api3;
        lib17coreimpl2api3.doSomething();
        visited = 1;
    }
}

