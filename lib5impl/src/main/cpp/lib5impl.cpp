// GENERATED SOURCE FILE

#include "lib5impl_impl.h"
#include "lib5impl_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5impl4(int a, int b) {
    return a + b;
}

int Lib5Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib5Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5Impl" << std::endl;
        Lib5ImplImpl1Api1 lib5implimpl1api1;
        lib5implimpl1api1.doSomething();
        Lib5ImplImpl1Api2 lib5implimpl1api2;
        lib5implimpl1api2.doSomething();
        Lib5ImplImpl1Api3 lib5implimpl1api3;
        lib5implimpl1api3.doSomething();
        visited = 1;
    }
}

