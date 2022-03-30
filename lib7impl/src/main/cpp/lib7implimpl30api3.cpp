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
int lib7implimpl30api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl30api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl30api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl30api34(int a, int b) {
    return a + b;
}

int Lib7ImplImpl30Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib7ImplImpl30Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7ImplImpl30Api3" << std::endl;
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
        Lib7ImplImpl30Impl lib7implimpl30impl;
        lib7implimpl30impl.doSomething();
        Lib7ImplImpl31Api1 lib7implimpl31api1;
        lib7implimpl31api1.doSomething();
        Lib7ImplImpl31Api2 lib7implimpl31api2;
        lib7implimpl31api2.doSomething();
        Lib7ImplImpl31Api3 lib7implimpl31api3;
        lib7implimpl31api3.doSomething();
        visited = 1;
    }
}

