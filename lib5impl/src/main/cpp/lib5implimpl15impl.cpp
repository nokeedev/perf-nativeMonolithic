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
int lib5implimpl15impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl15impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl15impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl15impl4(int a, int b) {
    return a + b;
}

int Lib5ImplImpl15Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib5ImplImpl15Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5ImplImpl15Impl" << std::endl;
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
        Lib5ImplImpl15Core1 lib5implimpl15core1;
        lib5implimpl15core1.doSomething();
        Lib5ImplImpl15Core2 lib5implimpl15core2;
        lib5implimpl15core2.doSomething();
        Lib5ImplImpl16Api1 lib5implimpl16api1;
        lib5implimpl16api1.doSomething();
        Lib5ImplImpl16Api2 lib5implimpl16api2;
        lib5implimpl16api2.doSomething();
        Lib5ImplImpl16Api3 lib5implimpl16api3;
        lib5implimpl16api3.doSomething();
        visited = 1;
    }
}

