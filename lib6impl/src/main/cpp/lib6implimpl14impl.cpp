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
int lib6implimpl14impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6implimpl14impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6implimpl14impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6implimpl14impl4(int a, int b) {
    return a + b;
}

int Lib6ImplImpl14Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib6ImplImpl14Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6ImplImpl14Impl" << std::endl;
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
        Lib6ImplImpl14Core1 lib6implimpl14core1;
        lib6implimpl14core1.doSomething();
        Lib6ImplImpl14Core2 lib6implimpl14core2;
        lib6implimpl14core2.doSomething();
        Lib6ImplImpl15Api1 lib6implimpl15api1;
        lib6implimpl15api1.doSomething();
        Lib6ImplImpl15Api2 lib6implimpl15api2;
        lib6implimpl15api2.doSomething();
        Lib6ImplImpl15Api3 lib6implimpl15api3;
        lib6implimpl15api3.doSomething();
        visited = 1;
    }
}

