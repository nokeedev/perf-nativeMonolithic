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
int lib5implimpl31impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl31impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl31impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl31impl4(int a, int b) {
    return a + b;
}

int Lib5ImplImpl31Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib5ImplImpl31Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5ImplImpl31Impl" << std::endl;
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
        Lib5ImplImpl31Core1 lib5implimpl31core1;
        lib5implimpl31core1.doSomething();
        Lib5ImplImpl31Core2 lib5implimpl31core2;
        lib5implimpl31core2.doSomething();
        Lib5ImplImpl32Api1 lib5implimpl32api1;
        lib5implimpl32api1.doSomething();
        Lib5ImplImpl32Api2 lib5implimpl32api2;
        lib5implimpl32api2.doSomething();
        Lib5ImplImpl32Api3 lib5implimpl32api3;
        lib5implimpl32api3.doSomething();
        visited = 1;
    }
}

