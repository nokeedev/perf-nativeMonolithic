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
int lib13implimpl28api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13implimpl28api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13implimpl28api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13implimpl28api14(int a, int b) {
    return a + b;
}

int Lib13ImplImpl28Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib13ImplImpl28Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13ImplImpl28Api1" << std::endl;
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
        Lib13ImplImpl29Api1 lib13implimpl29api1;
        lib13implimpl29api1.doSomething();
        Lib13ImplImpl28Impl lib13implimpl28impl;
        lib13implimpl28impl.doSomething();
        Lib13ImplImpl29Api2 lib13implimpl29api2;
        lib13implimpl29api2.doSomething();
        Lib13ImplImpl29Api3 lib13implimpl29api3;
        lib13implimpl29api3.doSomething();
        visited = 1;
    }
}

