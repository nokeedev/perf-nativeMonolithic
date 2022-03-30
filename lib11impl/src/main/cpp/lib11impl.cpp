// GENERATED SOURCE FILE

#include "lib11impl_impl.h"
#include "lib11impl_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib11impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib11impl4(int a, int b) {
    return a + b;
}

int Lib11Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib11Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib11Impl" << std::endl;
        Lib11ImplImpl1Api1 lib11implimpl1api1;
        lib11implimpl1api1.doSomething();
        Lib11ImplImpl1Api2 lib11implimpl1api2;
        lib11implimpl1api2.doSomething();
        Lib11ImplImpl1Api3 lib11implimpl1api3;
        lib11implimpl1api3.doSomething();
        visited = 1;
    }
}

