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
int lib6implimpl32api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6implimpl32api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6implimpl32api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6implimpl32api24(int a, int b) {
    return a + b;
}

int Lib6ImplImpl32Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib6ImplImpl32Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6ImplImpl32Api2" << std::endl;
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
        Lib6ImplImpl32Impl lib6implimpl32impl;
        lib6implimpl32impl.doSomething();
        Lib6ImplImpl33Api1 lib6implimpl33api1;
        lib6implimpl33api1.doSomething();
        Lib6ImplImpl33Api2 lib6implimpl33api2;
        lib6implimpl33api2.doSomething();
        Lib6ImplImpl33Api3 lib6implimpl33api3;
        lib6implimpl33api3.doSomething();
        visited = 1;
    }
}

