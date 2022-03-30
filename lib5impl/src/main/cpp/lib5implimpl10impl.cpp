// GENERATED SOURCE FILE

#include "lib5impl_private.h"
#include "lib5impl_impl.h"
#include "lib5core1.h"
#include "lib5core2.h"
#include "lib6api1.h"
#include "lib6api2.h"
#include "lib6api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib5implimpl10impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl10impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl10impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl10impl4(int a, int b) {
    return a + b;
}

int Lib5ImplImpl10Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib5ImplImpl10Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5ImplImpl10Impl" << std::endl;
        Lib5Core1 lib5core1;
        lib5core1.doSomething();
        Lib5Core2 lib5core2;
        lib5core2.doSomething();
        Lib6Api1 lib6api1;
        lib6api1.doSomething();
        Lib6Api2 lib6api2;
        lib6api2.doSomething();
        Lib6Api3 lib6api3;
        lib6api3.doSomething();
        Lib5ImplImpl10Core1 lib5implimpl10core1;
        lib5implimpl10core1.doSomething();
        Lib5ImplImpl10Core2 lib5implimpl10core2;
        lib5implimpl10core2.doSomething();
        Lib5ImplImpl11Api1 lib5implimpl11api1;
        lib5implimpl11api1.doSomething();
        Lib5ImplImpl11Api2 lib5implimpl11api2;
        lib5implimpl11api2.doSomething();
        Lib5ImplImpl11Api3 lib5implimpl11api3;
        lib5implimpl11api3.doSomething();
        visited = 1;
    }
}

