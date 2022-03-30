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
int lib16implimpl14impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16implimpl14impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16implimpl14impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16implimpl14impl4(int a, int b) {
    return a + b;
}

int Lib16ImplImpl14Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib16ImplImpl14Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16ImplImpl14Impl" << std::endl;
        Lib16Core1 lib16core1;
        lib16core1.doSomething();
        Lib16Core2 lib16core2;
        lib16core2.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16ImplImpl14Core1 lib16implimpl14core1;
        lib16implimpl14core1.doSomething();
        Lib16ImplImpl14Core2 lib16implimpl14core2;
        lib16implimpl14core2.doSomething();
        Lib16ImplImpl15Api1 lib16implimpl15api1;
        lib16implimpl15api1.doSomething();
        Lib16ImplImpl15Api2 lib16implimpl15api2;
        lib16implimpl15api2.doSomething();
        Lib16ImplImpl15Api3 lib16implimpl15api3;
        lib16implimpl15api3.doSomething();
        visited = 1;
    }
}

