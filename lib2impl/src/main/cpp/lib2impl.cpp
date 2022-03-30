// GENERATED SOURCE FILE

#include "lib2impl_impl.h"
#include "lib2impl_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2impl4(int a, int b) {
    return a + b;
}

int Lib2Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib2Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2Impl" << std::endl;
        Lib2ImplImpl1Api1 lib2implimpl1api1;
        lib2implimpl1api1.doSomething();
        Lib2ImplImpl1Api2 lib2implimpl1api2;
        lib2implimpl1api2.doSomething();
        Lib2ImplImpl1Api3 lib2implimpl1api3;
        lib2implimpl1api3.doSomething();
        visited = 1;
    }
}

