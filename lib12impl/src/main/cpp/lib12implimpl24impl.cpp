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
int lib12implimpl24impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12implimpl24impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12implimpl24impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12implimpl24impl4(int a, int b) {
    return a + b;
}

int Lib12ImplImpl24Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib12ImplImpl24Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12ImplImpl24Impl" << std::endl;
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
        Lib12ImplImpl24Core1 lib12implimpl24core1;
        lib12implimpl24core1.doSomething();
        Lib12ImplImpl24Core2 lib12implimpl24core2;
        lib12implimpl24core2.doSomething();
        Lib12ImplImpl25Api1 lib12implimpl25api1;
        lib12implimpl25api1.doSomething();
        Lib12ImplImpl25Api2 lib12implimpl25api2;
        lib12implimpl25api2.doSomething();
        Lib12ImplImpl25Api3 lib12implimpl25api3;
        lib12implimpl25api3.doSomething();
        visited = 1;
    }
}

