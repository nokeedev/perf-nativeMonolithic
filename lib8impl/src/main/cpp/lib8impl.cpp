// GENERATED SOURCE FILE

#include "lib8impl_impl.h"
#include "lib8impl_private.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8impl4(int a, int b) {
    return a + b;
}

int Lib8Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib8Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Impl" << std::endl;
        Lib8ImplImpl1Api1 lib8implimpl1api1;
        lib8implimpl1api1.doSomething();
        Lib8ImplImpl1Api2 lib8implimpl1api2;
        lib8implimpl1api2.doSomething();
        Lib8ImplImpl1Api3 lib8implimpl1api3;
        lib8implimpl1api3.doSomething();
        visited = 1;
    }
}

