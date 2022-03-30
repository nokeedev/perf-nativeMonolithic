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
int lib4implimpl16impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4implimpl16impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4implimpl16impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4implimpl16impl4(int a, int b) {
    return a + b;
}

int Lib4ImplImpl16Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4ImplImpl16Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4ImplImpl16Impl" << std::endl;
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
        Lib4ImplImpl16Core1 lib4implimpl16core1;
        lib4implimpl16core1.doSomething();
        Lib4ImplImpl16Core2 lib4implimpl16core2;
        lib4implimpl16core2.doSomething();
        Lib4ImplImpl17Api1 lib4implimpl17api1;
        lib4implimpl17api1.doSomething();
        Lib4ImplImpl17Api2 lib4implimpl17api2;
        lib4implimpl17api2.doSomething();
        Lib4ImplImpl17Api3 lib4implimpl17api3;
        lib4implimpl17api3.doSomething();
        visited = 1;
    }
}

