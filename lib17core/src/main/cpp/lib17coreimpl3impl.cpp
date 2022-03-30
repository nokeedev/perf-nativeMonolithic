// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl3impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl3impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl3impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl3impl4(int a, int b) {
    return a + b;
}

int Lib17CoreImpl3Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl3Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl3Impl" << std::endl;
        Lib17CoreImpl3Core1 lib17coreimpl3core1;
        lib17coreimpl3core1.doSomething();
        Lib17CoreImpl3Core2 lib17coreimpl3core2;
        lib17coreimpl3core2.doSomething();
        Lib17CoreImpl4Api1 lib17coreimpl4api1;
        lib17coreimpl4api1.doSomething();
        Lib17CoreImpl4Api2 lib17coreimpl4api2;
        lib17coreimpl4api2.doSomething();
        Lib17CoreImpl4Api3 lib17coreimpl4api3;
        lib17coreimpl4api3.doSomething();
        visited = 1;
    }
}

