// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl11impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl11impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl11impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl11impl4(int a, int b) {
    return a + b;
}

int Lib17CoreImpl11Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl11Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl11Impl" << std::endl;
        Lib17CoreImpl11Core1 lib17coreimpl11core1;
        lib17coreimpl11core1.doSomething();
        Lib17CoreImpl11Core2 lib17coreimpl11core2;
        lib17coreimpl11core2.doSomething();
        Lib17CoreImpl12Api1 lib17coreimpl12api1;
        lib17coreimpl12api1.doSomething();
        Lib17CoreImpl12Api2 lib17coreimpl12api2;
        lib17coreimpl12api2.doSomething();
        Lib17CoreImpl12Api3 lib17coreimpl12api3;
        lib17coreimpl12api3.doSomething();
        visited = 1;
    }
}

