// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl31impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl31impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl31impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl31impl4(int a, int b) {
    return a + b;
}

int Lib17CoreImpl31Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl31Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl31Impl" << std::endl;
        Lib17CoreImpl31Core1 lib17coreimpl31core1;
        lib17coreimpl31core1.doSomething();
        Lib17CoreImpl31Core2 lib17coreimpl31core2;
        lib17coreimpl31core2.doSomething();
        Lib17CoreImpl32Api1 lib17coreimpl32api1;
        lib17coreimpl32api1.doSomething();
        Lib17CoreImpl32Api2 lib17coreimpl32api2;
        lib17coreimpl32api2.doSomething();
        Lib17CoreImpl32Api3 lib17coreimpl32api3;
        lib17coreimpl32api3.doSomething();
        visited = 1;
    }
}

