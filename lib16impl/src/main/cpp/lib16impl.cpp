// GENERATED SOURCE FILE

#include "lib16impl_impl.h"
#include "lib16impl_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16impl4(int a, int b) {
    return a + b;
}

int Lib16Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib16Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Impl" << std::endl;
        Lib16ImplImpl1Api1 lib16implimpl1api1;
        lib16implimpl1api1.doSomething();
        Lib16ImplImpl1Api2 lib16implimpl1api2;
        lib16implimpl1api2.doSomething();
        Lib16ImplImpl1Api3 lib16implimpl1api3;
        lib16implimpl1api3.doSomething();
        visited = 1;
    }
}

