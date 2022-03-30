// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl10api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl10api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl10api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl10api24(int a, int b) {
    return a + b;
}

int Lib17CoreImpl10Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl10Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl10Api2" << std::endl;
        Lib17CoreImpl10Impl lib17coreimpl10impl;
        lib17coreimpl10impl.doSomething();
        Lib17CoreImpl11Api1 lib17coreimpl11api1;
        lib17coreimpl11api1.doSomething();
        Lib17CoreImpl11Api2 lib17coreimpl11api2;
        lib17coreimpl11api2.doSomething();
        Lib17CoreImpl11Api3 lib17coreimpl11api3;
        lib17coreimpl11api3.doSomething();
        visited = 1;
    }
}

