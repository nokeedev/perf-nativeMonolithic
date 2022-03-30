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
int lib8api3impl7impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api3impl7impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api3impl7impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api3impl7impl4(int a, int b) {
    return a + b;
}

int Lib8Api3Impl7Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib8Api3Impl7Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Api3Impl7Impl" << std::endl;
        Lib8Impl lib8impl;
        lib8impl.doSomething();
        Lib9Api1 lib9api1;
        lib9api1.doSomething();
        Lib9Api2 lib9api2;
        lib9api2.doSomething();
        Lib9Api3 lib9api3;
        lib9api3.doSomething();
        Lib8Api3Impl7Core1 lib8api3impl7core1;
        lib8api3impl7core1.doSomething();
        Lib8Api3Impl7Core2 lib8api3impl7core2;
        lib8api3impl7core2.doSomething();
        Lib8Api3Impl8Api1 lib8api3impl8api1;
        lib8api3impl8api1.doSomething();
        Lib8Api3Impl8Api2 lib8api3impl8api2;
        lib8api3impl8api2.doSomething();
        Lib8Api3Impl8Api3 lib8api3impl8api3;
        lib8api3impl8api3.doSomething();
        visited = 1;
    }
}

