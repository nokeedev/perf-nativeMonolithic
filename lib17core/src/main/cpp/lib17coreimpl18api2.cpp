// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl18api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl18api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl18api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl18api24(int a, int b) {
    return a + b;
}

int Lib17CoreImpl18Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl18Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl18Api2" << std::endl;
        Lib17CoreImpl18Impl lib17coreimpl18impl;
        lib17coreimpl18impl.doSomething();
        Lib17CoreImpl19Api1 lib17coreimpl19api1;
        lib17coreimpl19api1.doSomething();
        Lib17CoreImpl19Api2 lib17coreimpl19api2;
        lib17coreimpl19api2.doSomething();
        Lib17CoreImpl19Api3 lib17coreimpl19api3;
        lib17coreimpl19api3.doSomething();
        visited = 1;
    }
}

