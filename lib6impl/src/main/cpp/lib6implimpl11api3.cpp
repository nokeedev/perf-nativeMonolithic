// GENERATED SOURCE FILE

#include "lib6impl_private.h"
#include "lib6impl_impl.h"
#include "lib6core1.h"
#include "lib6core2.h"
#include "lib7api1.h"
#include "lib7api2.h"
#include "lib7api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6implimpl11api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6implimpl11api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6implimpl11api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6implimpl11api34(int a, int b) {
    return a + b;
}

int Lib6ImplImpl11Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib6ImplImpl11Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6ImplImpl11Api3" << std::endl;
        Lib6Core1 lib6core1;
        lib6core1.doSomething();
        Lib6Core2 lib6core2;
        lib6core2.doSomething();
        Lib7Api1 lib7api1;
        lib7api1.doSomething();
        Lib7Api2 lib7api2;
        lib7api2.doSomething();
        Lib7Api3 lib7api3;
        lib7api3.doSomething();
        Lib6ImplImpl11Impl lib6implimpl11impl;
        lib6implimpl11impl.doSomething();
        Lib6ImplImpl12Api1 lib6implimpl12api1;
        lib6implimpl12api1.doSomething();
        Lib6ImplImpl12Api2 lib6implimpl12api2;
        lib6implimpl12api2.doSomething();
        Lib6ImplImpl12Api3 lib6implimpl12api3;
        lib6implimpl12api3.doSomething();
        visited = 1;
    }
}

