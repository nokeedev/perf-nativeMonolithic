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
int lib5implimpl25impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl25impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl25impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl25impl4(int a, int b) {
    return a + b;
}

int Lib5ImplImpl25Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib5ImplImpl25Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5ImplImpl25Impl" << std::endl;
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
        Lib5ImplImpl25Core1 lib5implimpl25core1;
        lib5implimpl25core1.doSomething();
        Lib5ImplImpl25Core2 lib5implimpl25core2;
        lib5implimpl25core2.doSomething();
        Lib5ImplImpl26Api1 lib5implimpl26api1;
        lib5implimpl26api1.doSomething();
        Lib5ImplImpl26Api2 lib5implimpl26api2;
        lib5implimpl26api2.doSomething();
        Lib5ImplImpl26Api3 lib5implimpl26api3;
        lib5implimpl26api3.doSomething();
        visited = 1;
    }
}
