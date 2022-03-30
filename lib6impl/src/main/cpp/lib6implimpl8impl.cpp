// GENERATED SOURCE FILE

#include "lib6impl_private.h"
#include "lib6impl_impl.h"
#include "lib6core1.h"
#include "lib6core2.h"
#include "lib7api1.h"
#include "lib7api2.h"
#include "lib7api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6implimpl8impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6implimpl8impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6implimpl8impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6implimpl8impl4(int a, int b) {
    return a + b;
}

int Lib6ImplImpl8Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib6ImplImpl8Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6ImplImpl8Impl" << std::endl;
        Lib6Core1 lib6core1;
        lib6core1.doSomething();
        Lib6Core2 lib6core2;
        lib6core2.doSomething();
        Lib7Api1 lib7api1;
        lib7api1.doSomething();
        Lib7Api2 lib7api2;
        lib7api2.doSomething();
        Lib7Api3 lib7api3;
        lib7api3.doSomething();
        Lib6ImplImpl8Core1 lib6implimpl8core1;
        lib6implimpl8core1.doSomething();
        Lib6ImplImpl8Core2 lib6implimpl8core2;
        lib6implimpl8core2.doSomething();
        Lib6ImplImpl9Api1 lib6implimpl9api1;
        lib6implimpl9api1.doSomething();
        Lib6ImplImpl9Api2 lib6implimpl9api2;
        lib6implimpl9api2.doSomething();
        Lib6ImplImpl9Api3 lib6implimpl9api3;
        lib6implimpl9api3.doSomething();
        visited = 1;
    }
}

