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
int lib7implimpl4impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl4impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl4impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl4impl4(int a, int b) {
    return a + b;
}

int Lib7ImplImpl4Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib7ImplImpl4Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7ImplImpl4Impl" << std::endl;
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
        Lib7ImplImpl4Core1 lib7implimpl4core1;
        lib7implimpl4core1.doSomething();
        Lib7ImplImpl4Core2 lib7implimpl4core2;
        lib7implimpl4core2.doSomething();
        Lib7ImplImpl5Api1 lib7implimpl5api1;
        lib7implimpl5api1.doSomething();
        Lib7ImplImpl5Api2 lib7implimpl5api2;
        lib7implimpl5api2.doSomething();
        Lib7ImplImpl5Api3 lib7implimpl5api3;
        lib7implimpl5api3.doSomething();
        visited = 1;
    }
}

