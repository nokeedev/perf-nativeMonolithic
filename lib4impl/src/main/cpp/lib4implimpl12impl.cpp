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
int lib4implimpl12impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4implimpl12impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4implimpl12impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4implimpl12impl4(int a, int b) {
    return a + b;
}

int Lib4ImplImpl12Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4ImplImpl12Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4ImplImpl12Impl" << std::endl;
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
        Lib4ImplImpl12Core1 lib4implimpl12core1;
        lib4implimpl12core1.doSomething();
        Lib4ImplImpl12Core2 lib4implimpl12core2;
        lib4implimpl12core2.doSomething();
        Lib4ImplImpl13Api1 lib4implimpl13api1;
        lib4implimpl13api1.doSomething();
        Lib4ImplImpl13Api2 lib4implimpl13api2;
        lib4implimpl13api2.doSomething();
        Lib4ImplImpl13Api3 lib4implimpl13api3;
        lib4implimpl13api3.doSomething();
        visited = 1;
    }
}

