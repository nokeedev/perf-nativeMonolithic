// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl10api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl10api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl10api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl10api14(int a, int b) {
    return a + b;
}

int Lib17CoreImpl10Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl10Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl10Api1" << std::endl;
        Lib17CoreImpl11Api1 lib17coreimpl11api1;
        lib17coreimpl11api1.doSomething();
        Lib17CoreImpl10Impl lib17coreimpl10impl;
        lib17coreimpl10impl.doSomething();
        Lib17CoreImpl11Api2 lib17coreimpl11api2;
        lib17coreimpl11api2.doSomething();
        Lib17CoreImpl11Api3 lib17coreimpl11api3;
        lib17coreimpl11api3.doSomething();
        visited = 1;
    }
}

