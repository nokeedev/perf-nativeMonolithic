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
int lib12implimpl13api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12implimpl13api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12implimpl13api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12implimpl13api34(int a, int b) {
    return a + b;
}

int Lib12ImplImpl13Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib12ImplImpl13Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12ImplImpl13Api3" << std::endl;
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
        Lib12ImplImpl13Impl lib12implimpl13impl;
        lib12implimpl13impl.doSomething();
        Lib12ImplImpl14Api1 lib12implimpl14api1;
        lib12implimpl14api1.doSomething();
        Lib12ImplImpl14Api2 lib12implimpl14api2;
        lib12implimpl14api2.doSomething();
        Lib12ImplImpl14Api3 lib12implimpl14api3;
        lib12implimpl14api3.doSomething();
        visited = 1;
    }
}

