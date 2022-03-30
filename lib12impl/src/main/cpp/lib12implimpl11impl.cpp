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
int lib12implimpl11impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12implimpl11impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12implimpl11impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12implimpl11impl4(int a, int b) {
    return a + b;
}

int Lib12ImplImpl11Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib12ImplImpl11Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12ImplImpl11Impl" << std::endl;
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
        Lib12ImplImpl11Core1 lib12implimpl11core1;
        lib12implimpl11core1.doSomething();
        Lib12ImplImpl11Core2 lib12implimpl11core2;
        lib12implimpl11core2.doSomething();
        Lib12ImplImpl12Api1 lib12implimpl12api1;
        lib12implimpl12api1.doSomething();
        Lib12ImplImpl12Api2 lib12implimpl12api2;
        lib12implimpl12api2.doSomething();
        Lib12ImplImpl12Api3 lib12implimpl12api3;
        lib12implimpl12api3.doSomething();
        visited = 1;
    }
}

