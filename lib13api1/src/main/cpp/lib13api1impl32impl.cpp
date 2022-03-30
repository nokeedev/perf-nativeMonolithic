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
int lib13api1impl32impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api1impl32impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api1impl32impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api1impl32impl4(int a, int b) {
    return a + b;
}

int Lib13Api1Impl32Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib13Api1Impl32Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Api1Impl32Impl" << std::endl;
        Lib14Api1 lib14api1;
        lib14api1.doSomething();
        Lib13Impl lib13impl;
        lib13impl.doSomething();
        Lib14Api2 lib14api2;
        lib14api2.doSomething();
        Lib14Api3 lib14api3;
        lib14api3.doSomething();
        Lib13Api1Impl32Core1 lib13api1impl32core1;
        lib13api1impl32core1.doSomething();
        Lib13Api1Impl32Core2 lib13api1impl32core2;
        lib13api1impl32core2.doSomething();
        Lib13Api1Impl33Api1 lib13api1impl33api1;
        lib13api1impl33api1.doSomething();
        Lib13Api1Impl33Api2 lib13api1impl33api2;
        lib13api1impl33api2.doSomething();
        Lib13Api1Impl33Api3 lib13api1impl33api3;
        lib13api1impl33api3.doSomething();
        visited = 1;
    }
}

