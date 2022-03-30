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
int lib13api1impl23impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api1impl23impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api1impl23impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api1impl23impl4(int a, int b) {
    return a + b;
}

int Lib13Api1Impl23Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib13Api1Impl23Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Api1Impl23Impl" << std::endl;
        Lib14Api1 lib14api1;
        lib14api1.doSomething();
        Lib13Impl lib13impl;
        lib13impl.doSomething();
        Lib14Api2 lib14api2;
        lib14api2.doSomething();
        Lib14Api3 lib14api3;
        lib14api3.doSomething();
        Lib13Api1Impl23Core1 lib13api1impl23core1;
        lib13api1impl23core1.doSomething();
        Lib13Api1Impl23Core2 lib13api1impl23core2;
        lib13api1impl23core2.doSomething();
        Lib13Api1Impl24Api1 lib13api1impl24api1;
        lib13api1impl24api1.doSomething();
        Lib13Api1Impl24Api2 lib13api1impl24api2;
        lib13api1impl24api2.doSomething();
        Lib13Api1Impl24Api3 lib13api1impl24api3;
        lib13api1impl24api3.doSomething();
        visited = 1;
    }
}

