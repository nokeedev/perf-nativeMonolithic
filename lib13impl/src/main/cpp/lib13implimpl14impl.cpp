// GENERATED SOURCE FILE

#include "lib13impl_private.h"
#include "lib13impl_impl.h"
#include "lib13core1.h"
#include "lib13core2.h"
#include "lib14api1.h"
#include "lib14api2.h"
#include "lib14api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13implimpl14impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13implimpl14impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13implimpl14impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13implimpl14impl4(int a, int b) {
    return a + b;
}

int Lib13ImplImpl14Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib13ImplImpl14Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13ImplImpl14Impl" << std::endl;
        Lib13Core1 lib13core1;
        lib13core1.doSomething();
        Lib13Core2 lib13core2;
        lib13core2.doSomething();
        Lib14Api1 lib14api1;
        lib14api1.doSomething();
        Lib14Api2 lib14api2;
        lib14api2.doSomething();
        Lib14Api3 lib14api3;
        lib14api3.doSomething();
        Lib13ImplImpl14Core1 lib13implimpl14core1;
        lib13implimpl14core1.doSomething();
        Lib13ImplImpl14Core2 lib13implimpl14core2;
        lib13implimpl14core2.doSomething();
        Lib13ImplImpl15Api1 lib13implimpl15api1;
        lib13implimpl15api1.doSomething();
        Lib13ImplImpl15Api2 lib13implimpl15api2;
        lib13implimpl15api2.doSomething();
        Lib13ImplImpl15Api3 lib13implimpl15api3;
        lib13implimpl15api3.doSomething();
        visited = 1;
    }
}

