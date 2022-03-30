// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl16api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl16api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl16api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl16api14(int a, int b) {
    return a + b;
}

int Lib17CoreImpl16Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl16Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl16Api1" << std::endl;
        Lib17CoreImpl17Api1 lib17coreimpl17api1;
        lib17coreimpl17api1.doSomething();
        Lib17CoreImpl16Impl lib17coreimpl16impl;
        lib17coreimpl16impl.doSomething();
        Lib17CoreImpl17Api2 lib17coreimpl17api2;
        lib17coreimpl17api2.doSomething();
        Lib17CoreImpl17Api3 lib17coreimpl17api3;
        lib17coreimpl17api3.doSomething();
        visited = 1;
    }
}

