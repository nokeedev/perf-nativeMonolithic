// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl34api1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl34api2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl34api3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl34api4(int a, int b) {
    return a + b;
}

int Lib17CoreImpl34Api::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl34Api::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl34Api" << std::endl;
        Lib17CoreImpl34Core lib17coreimpl34core;
        lib17coreimpl34core.doSomething();
        visited = 1;
    }
}

