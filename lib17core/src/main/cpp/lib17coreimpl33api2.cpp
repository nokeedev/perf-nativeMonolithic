// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl33api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl33api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl33api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl33api24(int a, int b) {
    return a + b;
}

int Lib17CoreImpl33Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl33Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl33Api2" << std::endl;
        Lib17CoreImpl33Impl lib17coreimpl33impl;
        lib17coreimpl33impl.doSomething();
        Lib17CoreImpl34Api lib17coreimpl34api;
        lib17coreimpl34api.doSomething();
        visited = 1;
    }
}

