// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl4api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl4api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl4api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl4api34(int a, int b) {
    return a + b;
}

int Lib17CoreImpl4Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl4Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl4Api3" << std::endl;
        Lib17CoreImpl4Impl lib17coreimpl4impl;
        lib17coreimpl4impl.doSomething();
        Lib17CoreImpl5Api1 lib17coreimpl5api1;
        lib17coreimpl5api1.doSomething();
        Lib17CoreImpl5Api2 lib17coreimpl5api2;
        lib17coreimpl5api2.doSomething();
        Lib17CoreImpl5Api3 lib17coreimpl5api3;
        lib17coreimpl5api3.doSomething();
        visited = 1;
    }
}

