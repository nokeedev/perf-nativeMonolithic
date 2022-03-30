// GENERATED SOURCE FILE

#include "lib8api3_private.h"
#include "lib8api3_impl.h"
#include "lib8impl.h"
#include "lib9api1.h"
#include "lib9api2.h"
#include "lib9api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8api3impl12impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api3impl12impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api3impl12impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api3impl12impl4(int a, int b) {
    return a + b;
}

int Lib8Api3Impl12Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib8Api3Impl12Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Api3Impl12Impl" << std::endl;
        Lib8Impl lib8impl;
        lib8impl.doSomething();
        Lib9Api1 lib9api1;
        lib9api1.doSomething();
        Lib9Api2 lib9api2;
        lib9api2.doSomething();
        Lib9Api3 lib9api3;
        lib9api3.doSomething();
        Lib8Api3Impl12Core1 lib8api3impl12core1;
        lib8api3impl12core1.doSomething();
        Lib8Api3Impl12Core2 lib8api3impl12core2;
        lib8api3impl12core2.doSomething();
        Lib8Api3Impl13Api1 lib8api3impl13api1;
        lib8api3impl13api1.doSomething();
        Lib8Api3Impl13Api2 lib8api3impl13api2;
        lib8api3impl13api2.doSomething();
        Lib8Api3Impl13Api3 lib8api3impl13api3;
        lib8api3impl13api3.doSomething();
        visited = 1;
    }
}

