// GENERATED SOURCE FILE

#include "lib6impl_private.h"
#include "lib6impl_impl.h"
#include "lib6core1.h"
#include "lib6core2.h"
#include "lib7api1.h"
#include "lib7api2.h"
#include "lib7api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6implimpl7impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6implimpl7impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6implimpl7impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6implimpl7impl4(int a, int b) {
    return a + b;
}

int Lib6ImplImpl7Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib6ImplImpl7Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6ImplImpl7Impl" << std::endl;
        Lib6Core1 lib6core1;
        lib6core1.doSomething();
        Lib6Core2 lib6core2;
        lib6core2.doSomething();
        Lib7Api1 lib7api1;
        lib7api1.doSomething();
        Lib7Api2 lib7api2;
        lib7api2.doSomething();
        Lib7Api3 lib7api3;
        lib7api3.doSomething();
        Lib6ImplImpl7Core1 lib6implimpl7core1;
        lib6implimpl7core1.doSomething();
        Lib6ImplImpl7Core2 lib6implimpl7core2;
        lib6implimpl7core2.doSomething();
        Lib6ImplImpl8Api1 lib6implimpl8api1;
        lib6implimpl8api1.doSomething();
        Lib6ImplImpl8Api2 lib6implimpl8api2;
        lib6implimpl8api2.doSomething();
        Lib6ImplImpl8Api3 lib6implimpl8api3;
        lib6implimpl8api3.doSomething();
        visited = 1;
    }
}

