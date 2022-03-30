// GENERATED SOURCE FILE

#include "lib14api1_private.h"
#include "lib14api1_impl.h"
#include "lib15api1.h"
#include "lib14impl.h"
#include "lib15api2.h"
#include "lib15api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14api1impl6impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl6impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl6impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl6impl4(int a, int b) {
    return a + b;
}

int Lib14Api1Impl6Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api1Impl6Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api1Impl6Impl" << std::endl;
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api1Impl6Core1 lib14api1impl6core1;
        lib14api1impl6core1.doSomething();
        Lib14Api1Impl6Core2 lib14api1impl6core2;
        lib14api1impl6core2.doSomething();
        Lib14Api1Impl7Api1 lib14api1impl7api1;
        lib14api1impl7api1.doSomething();
        Lib14Api1Impl7Api2 lib14api1impl7api2;
        lib14api1impl7api2.doSomething();
        Lib14Api1Impl7Api3 lib14api1impl7api3;
        lib14api1impl7api3.doSomething();
        visited = 1;
    }
}

