// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl17api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl17api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl17api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl17api14(int a, int b) {
    return a + b;
}

int Lib17CoreImpl17Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl17Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl17Api1" << std::endl;
        Lib17CoreImpl18Api1 lib17coreimpl18api1;
        lib17coreimpl18api1.doSomething();
        Lib17CoreImpl17Impl lib17coreimpl17impl;
        lib17coreimpl17impl.doSomething();
        Lib17CoreImpl18Api2 lib17coreimpl18api2;
        lib17coreimpl18api2.doSomething();
        Lib17CoreImpl18Api3 lib17coreimpl18api3;
        lib17coreimpl18api3.doSomething();
        visited = 1;
    }
}

