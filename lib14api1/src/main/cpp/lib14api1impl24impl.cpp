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
int lib14api1impl24impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl24impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl24impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl24impl4(int a, int b) {
    return a + b;
}

int Lib14Api1Impl24Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api1Impl24Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api1Impl24Impl" << std::endl;
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api1Impl24Core1 lib14api1impl24core1;
        lib14api1impl24core1.doSomething();
        Lib14Api1Impl24Core2 lib14api1impl24core2;
        lib14api1impl24core2.doSomething();
        Lib14Api1Impl25Api1 lib14api1impl25api1;
        lib14api1impl25api1.doSomething();
        Lib14Api1Impl25Api2 lib14api1impl25api2;
        lib14api1impl25api2.doSomething();
        Lib14Api1Impl25Api3 lib14api1impl25api3;
        lib14api1impl25api3.doSomething();
        visited = 1;
    }
}

