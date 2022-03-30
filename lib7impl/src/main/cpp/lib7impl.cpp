// GENERATED SOURCE FILE

#include "lib7impl_impl.h"
#include "lib7impl_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7impl4(int a, int b) {
    return a + b;
}

int Lib7Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib7Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Impl" << std::endl;
        Lib7ImplImpl1Api1 lib7implimpl1api1;
        lib7implimpl1api1.doSomething();
        Lib7ImplImpl1Api2 lib7implimpl1api2;
        lib7implimpl1api2.doSomething();
        Lib7ImplImpl1Api3 lib7implimpl1api3;
        lib7implimpl1api3.doSomething();
        visited = 1;
    }
}

