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
int lib6implimpl33impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6implimpl33impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6implimpl33impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6implimpl33impl4(int a, int b) {
    return a + b;
}

int Lib6ImplImpl33Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib6ImplImpl33Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6ImplImpl33Impl" << std::endl;
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
        Lib6ImplImpl33Core lib6implimpl33core;
        lib6implimpl33core.doSomething();
        Lib6ImplImpl34Api lib6implimpl34api;
        lib6implimpl34api.doSomething();
        visited = 1;
    }
}

