// GENERATED SOURCE FILE

#include "lib14impl_impl.h"
#include "lib14impl_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14impl4(int a, int b) {
    return a + b;
}

int Lib14Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib14Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Impl" << std::endl;
        Lib14ImplImpl1Api1 lib14implimpl1api1;
        lib14implimpl1api1.doSomething();
        Lib14ImplImpl1Api2 lib14implimpl1api2;
        lib14implimpl1api2.doSomething();
        Lib14ImplImpl1Api3 lib14implimpl1api3;
        lib14implimpl1api3.doSomething();
        visited = 1;
    }
}

