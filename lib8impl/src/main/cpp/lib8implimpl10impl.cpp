// GENERATED SOURCE FILE

#include "lib8impl_private.h"
#include "lib8impl_impl.h"
#include "lib8core1.h"
#include "lib8core2.h"
#include "lib9api1.h"
#include "lib9api2.h"
#include "lib9api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8implimpl10impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8implimpl10impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8implimpl10impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8implimpl10impl4(int a, int b) {
    return a + b;
}

int Lib8ImplImpl10Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib8ImplImpl10Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8ImplImpl10Impl" << std::endl;
        Lib8Core1 lib8core1;
        lib8core1.doSomething();
        Lib8Core2 lib8core2;
        lib8core2.doSomething();
        Lib9Api1 lib9api1;
        lib9api1.doSomething();
        Lib9Api2 lib9api2;
        lib9api2.doSomething();
        Lib9Api3 lib9api3;
        lib9api3.doSomething();
        Lib8ImplImpl10Core1 lib8implimpl10core1;
        lib8implimpl10core1.doSomething();
        Lib8ImplImpl10Core2 lib8implimpl10core2;
        lib8implimpl10core2.doSomething();
        Lib8ImplImpl11Api1 lib8implimpl11api1;
        lib8implimpl11api1.doSomething();
        Lib8ImplImpl11Api2 lib8implimpl11api2;
        lib8implimpl11api2.doSomething();
        Lib8ImplImpl11Api3 lib8implimpl11api3;
        lib8implimpl11api3.doSomething();
        visited = 1;
    }
}

