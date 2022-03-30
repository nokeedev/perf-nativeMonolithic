// GENERATED SOURCE FILE

#include "lib13api3_private.h"
#include "lib13api3_impl.h"
#include "lib13impl.h"
#include "lib14api1.h"
#include "lib14api2.h"
#include "lib14api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13api3impl12impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api3impl12impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api3impl12impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api3impl12impl4(int a, int b) {
    return a + b;
}

int Lib13Api3Impl12Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib13Api3Impl12Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Api3Impl12Impl" << std::endl;
        Lib13Impl lib13impl;
        lib13impl.doSomething();
        Lib14Api1 lib14api1;
        lib14api1.doSomething();
        Lib14Api2 lib14api2;
        lib14api2.doSomething();
        Lib14Api3 lib14api3;
        lib14api3.doSomething();
        Lib13Api3Impl12Core1 lib13api3impl12core1;
        lib13api3impl12core1.doSomething();
        Lib13Api3Impl12Core2 lib13api3impl12core2;
        lib13api3impl12core2.doSomething();
        Lib13Api3Impl13Api1 lib13api3impl13api1;
        lib13api3impl13api1.doSomething();
        Lib13Api3Impl13Api2 lib13api3impl13api2;
        lib13api3impl13api2.doSomething();
        Lib13Api3Impl13Api3 lib13api3impl13api3;
        lib13api3impl13api3.doSomething();
        visited = 1;
    }
}

