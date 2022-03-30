// GENERATED SOURCE FILE

#include "lib13api1_private.h"
#include "lib13api1_impl.h"
#include "lib14api1.h"
#include "lib13impl.h"
#include "lib14api2.h"
#include "lib14api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13api1impl6impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api1impl6impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api1impl6impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api1impl6impl4(int a, int b) {
    return a + b;
}

int Lib13Api1Impl6Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib13Api1Impl6Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Api1Impl6Impl" << std::endl;
        Lib14Api1 lib14api1;
        lib14api1.doSomething();
        Lib13Impl lib13impl;
        lib13impl.doSomething();
        Lib14Api2 lib14api2;
        lib14api2.doSomething();
        Lib14Api3 lib14api3;
        lib14api3.doSomething();
        Lib13Api1Impl6Core1 lib13api1impl6core1;
        lib13api1impl6core1.doSomething();
        Lib13Api1Impl6Core2 lib13api1impl6core2;
        lib13api1impl6core2.doSomething();
        Lib13Api1Impl7Api1 lib13api1impl7api1;
        lib13api1impl7api1.doSomething();
        Lib13Api1Impl7Api2 lib13api1impl7api2;
        lib13api1impl7api2.doSomething();
        Lib13Api1Impl7Api3 lib13api1impl7api3;
        lib13api1impl7api3.doSomething();
        visited = 1;
    }
}

