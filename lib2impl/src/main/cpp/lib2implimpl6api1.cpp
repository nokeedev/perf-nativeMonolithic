// GENERATED SOURCE FILE

#include "lib2impl_private.h"
#include "lib2impl_impl.h"
#include "lib2core1.h"
#include "lib2core2.h"
#include "lib3api1.h"
#include "lib3api2.h"
#include "lib3api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib2implimpl6api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2implimpl6api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2implimpl6api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2implimpl6api14(int a, int b) {
    return a + b;
}

int Lib2ImplImpl6Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib2ImplImpl6Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2ImplImpl6Api1" << std::endl;
        Lib2Core1 lib2core1;
        lib2core1.doSomething();
        Lib2Core2 lib2core2;
        lib2core2.doSomething();
        Lib3Api1 lib3api1;
        lib3api1.doSomething();
        Lib3Api2 lib3api2;
        lib3api2.doSomething();
        Lib3Api3 lib3api3;
        lib3api3.doSomething();
        Lib2ImplImpl7Api1 lib2implimpl7api1;
        lib2implimpl7api1.doSomething();
        Lib2ImplImpl6Impl lib2implimpl6impl;
        lib2implimpl6impl.doSomething();
        Lib2ImplImpl7Api2 lib2implimpl7api2;
        lib2implimpl7api2.doSomething();
        Lib2ImplImpl7Api3 lib2implimpl7api3;
        lib2implimpl7api3.doSomething();
        visited = 1;
    }
}

