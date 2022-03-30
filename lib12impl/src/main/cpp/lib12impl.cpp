// GENERATED SOURCE FILE

#include "lib12impl_impl.h"
#include "lib12impl_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12impl4(int a, int b) {
    return a + b;
}

int Lib12Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib12Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12Impl" << std::endl;
        Lib12ImplImpl1Api1 lib12implimpl1api1;
        lib12implimpl1api1.doSomething();
        Lib12ImplImpl1Api2 lib12implimpl1api2;
        lib12implimpl1api2.doSomething();
        Lib12ImplImpl1Api3 lib12implimpl1api3;
        lib12implimpl1api3.doSomething();
        visited = 1;
    }
}

