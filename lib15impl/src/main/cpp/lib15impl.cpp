// GENERATED SOURCE FILE

#include "lib15impl_impl.h"
#include "lib15impl_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15impl4(int a, int b) {
    return a + b;
}

int Lib15Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib15Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Impl" << std::endl;
        Lib15ImplImpl1Api1 lib15implimpl1api1;
        lib15implimpl1api1.doSomething();
        Lib15ImplImpl1Api2 lib15implimpl1api2;
        lib15implimpl1api2.doSomething();
        Lib15ImplImpl1Api3 lib15implimpl1api3;
        lib15implimpl1api3.doSomething();
        visited = 1;
    }
}

