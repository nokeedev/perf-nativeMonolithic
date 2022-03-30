// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl5api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl5api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl5api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl5api24(int a, int b) {
    return a + b;
}

int Lib17CoreImpl5Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl5Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl5Api2" << std::endl;
        Lib17CoreImpl5Impl lib17coreimpl5impl;
        lib17coreimpl5impl.doSomething();
        Lib17CoreImpl6Api1 lib17coreimpl6api1;
        lib17coreimpl6api1.doSomething();
        Lib17CoreImpl6Api2 lib17coreimpl6api2;
        lib17coreimpl6api2.doSomething();
        Lib17CoreImpl6Api3 lib17coreimpl6api3;
        lib17coreimpl6api3.doSomething();
        visited = 1;
    }
}

