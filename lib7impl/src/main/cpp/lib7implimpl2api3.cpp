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
int lib7implimpl2api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl2api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl2api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl2api34(int a, int b) {
    return a + b;
}

int Lib7ImplImpl2Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib7ImplImpl2Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7ImplImpl2Api3" << std::endl;
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
        Lib7ImplImpl2Impl lib7implimpl2impl;
        lib7implimpl2impl.doSomething();
        Lib7ImplImpl3Api1 lib7implimpl3api1;
        lib7implimpl3api1.doSomething();
        Lib7ImplImpl3Api2 lib7implimpl3api2;
        lib7implimpl3api2.doSomething();
        Lib7ImplImpl3Api3 lib7implimpl3api3;
        lib7implimpl3api3.doSomething();
        visited = 1;
    }
}

