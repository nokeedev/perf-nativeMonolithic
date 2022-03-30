// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl3api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl3api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl3api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl3api34(int a, int b) {
    return a + b;
}

int Lib17CoreImpl3Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl3Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl3Api3" << std::endl;
        Lib17CoreImpl3Impl lib17coreimpl3impl;
        lib17coreimpl3impl.doSomething();
        Lib17CoreImpl4Api1 lib17coreimpl4api1;
        lib17coreimpl4api1.doSomething();
        Lib17CoreImpl4Api2 lib17coreimpl4api2;
        lib17coreimpl4api2.doSomething();
        Lib17CoreImpl4Api3 lib17coreimpl4api3;
        lib17coreimpl4api3.doSomething();
        visited = 1;
    }
}

