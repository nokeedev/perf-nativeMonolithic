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
int lib12implimpl4impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12implimpl4impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12implimpl4impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12implimpl4impl4(int a, int b) {
    return a + b;
}

int Lib12ImplImpl4Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib12ImplImpl4Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12ImplImpl4Impl" << std::endl;
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
        Lib12ImplImpl4Core1 lib12implimpl4core1;
        lib12implimpl4core1.doSomething();
        Lib12ImplImpl4Core2 lib12implimpl4core2;
        lib12implimpl4core2.doSomething();
        Lib12ImplImpl5Api1 lib12implimpl5api1;
        lib12implimpl5api1.doSomething();
        Lib12ImplImpl5Api2 lib12implimpl5api2;
        lib12implimpl5api2.doSomething();
        Lib12ImplImpl5Api3 lib12implimpl5api3;
        lib12implimpl5api3.doSomething();
        visited = 1;
    }
}

