// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl33api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl33api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl33api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl33api14(int a, int b) {
    return a + b;
}

int Lib17CoreImpl33Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl33Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl33Api1" << std::endl;
        Lib17CoreImpl34Api lib17coreimpl34api;
        lib17coreimpl34api.doSomething();
        Lib17CoreImpl33Impl lib17coreimpl33impl;
        lib17coreimpl33impl.doSomething();
        visited = 1;
    }
}

