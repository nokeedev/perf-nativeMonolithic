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
int lib12implimpl25impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12implimpl25impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12implimpl25impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12implimpl25impl4(int a, int b) {
    return a + b;
}

int Lib12ImplImpl25Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib12ImplImpl25Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12ImplImpl25Impl" << std::endl;
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
        Lib12ImplImpl25Core1 lib12implimpl25core1;
        lib12implimpl25core1.doSomething();
        Lib12ImplImpl25Core2 lib12implimpl25core2;
        lib12implimpl25core2.doSomething();
        Lib12ImplImpl26Api1 lib12implimpl26api1;
        lib12implimpl26api1.doSomething();
        Lib12ImplImpl26Api2 lib12implimpl26api2;
        lib12implimpl26api2.doSomething();
        Lib12ImplImpl26Api3 lib12implimpl26api3;
        lib12implimpl26api3.doSomething();
        visited = 1;
    }
}

