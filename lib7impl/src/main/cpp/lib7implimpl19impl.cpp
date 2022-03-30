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
int lib7implimpl19impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl19impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl19impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl19impl4(int a, int b) {
    return a + b;
}

int Lib7ImplImpl19Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib7ImplImpl19Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7ImplImpl19Impl" << std::endl;
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
        Lib7ImplImpl19Core1 lib7implimpl19core1;
        lib7implimpl19core1.doSomething();
        Lib7ImplImpl19Core2 lib7implimpl19core2;
        lib7implimpl19core2.doSomething();
        Lib7ImplImpl20Api1 lib7implimpl20api1;
        lib7implimpl20api1.doSomething();
        Lib7ImplImpl20Api2 lib7implimpl20api2;
        lib7implimpl20api2.doSomething();
        Lib7ImplImpl20Api3 lib7implimpl20api3;
        lib7implimpl20api3.doSomething();
        visited = 1;
    }
}

