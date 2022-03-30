// GENERATED SOURCE FILE

#include "lib9impl_private.h"
#include "lib9impl_impl.h"
#include "lib9core1.h"
#include "lib9core2.h"
#include "lib10api1.h"
#include "lib10api2.h"
#include "lib10api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9implimpl6impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9implimpl6impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9implimpl6impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9implimpl6impl4(int a, int b) {
    return a + b;
}

int Lib9ImplImpl6Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib9ImplImpl6Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9ImplImpl6Impl" << std::endl;
        Lib9Core1 lib9core1;
        lib9core1.doSomething();
        Lib9Core2 lib9core2;
        lib9core2.doSomething();
        Lib10Api1 lib10api1;
        lib10api1.doSomething();
        Lib10Api2 lib10api2;
        lib10api2.doSomething();
        Lib10Api3 lib10api3;
        lib10api3.doSomething();
        Lib9ImplImpl6Core1 lib9implimpl6core1;
        lib9implimpl6core1.doSomething();
        Lib9ImplImpl6Core2 lib9implimpl6core2;
        lib9implimpl6core2.doSomething();
        Lib9ImplImpl7Api1 lib9implimpl7api1;
        lib9implimpl7api1.doSomething();
        Lib9ImplImpl7Api2 lib9implimpl7api2;
        lib9implimpl7api2.doSomething();
        Lib9ImplImpl7Api3 lib9implimpl7api3;
        lib9implimpl7api3.doSomething();
        visited = 1;
    }
}

