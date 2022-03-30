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
int lib7implimpl15impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl15impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl15impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl15impl4(int a, int b) {
    return a + b;
}

int Lib7ImplImpl15Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib7ImplImpl15Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7ImplImpl15Impl" << std::endl;
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
        Lib7ImplImpl15Core1 lib7implimpl15core1;
        lib7implimpl15core1.doSomething();
        Lib7ImplImpl15Core2 lib7implimpl15core2;
        lib7implimpl15core2.doSomething();
        Lib7ImplImpl16Api1 lib7implimpl16api1;
        lib7implimpl16api1.doSomething();
        Lib7ImplImpl16Api2 lib7implimpl16api2;
        lib7implimpl16api2.doSomething();
        Lib7ImplImpl16Api3 lib7implimpl16api3;
        lib7implimpl16api3.doSomething();
        visited = 1;
    }
}

