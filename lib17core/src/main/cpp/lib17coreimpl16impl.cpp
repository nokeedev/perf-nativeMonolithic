// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl16impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl16impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl16impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl16impl4(int a, int b) {
    return a + b;
}

int Lib17CoreImpl16Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl16Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl16Impl" << std::endl;
        Lib17CoreImpl16Core1 lib17coreimpl16core1;
        lib17coreimpl16core1.doSomething();
        Lib17CoreImpl16Core2 lib17coreimpl16core2;
        lib17coreimpl16core2.doSomething();
        Lib17CoreImpl17Api1 lib17coreimpl17api1;
        lib17coreimpl17api1.doSomething();
        Lib17CoreImpl17Api2 lib17coreimpl17api2;
        lib17coreimpl17api2.doSomething();
        Lib17CoreImpl17Api3 lib17coreimpl17api3;
        lib17coreimpl17api3.doSomething();
        visited = 1;
    }
}

