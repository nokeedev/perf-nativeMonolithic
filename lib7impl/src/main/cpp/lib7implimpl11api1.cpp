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
int lib7implimpl11api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl11api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl11api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7implimpl11api14(int a, int b) {
    return a + b;
}

int Lib7ImplImpl11Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib7ImplImpl11Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7ImplImpl11Api1" << std::endl;
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
        Lib7ImplImpl12Api1 lib7implimpl12api1;
        lib7implimpl12api1.doSomething();
        Lib7ImplImpl11Impl lib7implimpl11impl;
        lib7implimpl11impl.doSomething();
        Lib7ImplImpl12Api2 lib7implimpl12api2;
        lib7implimpl12api2.doSomething();
        Lib7ImplImpl12Api3 lib7implimpl12api3;
        lib7implimpl12api3.doSomething();
        visited = 1;
    }
}
