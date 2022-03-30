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
int lib6implimpl16impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6implimpl16impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6implimpl16impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6implimpl16impl4(int a, int b) {
    return a + b;
}

int Lib6ImplImpl16Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib6ImplImpl16Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6ImplImpl16Impl" << std::endl;
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
        Lib6ImplImpl16Core1 lib6implimpl16core1;
        lib6implimpl16core1.doSomething();
        Lib6ImplImpl16Core2 lib6implimpl16core2;
        lib6implimpl16core2.doSomething();
        Lib6ImplImpl17Api1 lib6implimpl17api1;
        lib6implimpl17api1.doSomething();
        Lib6ImplImpl17Api2 lib6implimpl17api2;
        lib6implimpl17api2.doSomething();
        Lib6ImplImpl17Api3 lib6implimpl17api3;
        lib6implimpl17api3.doSomething();
        visited = 1;
    }
}

