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
int lib5implimpl21impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl21impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl21impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl21impl4(int a, int b) {
    return a + b;
}

int Lib5ImplImpl21Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib5ImplImpl21Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5ImplImpl21Impl" << std::endl;
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
        Lib5ImplImpl21Core1 lib5implimpl21core1;
        lib5implimpl21core1.doSomething();
        Lib5ImplImpl21Core2 lib5implimpl21core2;
        lib5implimpl21core2.doSomething();
        Lib5ImplImpl22Api1 lib5implimpl22api1;
        lib5implimpl22api1.doSomething();
        Lib5ImplImpl22Api2 lib5implimpl22api2;
        lib5implimpl22api2.doSomething();
        Lib5ImplImpl22Api3 lib5implimpl22api3;
        lib5implimpl22api3.doSomething();
        visited = 1;
    }
}

