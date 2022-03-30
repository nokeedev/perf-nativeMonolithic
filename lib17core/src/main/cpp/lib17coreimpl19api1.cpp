// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl19api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl19api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl19api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl19api14(int a, int b) {
    return a + b;
}

int Lib17CoreImpl19Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl19Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl19Api1" << std::endl;
        Lib17CoreImpl20Api1 lib17coreimpl20api1;
        lib17coreimpl20api1.doSomething();
        Lib17CoreImpl19Impl lib17coreimpl19impl;
        lib17coreimpl19impl.doSomething();
        Lib17CoreImpl20Api2 lib17coreimpl20api2;
        lib17coreimpl20api2.doSomething();
        Lib17CoreImpl20Api3 lib17coreimpl20api3;
        lib17coreimpl20api3.doSomething();
        visited = 1;
    }
}

