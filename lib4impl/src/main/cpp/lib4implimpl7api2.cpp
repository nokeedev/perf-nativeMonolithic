// GENERATED SOURCE FILE

#include "lib4impl_private.h"
#include "lib4impl_impl.h"
#include "lib4core1.h"
#include "lib4core2.h"
#include "lib5api1.h"
#include "lib5api2.h"
#include "lib5api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4implimpl7api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4implimpl7api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4implimpl7api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4implimpl7api24(int a, int b) {
    return a + b;
}

int Lib4ImplImpl7Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib4ImplImpl7Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4ImplImpl7Api2" << std::endl;
        Lib4Core1 lib4core1;
        lib4core1.doSomething();
        Lib4Core2 lib4core2;
        lib4core2.doSomething();
        Lib5Api1 lib5api1;
        lib5api1.doSomething();
        Lib5Api2 lib5api2;
        lib5api2.doSomething();
        Lib5Api3 lib5api3;
        lib5api3.doSomething();
        Lib4ImplImpl7Impl lib4implimpl7impl;
        lib4implimpl7impl.doSomething();
        Lib4ImplImpl8Api1 lib4implimpl8api1;
        lib4implimpl8api1.doSomething();
        Lib4ImplImpl8Api2 lib4implimpl8api2;
        lib4implimpl8api2.doSomething();
        Lib4ImplImpl8Api3 lib4implimpl8api3;
        lib4implimpl8api3.doSomething();
        visited = 1;
    }
}

