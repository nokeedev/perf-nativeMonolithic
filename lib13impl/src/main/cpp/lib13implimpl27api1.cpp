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
int lib13implimpl27api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13implimpl27api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13implimpl27api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13implimpl27api14(int a, int b) {
    return a + b;
}

int Lib13ImplImpl27Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib13ImplImpl27Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13ImplImpl27Api1" << std::endl;
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
        Lib13ImplImpl28Api1 lib13implimpl28api1;
        lib13implimpl28api1.doSomething();
        Lib13ImplImpl27Impl lib13implimpl27impl;
        lib13implimpl27impl.doSomething();
        Lib13ImplImpl28Api2 lib13implimpl28api2;
        lib13implimpl28api2.doSomething();
        Lib13ImplImpl28Api3 lib13implimpl28api3;
        lib13implimpl28api3.doSomething();
        visited = 1;
    }
}

