// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl4impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl4impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl4impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl4impl4(int a, int b) {
    return a + b;
}

int Lib17CoreImpl4Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl4Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl4Impl" << std::endl;
        Lib17CoreImpl4Core1 lib17coreimpl4core1;
        lib17coreimpl4core1.doSomething();
        Lib17CoreImpl4Core2 lib17coreimpl4core2;
        lib17coreimpl4core2.doSomething();
        Lib17CoreImpl5Api1 lib17coreimpl5api1;
        lib17coreimpl5api1.doSomething();
        Lib17CoreImpl5Api2 lib17coreimpl5api2;
        lib17coreimpl5api2.doSomething();
        Lib17CoreImpl5Api3 lib17coreimpl5api3;
        lib17coreimpl5api3.doSomething();
        visited = 1;
    }
}

