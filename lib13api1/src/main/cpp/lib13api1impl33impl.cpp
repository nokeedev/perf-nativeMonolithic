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
int lib13api1impl33impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api1impl33impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api1impl33impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api1impl33impl4(int a, int b) {
    return a + b;
}

int Lib13Api1Impl33Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib13Api1Impl33Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Api1Impl33Impl" << std::endl;
        Lib14Api1 lib14api1;
        lib14api1.doSomething();
        Lib13Impl lib13impl;
        lib13impl.doSomething();
        Lib14Api2 lib14api2;
        lib14api2.doSomething();
        Lib14Api3 lib14api3;
        lib14api3.doSomething();
        Lib13Api1Impl33Core lib13api1impl33core;
        lib13api1impl33core.doSomething();
        Lib13Api1Impl34Api lib13api1impl34api;
        lib13api1impl34api.doSomething();
        visited = 1;
    }
}

