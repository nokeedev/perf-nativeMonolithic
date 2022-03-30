// GENERATED SOURCE FILE

#include "lib3impl_impl.h"
#include "lib3impl_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3impl4(int a, int b) {
    return a + b;
}

int Lib3Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib3Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3Impl" << std::endl;
        Lib3ImplImpl1Api1 lib3implimpl1api1;
        lib3implimpl1api1.doSomething();
        Lib3ImplImpl1Api2 lib3implimpl1api2;
        lib3implimpl1api2.doSomething();
        Lib3ImplImpl1Api3 lib3implimpl1api3;
        lib3implimpl1api3.doSomething();
        visited = 1;
    }
}

