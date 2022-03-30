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
int lib15api1impl24impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl24impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl24impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl24impl4(int a, int b) {
    return a + b;
}

int Lib15Api1Impl24Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib15Api1Impl24Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Api1Impl24Impl" << std::endl;
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib15Impl lib15impl;
        lib15impl.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15Api1Impl24Core1 lib15api1impl24core1;
        lib15api1impl24core1.doSomething();
        Lib15Api1Impl24Core2 lib15api1impl24core2;
        lib15api1impl24core2.doSomething();
        Lib15Api1Impl25Api1 lib15api1impl25api1;
        lib15api1impl25api1.doSomething();
        Lib15Api1Impl25Api2 lib15api1impl25api2;
        lib15api1impl25api2.doSomething();
        Lib15Api1Impl25Api3 lib15api1impl25api3;
        lib15api1impl25api3.doSomething();
        visited = 1;
    }
}

