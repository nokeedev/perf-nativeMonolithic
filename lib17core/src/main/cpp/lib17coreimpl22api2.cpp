// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl22api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl22api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl22api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl22api24(int a, int b) {
    return a + b;
}

int Lib17CoreImpl22Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl22Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl22Api2" << std::endl;
        Lib17CoreImpl22Impl lib17coreimpl22impl;
        lib17coreimpl22impl.doSomething();
        Lib17CoreImpl23Api1 lib17coreimpl23api1;
        lib17coreimpl23api1.doSomething();
        Lib17CoreImpl23Api2 lib17coreimpl23api2;
        lib17coreimpl23api2.doSomething();
        Lib17CoreImpl23Api3 lib17coreimpl23api3;
        lib17coreimpl23api3.doSomething();
        visited = 1;
    }
}

