// GENERATED SOURCE FILE

#include "lib4impl_impl.h"
#include "lib4impl_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4impl4(int a, int b) {
    return a + b;
}

int Lib4Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4Impl" << std::endl;
        Lib4ImplImpl1Api1 lib4implimpl1api1;
        lib4implimpl1api1.doSomething();
        Lib4ImplImpl1Api2 lib4implimpl1api2;
        lib4implimpl1api2.doSomething();
        Lib4ImplImpl1Api3 lib4implimpl1api3;
        lib4implimpl1api3.doSomething();
        visited = 1;
    }
}

