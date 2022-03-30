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
int lib12implimpl27api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12implimpl27api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12implimpl27api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib12implimpl27api34(int a, int b) {
    return a + b;
}

int Lib12ImplImpl27Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib12ImplImpl27Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib12ImplImpl27Api3" << std::endl;
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
        Lib12ImplImpl27Impl lib12implimpl27impl;
        lib12implimpl27impl.doSomething();
        Lib12ImplImpl28Api1 lib12implimpl28api1;
        lib12implimpl28api1.doSomething();
        Lib12ImplImpl28Api2 lib12implimpl28api2;
        lib12implimpl28api2.doSomething();
        Lib12ImplImpl28Api3 lib12implimpl28api3;
        lib12implimpl28api3.doSomething();
        visited = 1;
    }
}

