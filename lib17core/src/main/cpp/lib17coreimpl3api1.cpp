// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl3api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl3api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl3api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl3api14(int a, int b) {
    return a + b;
}

int Lib17CoreImpl3Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl3Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl3Api1" << std::endl;
        Lib17CoreImpl4Api1 lib17coreimpl4api1;
        lib17coreimpl4api1.doSomething();
        Lib17CoreImpl3Impl lib17coreimpl3impl;
        lib17coreimpl3impl.doSomething();
        Lib17CoreImpl4Api2 lib17coreimpl4api2;
        lib17coreimpl4api2.doSomething();
        Lib17CoreImpl4Api3 lib17coreimpl4api3;
        lib17coreimpl4api3.doSomething();
        visited = 1;
    }
}

