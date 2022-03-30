// GENERATED SOURCE FILE

#include "lib17core_impl.h"
#include "lib17core_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17core1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17core2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17core3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17core4(int a, int b) {
    return a + b;
}

int Lib17Core::visited = 0;

/*
 * Here is a function.
 */
void Lib17Core::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17Core" << std::endl;
        Lib17CoreImpl1Api1 lib17coreimpl1api1;
        lib17coreimpl1api1.doSomething();
        Lib17CoreImpl1Api2 lib17coreimpl1api2;
        lib17coreimpl1api2.doSomething();
        Lib17CoreImpl1Api3 lib17coreimpl1api3;
        lib17coreimpl1api3.doSomething();
        visited = 1;
    }
}

