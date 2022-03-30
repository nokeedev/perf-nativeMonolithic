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
int lib5implimpl3impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl3impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl3impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl3impl4(int a, int b) {
    return a + b;
}

int Lib5ImplImpl3Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib5ImplImpl3Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5ImplImpl3Impl" << std::endl;
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
        Lib5ImplImpl3Core1 lib5implimpl3core1;
        lib5implimpl3core1.doSomething();
        Lib5ImplImpl3Core2 lib5implimpl3core2;
        lib5implimpl3core2.doSomething();
        Lib5ImplImpl4Api1 lib5implimpl4api1;
        lib5implimpl4api1.doSomething();
        Lib5ImplImpl4Api2 lib5implimpl4api2;
        lib5implimpl4api2.doSomething();
        Lib5ImplImpl4Api3 lib5implimpl4api3;
        lib5implimpl4api3.doSomething();
        visited = 1;
    }
}

