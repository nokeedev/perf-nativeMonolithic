// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl9api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl9api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl9api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl9api34(int a, int b) {
    return a + b;
}

int Lib17CoreImpl9Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl9Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl9Api3" << std::endl;
        Lib17CoreImpl9Impl lib17coreimpl9impl;
        lib17coreimpl9impl.doSomething();
        Lib17CoreImpl10Api1 lib17coreimpl10api1;
        lib17coreimpl10api1.doSomething();
        Lib17CoreImpl10Api2 lib17coreimpl10api2;
        lib17coreimpl10api2.doSomething();
        Lib17CoreImpl10Api3 lib17coreimpl10api3;
        lib17coreimpl10api3.doSomething();
        visited = 1;
    }
}
