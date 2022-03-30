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
int lib13api1impl15impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api1impl15impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api1impl15impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api1impl15impl4(int a, int b) {
    return a + b;
}

int Lib13Api1Impl15Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib13Api1Impl15Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Api1Impl15Impl" << std::endl;
        Lib14Api1 lib14api1;
        lib14api1.doSomething();
        Lib13Impl lib13impl;
        lib13impl.doSomething();
        Lib14Api2 lib14api2;
        lib14api2.doSomething();
        Lib14Api3 lib14api3;
        lib14api3.doSomething();
        Lib13Api1Impl15Core1 lib13api1impl15core1;
        lib13api1impl15core1.doSomething();
        Lib13Api1Impl15Core2 lib13api1impl15core2;
        lib13api1impl15core2.doSomething();
        Lib13Api1Impl16Api1 lib13api1impl16api1;
        lib13api1impl16api1.doSomething();
        Lib13Api1Impl16Api2 lib13api1impl16api2;
        lib13api1impl16api2.doSomething();
        Lib13Api1Impl16Api3 lib13api1impl16api3;
        lib13api1impl16api3.doSomething();
        visited = 1;
    }
}

