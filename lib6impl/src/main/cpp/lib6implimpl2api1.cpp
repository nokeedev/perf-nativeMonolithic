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
int lib6implimpl2api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6implimpl2api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6implimpl2api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6implimpl2api14(int a, int b) {
    return a + b;
}

int Lib6ImplImpl2Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib6ImplImpl2Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6ImplImpl2Api1" << std::endl;
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
        Lib6ImplImpl3Api1 lib6implimpl3api1;
        lib6implimpl3api1.doSomething();
        Lib6ImplImpl2Impl lib6implimpl2impl;
        lib6implimpl2impl.doSomething();
        Lib6ImplImpl3Api2 lib6implimpl3api2;
        lib6implimpl3api2.doSomething();
        Lib6ImplImpl3Api3 lib6implimpl3api3;
        lib6implimpl3api3.doSomething();
        visited = 1;
    }
}

