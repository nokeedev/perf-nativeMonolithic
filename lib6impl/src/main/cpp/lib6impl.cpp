// GENERATED SOURCE FILE

#include "lib6impl_impl.h"
#include "lib6impl_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6impl4(int a, int b) {
    return a + b;
}

int Lib6Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib6Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Impl" << std::endl;
        Lib6ImplImpl1Api1 lib6implimpl1api1;
        lib6implimpl1api1.doSomething();
        Lib6ImplImpl1Api2 lib6implimpl1api2;
        lib6implimpl1api2.doSomething();
        Lib6ImplImpl1Api3 lib6implimpl1api3;
        lib6implimpl1api3.doSomething();
        visited = 1;
    }
}

