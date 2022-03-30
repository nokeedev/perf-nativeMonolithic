// GENERATED SOURCE FILE

#include "lib15impl_private.h"
#include "lib15impl_impl.h"
#include "lib15core1.h"
#include "lib15core2.h"
#include "lib16api1.h"
#include "lib16api2.h"
#include "lib16api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15implimpl6impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl6impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl6impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15implimpl6impl4(int a, int b) {
    return a + b;
}

int Lib15ImplImpl6Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib15ImplImpl6Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15ImplImpl6Impl" << std::endl;
        Lib15Core1 lib15core1;
        lib15core1.doSomething();
        Lib15Core2 lib15core2;
        lib15core2.doSomething();
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15ImplImpl6Core1 lib15implimpl6core1;
        lib15implimpl6core1.doSomething();
        Lib15ImplImpl6Core2 lib15implimpl6core2;
        lib15implimpl6core2.doSomething();
        Lib15ImplImpl7Api1 lib15implimpl7api1;
        lib15implimpl7api1.doSomething();
        Lib15ImplImpl7Api2 lib15implimpl7api2;
        lib15implimpl7api2.doSomething();
        Lib15ImplImpl7Api3 lib15implimpl7api3;
        lib15implimpl7api3.doSomething();
        visited = 1;
    }
}

