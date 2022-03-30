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
int lib13implimpl27impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13implimpl27impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13implimpl27impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13implimpl27impl4(int a, int b) {
    return a + b;
}

int Lib13ImplImpl27Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib13ImplImpl27Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13ImplImpl27Impl" << std::endl;
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
        Lib13ImplImpl27Core1 lib13implimpl27core1;
        lib13implimpl27core1.doSomething();
        Lib13ImplImpl27Core2 lib13implimpl27core2;
        lib13implimpl27core2.doSomething();
        Lib13ImplImpl28Api1 lib13implimpl28api1;
        lib13implimpl28api1.doSomething();
        Lib13ImplImpl28Api2 lib13implimpl28api2;
        lib13implimpl28api2.doSomething();
        Lib13ImplImpl28Api3 lib13implimpl28api3;
        lib13implimpl28api3.doSomething();
        visited = 1;
    }
}

