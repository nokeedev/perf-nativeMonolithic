// GENERATED SOURCE FILE

#include "lib15api1_private.h"
#include "lib15api1_impl.h"
#include "lib16api1.h"
#include "lib15impl.h"
#include "lib16api2.h"
#include "lib16api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15api1impl8impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl8impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl8impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl8impl4(int a, int b) {
    return a + b;
}

int Lib15Api1Impl8Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib15Api1Impl8Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Api1Impl8Impl" << std::endl;
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib15Impl lib15impl;
        lib15impl.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15Api1Impl8Core1 lib15api1impl8core1;
        lib15api1impl8core1.doSomething();
        Lib15Api1Impl8Core2 lib15api1impl8core2;
        lib15api1impl8core2.doSomething();
        Lib15Api1Impl9Api1 lib15api1impl9api1;
        lib15api1impl9api1.doSomething();
        Lib15Api1Impl9Api2 lib15api1impl9api2;
        lib15api1impl9api2.doSomething();
        Lib15Api1Impl9Api3 lib15api1impl9api3;
        lib15api1impl9api3.doSomething();
        visited = 1;
    }
}

