// GENERATED SOURCE FILE

#include "lib3impl_private.h"
#include "lib3impl_impl.h"
#include "lib3core1.h"
#include "lib3core2.h"
#include "lib4api1.h"
#include "lib4api2.h"
#include "lib4api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib3implimpl6api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3implimpl6api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3implimpl6api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib3implimpl6api34(int a, int b) {
    return a + b;
}

int Lib3ImplImpl6Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib3ImplImpl6Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib3ImplImpl6Api3" << std::endl;
        Lib3Core1 lib3core1;
        lib3core1.doSomething();
        Lib3Core2 lib3core2;
        lib3core2.doSomething();
        Lib4Api1 lib4api1;
        lib4api1.doSomething();
        Lib4Api2 lib4api2;
        lib4api2.doSomething();
        Lib4Api3 lib4api3;
        lib4api3.doSomething();
        Lib3ImplImpl6Impl lib3implimpl6impl;
        lib3implimpl6impl.doSomething();
        Lib3ImplImpl7Api1 lib3implimpl7api1;
        lib3implimpl7api1.doSomething();
        Lib3ImplImpl7Api2 lib3implimpl7api2;
        lib3implimpl7api2.doSomething();
        Lib3ImplImpl7Api3 lib3implimpl7api3;
        lib3implimpl7api3.doSomething();
        visited = 1;
    }
}

