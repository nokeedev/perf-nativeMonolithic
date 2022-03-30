// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl21impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl21impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl21impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl21impl4(int a, int b) {
    return a + b;
}

int Lib17CoreImpl21Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl21Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl21Impl" << std::endl;
        Lib17CoreImpl21Core1 lib17coreimpl21core1;
        lib17coreimpl21core1.doSomething();
        Lib17CoreImpl21Core2 lib17coreimpl21core2;
        lib17coreimpl21core2.doSomething();
        Lib17CoreImpl22Api1 lib17coreimpl22api1;
        lib17coreimpl22api1.doSomething();
        Lib17CoreImpl22Api2 lib17coreimpl22api2;
        lib17coreimpl22api2.doSomething();
        Lib17CoreImpl22Api3 lib17coreimpl22api3;
        lib17coreimpl22api3.doSomething();
        visited = 1;
    }
}

