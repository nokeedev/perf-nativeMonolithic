// GENERATED SOURCE FILE

#include "lib12impl_private.h"
#include "lib12impl_impl.h"
#include "lib12core1.h"
#include "lib12core2.h"
#include "lib13api1.h"
#include "lib13api2.h"
#include "lib13api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12implimpl6impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12implimpl6impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12implimpl6impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12implimpl6impl4(int a, int b) {
    return a + b;
}

int Lib12ImplImpl6Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib12ImplImpl6Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12ImplImpl6Impl" << std::endl;
        Lib12Core1 lib12core1;
        lib12core1.doSomething();
        Lib12Core2 lib12core2;
        lib12core2.doSomething();
        Lib13Api1 lib13api1;
        lib13api1.doSomething();
        Lib13Api2 lib13api2;
        lib13api2.doSomething();
        Lib13Api3 lib13api3;
        lib13api3.doSomething();
        Lib12ImplImpl6Core1 lib12implimpl6core1;
        lib12implimpl6core1.doSomething();
        Lib12ImplImpl6Core2 lib12implimpl6core2;
        lib12implimpl6core2.doSomething();
        Lib12ImplImpl7Api1 lib12implimpl7api1;
        lib12implimpl7api1.doSomething();
        Lib12ImplImpl7Api2 lib12implimpl7api2;
        lib12implimpl7api2.doSomething();
        Lib12ImplImpl7Api3 lib12implimpl7api3;
        lib12implimpl7api3.doSomething();
        visited = 1;
    }
}

