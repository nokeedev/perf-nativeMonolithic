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
int lib14api1impl20impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl20impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl20impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl20impl4(int a, int b) {
    return a + b;
}

int Lib14Api1Impl20Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api1Impl20Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api1Impl20Impl" << std::endl;
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api1Impl20Core1 lib14api1impl20core1;
        lib14api1impl20core1.doSomething();
        Lib14Api1Impl20Core2 lib14api1impl20core2;
        lib14api1impl20core2.doSomething();
        Lib14Api1Impl21Api1 lib14api1impl21api1;
        lib14api1impl21api1.doSomething();
        Lib14Api1Impl21Api2 lib14api1impl21api2;
        lib14api1impl21api2.doSomething();
        Lib14Api1Impl21Api3 lib14api1impl21api3;
        lib14api1impl21api3.doSomething();
        visited = 1;
    }
}

