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
int lib4implimpl32impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4implimpl32impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4implimpl32impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4implimpl32impl4(int a, int b) {
    return a + b;
}

int Lib4ImplImpl32Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4ImplImpl32Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4ImplImpl32Impl" << std::endl;
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
        Lib4ImplImpl32Core1 lib4implimpl32core1;
        lib4implimpl32core1.doSomething();
        Lib4ImplImpl32Core2 lib4implimpl32core2;
        lib4implimpl32core2.doSomething();
        Lib4ImplImpl33Api1 lib4implimpl33api1;
        lib4implimpl33api1.doSomething();
        Lib4ImplImpl33Api2 lib4implimpl33api2;
        lib4implimpl33api2.doSomething();
        Lib4ImplImpl33Api3 lib4implimpl33api3;
        lib4implimpl33api3.doSomething();
        visited = 1;
    }
}

