// GENERATED SOURCE FILE

#include "lib13impl_impl.h"
#include "lib13impl_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13impl4(int a, int b) {
    return a + b;
}

int Lib13Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib13Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Impl" << std::endl;
        Lib13ImplImpl1Api1 lib13implimpl1api1;
        lib13implimpl1api1.doSomething();
        Lib13ImplImpl1Api2 lib13implimpl1api2;
        lib13implimpl1api2.doSomething();
        Lib13ImplImpl1Api3 lib13implimpl1api3;
        lib13implimpl1api3.doSomething();
        visited = 1;
    }
}

