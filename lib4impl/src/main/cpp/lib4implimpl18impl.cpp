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
int lib4implimpl18impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4implimpl18impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4implimpl18impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4implimpl18impl4(int a, int b) {
    return a + b;
}

int Lib4ImplImpl18Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4ImplImpl18Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4ImplImpl18Impl" << std::endl;
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
        Lib4ImplImpl18Core1 lib4implimpl18core1;
        lib4implimpl18core1.doSomething();
        Lib4ImplImpl18Core2 lib4implimpl18core2;
        lib4implimpl18core2.doSomething();
        Lib4ImplImpl19Api1 lib4implimpl19api1;
        lib4implimpl19api1.doSomething();
        Lib4ImplImpl19Api2 lib4implimpl19api2;
        lib4implimpl19api2.doSomething();
        Lib4ImplImpl19Api3 lib4implimpl19api3;
        lib4implimpl19api3.doSomething();
        visited = 1;
    }
}

