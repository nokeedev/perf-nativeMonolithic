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
int lib15api1impl20impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl20impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl20impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl20impl4(int a, int b) {
    return a + b;
}

int Lib15Api1Impl20Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib15Api1Impl20Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Api1Impl20Impl" << std::endl;
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib15Impl lib15impl;
        lib15impl.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15Api1Impl20Core1 lib15api1impl20core1;
        lib15api1impl20core1.doSomething();
        Lib15Api1Impl20Core2 lib15api1impl20core2;
        lib15api1impl20core2.doSomething();
        Lib15Api1Impl21Api1 lib15api1impl21api1;
        lib15api1impl21api1.doSomething();
        Lib15Api1Impl21Api2 lib15api1impl21api2;
        lib15api1impl21api2.doSomething();
        Lib15Api1Impl21Api3 lib15api1impl21api3;
        lib15api1impl21api3.doSomething();
        visited = 1;
    }
}

