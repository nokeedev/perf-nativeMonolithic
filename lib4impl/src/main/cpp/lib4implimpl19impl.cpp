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
int lib4implimpl19impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4implimpl19impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4implimpl19impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4implimpl19impl4(int a, int b) {
    return a + b;
}

int Lib4ImplImpl19Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4ImplImpl19Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4ImplImpl19Impl" << std::endl;
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
        Lib4ImplImpl19Core1 lib4implimpl19core1;
        lib4implimpl19core1.doSomething();
        Lib4ImplImpl19Core2 lib4implimpl19core2;
        lib4implimpl19core2.doSomething();
        Lib4ImplImpl20Api1 lib4implimpl20api1;
        lib4implimpl20api1.doSomething();
        Lib4ImplImpl20Api2 lib4implimpl20api2;
        lib4implimpl20api2.doSomething();
        Lib4ImplImpl20Api3 lib4implimpl20api3;
        lib4implimpl20api3.doSomething();
        visited = 1;
    }
}

