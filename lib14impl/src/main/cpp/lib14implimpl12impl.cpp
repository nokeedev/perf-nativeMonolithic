// GENERATED SOURCE FILE

#include "lib14impl_private.h"
#include "lib14impl_impl.h"
#include "lib14core1.h"
#include "lib14core2.h"
#include "lib15api1.h"
#include "lib15api2.h"
#include "lib15api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14implimpl12impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl12impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl12impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14implimpl12impl4(int a, int b) {
    return a + b;
}

int Lib14ImplImpl12Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib14ImplImpl12Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14ImplImpl12Impl" << std::endl;
        Lib14Core1 lib14core1;
        lib14core1.doSomething();
        Lib14Core2 lib14core2;
        lib14core2.doSomething();
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14ImplImpl12Core1 lib14implimpl12core1;
        lib14implimpl12core1.doSomething();
        Lib14ImplImpl12Core2 lib14implimpl12core2;
        lib14implimpl12core2.doSomething();
        Lib14ImplImpl13Api1 lib14implimpl13api1;
        lib14implimpl13api1.doSomething();
        Lib14ImplImpl13Api2 lib14implimpl13api2;
        lib14implimpl13api2.doSomething();
        Lib14ImplImpl13Api3 lib14implimpl13api3;
        lib14implimpl13api3.doSomething();
        visited = 1;
    }
}

