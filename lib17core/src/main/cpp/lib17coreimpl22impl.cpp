// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl22impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl22impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl22impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl22impl4(int a, int b) {
    return a + b;
}

int Lib17CoreImpl22Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl22Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl22Impl" << std::endl;
        Lib17CoreImpl22Core1 lib17coreimpl22core1;
        lib17coreimpl22core1.doSomething();
        Lib17CoreImpl22Core2 lib17coreimpl22core2;
        lib17coreimpl22core2.doSomething();
        Lib17CoreImpl23Api1 lib17coreimpl23api1;
        lib17coreimpl23api1.doSomething();
        Lib17CoreImpl23Api2 lib17coreimpl23api2;
        lib17coreimpl23api2.doSomething();
        Lib17CoreImpl23Api3 lib17coreimpl23api3;
        lib17coreimpl23api3.doSomething();
        visited = 1;
    }
}

