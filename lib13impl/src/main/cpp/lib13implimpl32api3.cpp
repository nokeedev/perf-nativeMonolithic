// GENERATED SOURCE FILE

#include "lib13impl_private.h"
#include "lib13impl_impl.h"
#include "lib13core1.h"
#include "lib13core2.h"
#include "lib14api1.h"
#include "lib14api2.h"
#include "lib14api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13implimpl32api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13implimpl32api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13implimpl32api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13implimpl32api34(int a, int b) {
    return a + b;
}

int Lib13ImplImpl32Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib13ImplImpl32Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13ImplImpl32Api3" << std::endl;
        Lib13Core1 lib13core1;
        lib13core1.doSomething();
        Lib13Core2 lib13core2;
        lib13core2.doSomething();
        Lib14Api1 lib14api1;
        lib14api1.doSomething();
        Lib14Api2 lib14api2;
        lib14api2.doSomething();
        Lib14Api3 lib14api3;
        lib14api3.doSomething();
        Lib13ImplImpl32Impl lib13implimpl32impl;
        lib13implimpl32impl.doSomething();
        Lib13ImplImpl33Api1 lib13implimpl33api1;
        lib13implimpl33api1.doSomething();
        Lib13ImplImpl33Api2 lib13implimpl33api2;
        lib13implimpl33api2.doSomething();
        Lib13ImplImpl33Api3 lib13implimpl33api3;
        lib13implimpl33api3.doSomething();
        visited = 1;
    }
}

