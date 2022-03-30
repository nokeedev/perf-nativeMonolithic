// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl9impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl9impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl9impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl9impl4(int a, int b) {
    return a + b;
}

int Lib17CoreImpl9Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl9Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl9Impl" << std::endl;
        Lib17CoreImpl9Core1 lib17coreimpl9core1;
        lib17coreimpl9core1.doSomething();
        Lib17CoreImpl9Core2 lib17coreimpl9core2;
        lib17coreimpl9core2.doSomething();
        Lib17CoreImpl10Api1 lib17coreimpl10api1;
        lib17coreimpl10api1.doSomething();
        Lib17CoreImpl10Api2 lib17coreimpl10api2;
        lib17coreimpl10api2.doSomething();
        Lib17CoreImpl10Api3 lib17coreimpl10api3;
        lib17coreimpl10api3.doSomething();
        visited = 1;
    }
}

