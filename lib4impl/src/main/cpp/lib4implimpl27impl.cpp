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
int lib4implimpl27impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4implimpl27impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4implimpl27impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4implimpl27impl4(int a, int b) {
    return a + b;
}

int Lib4ImplImpl27Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4ImplImpl27Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4ImplImpl27Impl" << std::endl;
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
        Lib4ImplImpl27Core1 lib4implimpl27core1;
        lib4implimpl27core1.doSomething();
        Lib4ImplImpl27Core2 lib4implimpl27core2;
        lib4implimpl27core2.doSomething();
        Lib4ImplImpl28Api1 lib4implimpl28api1;
        lib4implimpl28api1.doSomething();
        Lib4ImplImpl28Api2 lib4implimpl28api2;
        lib4implimpl28api2.doSomething();
        Lib4ImplImpl28Api3 lib4implimpl28api3;
        lib4implimpl28api3.doSomething();
        visited = 1;
    }
}

