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
int lib6implimpl30api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6implimpl30api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6implimpl30api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6implimpl30api34(int a, int b) {
    return a + b;
}

int Lib6ImplImpl30Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib6ImplImpl30Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6ImplImpl30Api3" << std::endl;
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
        Lib6ImplImpl30Impl lib6implimpl30impl;
        lib6implimpl30impl.doSomething();
        Lib6ImplImpl31Api1 lib6implimpl31api1;
        lib6implimpl31api1.doSomething();
        Lib6ImplImpl31Api2 lib6implimpl31api2;
        lib6implimpl31api2.doSomething();
        Lib6ImplImpl31Api3 lib6implimpl31api3;
        lib6implimpl31api3.doSomething();
        visited = 1;
    }
}

