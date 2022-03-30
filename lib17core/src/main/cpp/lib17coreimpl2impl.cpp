// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl2impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl2impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl2impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl2impl4(int a, int b) {
    return a + b;
}

int Lib17CoreImpl2Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl2Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl2Impl" << std::endl;
        Lib17CoreImpl2Core1 lib17coreimpl2core1;
        lib17coreimpl2core1.doSomething();
        Lib17CoreImpl2Core2 lib17coreimpl2core2;
        lib17coreimpl2core2.doSomething();
        Lib17CoreImpl3Api1 lib17coreimpl3api1;
        lib17coreimpl3api1.doSomething();
        Lib17CoreImpl3Api2 lib17coreimpl3api2;
        lib17coreimpl3api2.doSomething();
        Lib17CoreImpl3Api3 lib17coreimpl3api3;
        lib17coreimpl3api3.doSomething();
        visited = 1;
    }
}

