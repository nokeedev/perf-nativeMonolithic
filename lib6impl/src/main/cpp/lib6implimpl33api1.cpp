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
int lib6implimpl33api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6implimpl33api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6implimpl33api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6implimpl33api14(int a, int b) {
    return a + b;
}

int Lib6ImplImpl33Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib6ImplImpl33Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6ImplImpl33Api1" << std::endl;
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
        Lib6ImplImpl34Api lib6implimpl34api;
        lib6implimpl34api.doSomething();
        Lib6ImplImpl33Impl lib6implimpl33impl;
        lib6implimpl33impl.doSomething();
        visited = 1;
    }
}

