// GENERATED SOURCE FILE

#include "lib6api3_private.h"
#include "lib6api3_impl.h"
#include "lib6impl.h"
#include "lib7api1.h"
#include "lib7api2.h"
#include "lib7api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6api3impl12impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api3impl12impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api3impl12impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api3impl12impl4(int a, int b) {
    return a + b;
}

int Lib6Api3Impl12Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib6Api3Impl12Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Api3Impl12Impl" << std::endl;
        Lib6Impl lib6impl;
        lib6impl.doSomething();
        Lib7Api1 lib7api1;
        lib7api1.doSomething();
        Lib7Api2 lib7api2;
        lib7api2.doSomething();
        Lib7Api3 lib7api3;
        lib7api3.doSomething();
        Lib6Api3Impl12Core1 lib6api3impl12core1;
        lib6api3impl12core1.doSomething();
        Lib6Api3Impl12Core2 lib6api3impl12core2;
        lib6api3impl12core2.doSomething();
        Lib6Api3Impl13Api1 lib6api3impl13api1;
        lib6api3impl13api1.doSomething();
        Lib6Api3Impl13Api2 lib6api3impl13api2;
        lib6api3impl13api2.doSomething();
        Lib6Api3Impl13Api3 lib6api3impl13api3;
        lib6api3impl13api3.doSomething();
        visited = 1;
    }
}

