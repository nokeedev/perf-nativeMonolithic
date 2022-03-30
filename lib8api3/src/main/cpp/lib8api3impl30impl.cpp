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
int lib8api3impl30impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api3impl30impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api3impl30impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api3impl30impl4(int a, int b) {
    return a + b;
}

int Lib8Api3Impl30Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib8Api3Impl30Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Api3Impl30Impl" << std::endl;
        Lib8Impl lib8impl;
        lib8impl.doSomething();
        Lib9Api1 lib9api1;
        lib9api1.doSomething();
        Lib9Api2 lib9api2;
        lib9api2.doSomething();
        Lib9Api3 lib9api3;
        lib9api3.doSomething();
        Lib8Api3Impl30Core1 lib8api3impl30core1;
        lib8api3impl30core1.doSomething();
        Lib8Api3Impl30Core2 lib8api3impl30core2;
        lib8api3impl30core2.doSomething();
        Lib8Api3Impl31Api1 lib8api3impl31api1;
        lib8api3impl31api1.doSomething();
        Lib8Api3Impl31Api2 lib8api3impl31api2;
        lib8api3impl31api2.doSomething();
        Lib8Api3Impl31Api3 lib8api3impl31api3;
        lib8api3impl31api3.doSomething();
        visited = 1;
    }
}

