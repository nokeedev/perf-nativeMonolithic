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
int lib13implimpl30api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13implimpl30api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13implimpl30api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13implimpl30api14(int a, int b) {
    return a + b;
}

int Lib13ImplImpl30Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib13ImplImpl30Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13ImplImpl30Api1" << std::endl;
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
        Lib13ImplImpl31Api1 lib13implimpl31api1;
        lib13implimpl31api1.doSomething();
        Lib13ImplImpl30Impl lib13implimpl30impl;
        lib13implimpl30impl.doSomething();
        Lib13ImplImpl31Api2 lib13implimpl31api2;
        lib13implimpl31api2.doSomething();
        Lib13ImplImpl31Api3 lib13implimpl31api3;
        lib13implimpl31api3.doSomething();
        visited = 1;
    }
}

