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
int lib5implimpl17impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl17impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl17impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl17impl4(int a, int b) {
    return a + b;
}

int Lib5ImplImpl17Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib5ImplImpl17Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5ImplImpl17Impl" << std::endl;
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
        Lib5ImplImpl17Core1 lib5implimpl17core1;
        lib5implimpl17core1.doSomething();
        Lib5ImplImpl17Core2 lib5implimpl17core2;
        lib5implimpl17core2.doSomething();
        Lib5ImplImpl18Api1 lib5implimpl18api1;
        lib5implimpl18api1.doSomething();
        Lib5ImplImpl18Api2 lib5implimpl18api2;
        lib5implimpl18api2.doSomething();
        Lib5ImplImpl18Api3 lib5implimpl18api3;
        lib5implimpl18api3.doSomething();
        visited = 1;
    }
}

