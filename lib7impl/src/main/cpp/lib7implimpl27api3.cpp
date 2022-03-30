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
int lib7implimpl27api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl27api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl27api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl27api34(int a, int b) {
    return a + b;
}

int Lib7ImplImpl27Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib7ImplImpl27Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7ImplImpl27Api3" << std::endl;
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
        Lib7ImplImpl27Impl lib7implimpl27impl;
        lib7implimpl27impl.doSomething();
        Lib7ImplImpl28Api1 lib7implimpl28api1;
        lib7implimpl28api1.doSomething();
        Lib7ImplImpl28Api2 lib7implimpl28api2;
        lib7implimpl28api2.doSomething();
        Lib7ImplImpl28Api3 lib7implimpl28api3;
        lib7implimpl28api3.doSomething();
        visited = 1;
    }
}

