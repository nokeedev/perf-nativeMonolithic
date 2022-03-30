// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl21api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl21api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl21api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl21api24(int a, int b) {
    return a + b;
}

int Lib17CoreImpl21Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl21Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl21Api2" << std::endl;
        Lib17CoreImpl21Impl lib17coreimpl21impl;
        lib17coreimpl21impl.doSomething();
        Lib17CoreImpl22Api1 lib17coreimpl22api1;
        lib17coreimpl22api1.doSomething();
        Lib17CoreImpl22Api2 lib17coreimpl22api2;
        lib17coreimpl22api2.doSomething();
        Lib17CoreImpl22Api3 lib17coreimpl22api3;
        lib17coreimpl22api3.doSomething();
        visited = 1;
    }
}

