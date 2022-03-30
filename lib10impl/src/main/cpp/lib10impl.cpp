// GENERATED SOURCE FILE

#include "lib10impl_impl.h"
#include "lib10impl_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib10impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib10impl4(int a, int b) {
    return a + b;
}

int Lib10Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib10Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib10Impl" << std::endl;
        Lib10ImplImpl1Api1 lib10implimpl1api1;
        lib10implimpl1api1.doSomething();
        Lib10ImplImpl1Api2 lib10implimpl1api2;
        lib10implimpl1api2.doSomething();
        Lib10ImplImpl1Api3 lib10implimpl1api3;
        lib10implimpl1api3.doSomething();
        visited = 1;
    }
}

