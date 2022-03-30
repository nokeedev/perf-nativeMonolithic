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
int lib7implimpl26impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl26impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl26impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl26impl4(int a, int b) {
    return a + b;
}

int Lib7ImplImpl26Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib7ImplImpl26Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7ImplImpl26Impl" << std::endl;
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
        Lib7ImplImpl26Core1 lib7implimpl26core1;
        lib7implimpl26core1.doSomething();
        Lib7ImplImpl26Core2 lib7implimpl26core2;
        lib7implimpl26core2.doSomething();
        Lib7ImplImpl27Api1 lib7implimpl27api1;
        lib7implimpl27api1.doSomething();
        Lib7ImplImpl27Api2 lib7implimpl27api2;
        lib7implimpl27api2.doSomething();
        Lib7ImplImpl27Api3 lib7implimpl27api3;
        lib7implimpl27api3.doSomething();
        visited = 1;
    }
}

