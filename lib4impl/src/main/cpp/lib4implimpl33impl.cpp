// GENERATED SOURCE FILE

#include "lib4impl_private.h"
#include "lib4impl_impl.h"
#include "lib4core1.h"
#include "lib4core2.h"
#include "lib5api1.h"
#include "lib5api2.h"
#include "lib5api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib4implimpl33impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4implimpl33impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4implimpl33impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4implimpl33impl4(int a, int b) {
    return a + b;
}

int Lib4ImplImpl33Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4ImplImpl33Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4ImplImpl33Impl" << std::endl;
        Lib4Core1 lib4core1;
        lib4core1.doSomething();
        Lib4Core2 lib4core2;
        lib4core2.doSomething();
        Lib5Api1 lib5api1;
        lib5api1.doSomething();
        Lib5Api2 lib5api2;
        lib5api2.doSomething();
        Lib5Api3 lib5api3;
        lib5api3.doSomething();
        Lib4ImplImpl33Core lib4implimpl33core;
        lib4implimpl33core.doSomething();
        Lib4ImplImpl34Api lib4implimpl34api;
        lib4implimpl34api.doSomething();
        visited = 1;
    }
}

