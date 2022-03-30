// GENERATED SOURCE FILE

#include "lib7impl_private.h"
#include "lib7impl_impl.h"
#include "lib7core1.h"
#include "lib7core2.h"
#include "lib8api1.h"
#include "lib8api2.h"
#include "lib8api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7implimpl12api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl12api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl12api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl12api34(int a, int b) {
    return a + b;
}

int Lib7ImplImpl12Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib7ImplImpl12Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7ImplImpl12Api3" << std::endl;
        Lib7Core1 lib7core1;
        lib7core1.doSomething();
        Lib7Core2 lib7core2;
        lib7core2.doSomething();
        Lib8Api1 lib8api1;
        lib8api1.doSomething();
        Lib8Api2 lib8api2;
        lib8api2.doSomething();
        Lib8Api3 lib8api3;
        lib8api3.doSomething();
        Lib7ImplImpl12Impl lib7implimpl12impl;
        lib7implimpl12impl.doSomething();
        Lib7ImplImpl13Api1 lib7implimpl13api1;
        lib7implimpl13api1.doSomething();
        Lib7ImplImpl13Api2 lib7implimpl13api2;
        lib7implimpl13api2.doSomething();
        Lib7ImplImpl13Api3 lib7implimpl13api3;
        lib7implimpl13api3.doSomething();
        visited = 1;
    }
}

