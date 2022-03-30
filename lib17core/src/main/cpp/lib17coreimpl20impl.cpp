// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl20impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl20impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl20impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl20impl4(int a, int b) {
    return a + b;
}

int Lib17CoreImpl20Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl20Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl20Impl" << std::endl;
        Lib17CoreImpl20Core1 lib17coreimpl20core1;
        lib17coreimpl20core1.doSomething();
        Lib17CoreImpl20Core2 lib17coreimpl20core2;
        lib17coreimpl20core2.doSomething();
        Lib17CoreImpl21Api1 lib17coreimpl21api1;
        lib17coreimpl21api1.doSomething();
        Lib17CoreImpl21Api2 lib17coreimpl21api2;
        lib17coreimpl21api2.doSomething();
        Lib17CoreImpl21Api3 lib17coreimpl21api3;
        lib17coreimpl21api3.doSomething();
        visited = 1;
    }
}

