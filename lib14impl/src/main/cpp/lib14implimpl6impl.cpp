// GENERATED SOURCE FILE

#include "lib14impl_private.h"
#include "lib14impl_impl.h"
#include "lib14core1.h"
#include "lib14core2.h"
#include "lib15api1.h"
#include "lib15api2.h"
#include "lib15api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14implimpl6impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl6impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl6impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl6impl4(int a, int b) {
    return a + b;
}

int Lib14ImplImpl6Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib14ImplImpl6Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14ImplImpl6Impl" << std::endl;
        Lib14Core1 lib14core1;
        lib14core1.doSomething();
        Lib14Core2 lib14core2;
        lib14core2.doSomething();
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14ImplImpl6Core1 lib14implimpl6core1;
        lib14implimpl6core1.doSomething();
        Lib14ImplImpl6Core2 lib14implimpl6core2;
        lib14implimpl6core2.doSomething();
        Lib14ImplImpl7Api1 lib14implimpl7api1;
        lib14implimpl7api1.doSomething();
        Lib14ImplImpl7Api2 lib14implimpl7api2;
        lib14implimpl7api2.doSomething();
        Lib14ImplImpl7Api3 lib14implimpl7api3;
        lib14implimpl7api3.doSomething();
        visited = 1;
    }
}

