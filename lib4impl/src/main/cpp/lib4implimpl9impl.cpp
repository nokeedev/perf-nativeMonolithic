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
int lib4implimpl9impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4implimpl9impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4implimpl9impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib4implimpl9impl4(int a, int b) {
    return a + b;
}

int Lib4ImplImpl9Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib4ImplImpl9Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib4ImplImpl9Impl" << std::endl;
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
        Lib4ImplImpl9Core1 lib4implimpl9core1;
        lib4implimpl9core1.doSomething();
        Lib4ImplImpl9Core2 lib4implimpl9core2;
        lib4implimpl9core2.doSomething();
        Lib4ImplImpl10Api1 lib4implimpl10api1;
        lib4implimpl10api1.doSomething();
        Lib4ImplImpl10Api2 lib4implimpl10api2;
        lib4implimpl10api2.doSomething();
        Lib4ImplImpl10Api3 lib4implimpl10api3;
        lib4implimpl10api3.doSomething();
        visited = 1;
    }
}

