// GENERATED SOURCE FILE

#include "lib16impl_private.h"
#include "lib16impl_impl.h"
#include "lib16core1.h"
#include "lib16core2.h"
#include "lib17api1.h"
#include "lib17api2.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16implimpl19impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16implimpl19impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16implimpl19impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16implimpl19impl4(int a, int b) {
    return a + b;
}

int Lib16ImplImpl19Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib16ImplImpl19Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16ImplImpl19Impl" << std::endl;
        Lib16Core1 lib16core1;
        lib16core1.doSomething();
        Lib16Core2 lib16core2;
        lib16core2.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16ImplImpl19Core1 lib16implimpl19core1;
        lib16implimpl19core1.doSomething();
        Lib16ImplImpl19Core2 lib16implimpl19core2;
        lib16implimpl19core2.doSomething();
        Lib16ImplImpl20Api1 lib16implimpl20api1;
        lib16implimpl20api1.doSomething();
        Lib16ImplImpl20Api2 lib16implimpl20api2;
        lib16implimpl20api2.doSomething();
        Lib16ImplImpl20Api3 lib16implimpl20api3;
        lib16implimpl20api3.doSomething();
        visited = 1;
    }
}

