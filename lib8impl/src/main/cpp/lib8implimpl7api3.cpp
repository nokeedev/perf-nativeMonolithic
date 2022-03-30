// GENERATED SOURCE FILE

#include "lib8impl_private.h"
#include "lib8impl_impl.h"
#include "lib8core1.h"
#include "lib8core2.h"
#include "lib9api1.h"
#include "lib9api2.h"
#include "lib9api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8implimpl7api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8implimpl7api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8implimpl7api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8implimpl7api34(int a, int b) {
    return a + b;
}

int Lib8ImplImpl7Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib8ImplImpl7Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8ImplImpl7Api3" << std::endl;
        Lib8Core1 lib8core1;
        lib8core1.doSomething();
        Lib8Core2 lib8core2;
        lib8core2.doSomething();
        Lib9Api1 lib9api1;
        lib9api1.doSomething();
        Lib9Api2 lib9api2;
        lib9api2.doSomething();
        Lib9Api3 lib9api3;
        lib9api3.doSomething();
        Lib8ImplImpl7Impl lib8implimpl7impl;
        lib8implimpl7impl.doSomething();
        Lib8ImplImpl8Api1 lib8implimpl8api1;
        lib8implimpl8api1.doSomething();
        Lib8ImplImpl8Api2 lib8implimpl8api2;
        lib8implimpl8api2.doSomething();
        Lib8ImplImpl8Api3 lib8implimpl8api3;
        lib8implimpl8api3.doSomething();
        visited = 1;
    }
}

