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
int lib7implimpl10impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl10impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl10impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl10impl4(int a, int b) {
    return a + b;
}

int Lib7ImplImpl10Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib7ImplImpl10Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7ImplImpl10Impl" << std::endl;
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
        Lib7ImplImpl10Core1 lib7implimpl10core1;
        lib7implimpl10core1.doSomething();
        Lib7ImplImpl10Core2 lib7implimpl10core2;
        lib7implimpl10core2.doSomething();
        Lib7ImplImpl11Api1 lib7implimpl11api1;
        lib7implimpl11api1.doSomething();
        Lib7ImplImpl11Api2 lib7implimpl11api2;
        lib7implimpl11api2.doSomething();
        Lib7ImplImpl11Api3 lib7implimpl11api3;
        lib7implimpl11api3.doSomething();
        visited = 1;
    }
}

