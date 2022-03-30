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
int lib8api3impl29impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api3impl29impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api3impl29impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api3impl29impl4(int a, int b) {
    return a + b;
}

int Lib8Api3Impl29Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib8Api3Impl29Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Api3Impl29Impl" << std::endl;
        Lib8Impl lib8impl;
        lib8impl.doSomething();
        Lib9Api1 lib9api1;
        lib9api1.doSomething();
        Lib9Api2 lib9api2;
        lib9api2.doSomething();
        Lib9Api3 lib9api3;
        lib9api3.doSomething();
        Lib8Api3Impl29Core1 lib8api3impl29core1;
        lib8api3impl29core1.doSomething();
        Lib8Api3Impl29Core2 lib8api3impl29core2;
        lib8api3impl29core2.doSomething();
        Lib8Api3Impl30Api1 lib8api3impl30api1;
        lib8api3impl30api1.doSomething();
        Lib8Api3Impl30Api2 lib8api3impl30api2;
        lib8api3impl30api2.doSomething();
        Lib8Api3Impl30Api3 lib8api3impl30api3;
        lib8api3impl30api3.doSomething();
        visited = 1;
    }
}

