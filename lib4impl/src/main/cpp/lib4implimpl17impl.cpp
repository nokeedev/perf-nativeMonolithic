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
int lib4implimpl17impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4implimpl17impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4implimpl17impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4implimpl17impl4(int a, int b) {
    return a + b;
}

int Lib4ImplImpl17Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4ImplImpl17Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4ImplImpl17Impl" << std::endl;
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
        Lib4ImplImpl17Core1 lib4implimpl17core1;
        lib4implimpl17core1.doSomething();
        Lib4ImplImpl17Core2 lib4implimpl17core2;
        lib4implimpl17core2.doSomething();
        Lib4ImplImpl18Api1 lib4implimpl18api1;
        lib4implimpl18api1.doSomething();
        Lib4ImplImpl18Api2 lib4implimpl18api2;
        lib4implimpl18api2.doSomething();
        Lib4ImplImpl18Api3 lib4implimpl18api3;
        lib4implimpl18api3.doSomething();
        visited = 1;
    }
}

