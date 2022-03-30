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
int lib7implimpl8impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl8impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl8impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl8impl4(int a, int b) {
    return a + b;
}

int Lib7ImplImpl8Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib7ImplImpl8Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7ImplImpl8Impl" << std::endl;
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
        Lib7ImplImpl8Core1 lib7implimpl8core1;
        lib7implimpl8core1.doSomething();
        Lib7ImplImpl8Core2 lib7implimpl8core2;
        lib7implimpl8core2.doSomething();
        Lib7ImplImpl9Api1 lib7implimpl9api1;
        lib7implimpl9api1.doSomething();
        Lib7ImplImpl9Api2 lib7implimpl9api2;
        lib7implimpl9api2.doSomething();
        Lib7ImplImpl9Api3 lib7implimpl9api3;
        lib7implimpl9api3.doSomething();
        visited = 1;
    }
}

