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
int lib13implimpl23impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13implimpl23impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13implimpl23impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13implimpl23impl4(int a, int b) {
    return a + b;
}

int Lib13ImplImpl23Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib13ImplImpl23Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13ImplImpl23Impl" << std::endl;
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
        Lib13ImplImpl23Core1 lib13implimpl23core1;
        lib13implimpl23core1.doSomething();
        Lib13ImplImpl23Core2 lib13implimpl23core2;
        lib13implimpl23core2.doSomething();
        Lib13ImplImpl24Api1 lib13implimpl24api1;
        lib13implimpl24api1.doSomething();
        Lib13ImplImpl24Api2 lib13implimpl24api2;
        lib13implimpl24api2.doSomething();
        Lib13ImplImpl24Api3 lib13implimpl24api3;
        lib13implimpl24api3.doSomething();
        visited = 1;
    }
}
