// GENERATED SOURCE FILE

#include "lib7impl_private.h"
#include "lib7impl_impl.h"
#include "lib7core1.h"
#include "lib7core2.h"
#include "lib8api1.h"
#include "lib8api2.h"
#include "lib8api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7implimpl6impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl6impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl6impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl6impl4(int a, int b) {
    return a + b;
}

int Lib7ImplImpl6Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib7ImplImpl6Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7ImplImpl6Impl" << std::endl;
        Lib7Core1 lib7core1;
        lib7core1.doSomething();
        Lib7Core2 lib7core2;
        lib7core2.doSomething();
        Lib8Api1 lib8api1;
        lib8api1.doSomething();
        Lib8Api2 lib8api2;
        lib8api2.doSomething();
        Lib8Api3 lib8api3;
        lib8api3.doSomething();
        Lib7ImplImpl6Core1 lib7implimpl6core1;
        lib7implimpl6core1.doSomething();
        Lib7ImplImpl6Core2 lib7implimpl6core2;
        lib7implimpl6core2.doSomething();
        Lib7ImplImpl7Api1 lib7implimpl7api1;
        lib7implimpl7api1.doSomething();
        Lib7ImplImpl7Api2 lib7implimpl7api2;
        lib7implimpl7api2.doSomething();
        Lib7ImplImpl7Api3 lib7implimpl7api3;
        lib7implimpl7api3.doSomething();
        visited = 1;
    }
}

