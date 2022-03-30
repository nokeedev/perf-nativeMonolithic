// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl17api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl17api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl17api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl17api24(int a, int b) {
    return a + b;
}

int Lib17CoreImpl17Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl17Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl17Api2" << std::endl;
        Lib17CoreImpl17Impl lib17coreimpl17impl;
        lib17coreimpl17impl.doSomething();
        Lib17CoreImpl18Api1 lib17coreimpl18api1;
        lib17coreimpl18api1.doSomething();
        Lib17CoreImpl18Api2 lib17coreimpl18api2;
        lib17coreimpl18api2.doSomething();
        Lib17CoreImpl18Api3 lib17coreimpl18api3;
        lib17coreimpl18api3.doSomething();
        visited = 1;
    }
}

