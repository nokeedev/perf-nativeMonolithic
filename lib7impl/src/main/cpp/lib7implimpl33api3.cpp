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
int lib7implimpl33api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl33api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl33api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl33api34(int a, int b) {
    return a + b;
}

int Lib7ImplImpl33Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib7ImplImpl33Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7ImplImpl33Api3" << std::endl;
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
        Lib7ImplImpl33Impl lib7implimpl33impl;
        lib7implimpl33impl.doSomething();
        Lib7ImplImpl34Api lib7implimpl34api;
        lib7implimpl34api.doSomething();
        visited = 1;
    }
}

