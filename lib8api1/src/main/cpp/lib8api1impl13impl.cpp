// GENERATED SOURCE FILE

#include "lib8api1_private.h"
#include "lib8api1_impl.h"
#include "lib9api1.h"
#include "lib8impl.h"
#include "lib9api2.h"
#include "lib9api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib8api1impl13impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api1impl13impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api1impl13impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib8api1impl13impl4(int a, int b) {
    return a + b;
}

int Lib8Api1Impl13Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib8Api1Impl13Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib8Api1Impl13Impl" << std::endl;
        Lib9Api1 lib9api1;
        lib9api1.doSomething();
        Lib8Impl lib8impl;
        lib8impl.doSomething();
        Lib9Api2 lib9api2;
        lib9api2.doSomething();
        Lib9Api3 lib9api3;
        lib9api3.doSomething();
        Lib8Api1Impl13Core1 lib8api1impl13core1;
        lib8api1impl13core1.doSomething();
        Lib8Api1Impl13Core2 lib8api1impl13core2;
        lib8api1impl13core2.doSomething();
        Lib8Api1Impl14Api1 lib8api1impl14api1;
        lib8api1impl14api1.doSomething();
        Lib8Api1Impl14Api2 lib8api1impl14api2;
        lib8api1impl14api2.doSomething();
        Lib8Api1Impl14Api3 lib8api1impl14api3;
        lib8api1impl14api3.doSomething();
        visited = 1;
    }
}

