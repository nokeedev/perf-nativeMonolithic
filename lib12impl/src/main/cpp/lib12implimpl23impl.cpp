// GENERATED SOURCE FILE

#include "lib12impl_private.h"
#include "lib12impl_impl.h"
#include "lib12core1.h"
#include "lib12core2.h"
#include "lib13api1.h"
#include "lib13api2.h"
#include "lib13api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib12implimpl23impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12implimpl23impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12implimpl23impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12implimpl23impl4(int a, int b) {
    return a + b;
}

int Lib12ImplImpl23Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib12ImplImpl23Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12ImplImpl23Impl" << std::endl;
        Lib12Core1 lib12core1;
        lib12core1.doSomething();
        Lib12Core2 lib12core2;
        lib12core2.doSomething();
        Lib13Api1 lib13api1;
        lib13api1.doSomething();
        Lib13Api2 lib13api2;
        lib13api2.doSomething();
        Lib13Api3 lib13api3;
        lib13api3.doSomething();
        Lib12ImplImpl23Core1 lib12implimpl23core1;
        lib12implimpl23core1.doSomething();
        Lib12ImplImpl23Core2 lib12implimpl23core2;
        lib12implimpl23core2.doSomething();
        Lib12ImplImpl24Api1 lib12implimpl24api1;
        lib12implimpl24api1.doSomething();
        Lib12ImplImpl24Api2 lib12implimpl24api2;
        lib12implimpl24api2.doSomething();
        Lib12ImplImpl24Api3 lib12implimpl24api3;
        lib12implimpl24api3.doSomething();
        visited = 1;
    }
}

