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
int lib2implimpl7api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2implimpl7api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2implimpl7api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib2implimpl7api14(int a, int b) {
    return a + b;
}

int Lib2ImplImpl7Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib2ImplImpl7Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib2ImplImpl7Api1" << std::endl;
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
        Lib2ImplImpl8Api1 lib2implimpl8api1;
        lib2implimpl8api1.doSomething();
        Lib2ImplImpl7Impl lib2implimpl7impl;
        lib2implimpl7impl.doSomething();
        Lib2ImplImpl8Api2 lib2implimpl8api2;
        lib2implimpl8api2.doSomething();
        Lib2ImplImpl8Api3 lib2implimpl8api3;
        lib2implimpl8api3.doSomething();
        visited = 1;
    }
}

