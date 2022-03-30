// GENERATED SOURCE FILE

#include "lib6api1_private.h"
#include "lib6api1_impl.h"
#include "lib7api1.h"
#include "lib6impl.h"
#include "lib7api2.h"
#include "lib7api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib6api1impl13impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl13impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl13impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib6api1impl13impl4(int a, int b) {
    return a + b;
}

int Lib6Api1Impl13Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib6Api1Impl13Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib6Api1Impl13Impl" << std::endl;
        Lib7Api1 lib7api1;
        lib7api1.doSomething();
        Lib6Impl lib6impl;
        lib6impl.doSomething();
        Lib7Api2 lib7api2;
        lib7api2.doSomething();
        Lib7Api3 lib7api3;
        lib7api3.doSomething();
        Lib6Api1Impl13Core1 lib6api1impl13core1;
        lib6api1impl13core1.doSomething();
        Lib6Api1Impl13Core2 lib6api1impl13core2;
        lib6api1impl13core2.doSomething();
        Lib6Api1Impl14Api1 lib6api1impl14api1;
        lib6api1impl14api1.doSomething();
        Lib6Api1Impl14Api2 lib6api1impl14api2;
        lib6api1impl14api2.doSomething();
        Lib6Api1Impl14Api3 lib6api1impl14api3;
        lib6api1impl14api3.doSomething();
        visited = 1;
    }
}

