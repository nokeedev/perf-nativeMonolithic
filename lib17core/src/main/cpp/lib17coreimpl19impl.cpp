// GENERATED SOURCE FILE

#include "lib17core_private.h"
#include "lib17core_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib17coreimpl19impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl19impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl19impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib17coreimpl19impl4(int a, int b) {
    return a + b;
}

int Lib17CoreImpl19Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib17CoreImpl19Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib17CoreImpl19Impl" << std::endl;
        Lib17CoreImpl19Core1 lib17coreimpl19core1;
        lib17coreimpl19core1.doSomething();
        Lib17CoreImpl19Core2 lib17coreimpl19core2;
        lib17coreimpl19core2.doSomething();
        Lib17CoreImpl20Api1 lib17coreimpl20api1;
        lib17coreimpl20api1.doSomething();
        Lib17CoreImpl20Api2 lib17coreimpl20api2;
        lib17coreimpl20api2.doSomething();
        Lib17CoreImpl20Api3 lib17coreimpl20api3;
        lib17coreimpl20api3.doSomething();
        visited = 1;
    }
}

