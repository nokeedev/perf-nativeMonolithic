// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl10impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl10impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl10impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl10impl4(int a, int b) {
    return a + b;
}

int Lib17CoreImpl10Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl10Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl10Impl" << std::endl;
        Lib17CoreImpl10Core1 lib17coreimpl10core1;
        lib17coreimpl10core1.doSomething();
        Lib17CoreImpl10Core2 lib17coreimpl10core2;
        lib17coreimpl10core2.doSomething();
        Lib17CoreImpl11Api1 lib17coreimpl11api1;
        lib17coreimpl11api1.doSomething();
        Lib17CoreImpl11Api2 lib17coreimpl11api2;
        lib17coreimpl11api2.doSomething();
        Lib17CoreImpl11Api3 lib17coreimpl11api3;
        lib17coreimpl11api3.doSomething();
        visited = 1;
    }
}

