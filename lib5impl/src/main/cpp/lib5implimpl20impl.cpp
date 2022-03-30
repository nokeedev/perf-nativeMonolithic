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
int lib5implimpl20impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl20impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl20impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib5implimpl20impl4(int a, int b) {
    return a + b;
}

int Lib5ImplImpl20Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib5ImplImpl20Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib5ImplImpl20Impl" << std::endl;
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
        Lib5ImplImpl20Core1 lib5implimpl20core1;
        lib5implimpl20core1.doSomething();
        Lib5ImplImpl20Core2 lib5implimpl20core2;
        lib5implimpl20core2.doSomething();
        Lib5ImplImpl21Api1 lib5implimpl21api1;
        lib5implimpl21api1.doSomething();
        Lib5ImplImpl21Api2 lib5implimpl21api2;
        lib5implimpl21api2.doSomething();
        Lib5ImplImpl21Api3 lib5implimpl21api3;
        lib5implimpl21api3.doSomething();
        visited = 1;
    }
}

