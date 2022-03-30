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
int lib13implimpl34api1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13implimpl34api2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13implimpl34api3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13implimpl34api4(int a, int b) {
    return a + b;
}

int Lib13ImplImpl34Api::visited = 0;

/*
 * Here is a function.
 */
void Lib13ImplImpl34Api::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13ImplImpl34Api" << std::endl;
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
        Lib13ImplImpl34Core lib13implimpl34core;
        lib13implimpl34core.doSomething();
        visited = 1;
    }
}

