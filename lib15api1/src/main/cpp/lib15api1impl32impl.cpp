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
int lib15api1impl32impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl32impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl32impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl32impl4(int a, int b) {
    return a + b;
}

int Lib15Api1Impl32Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib15Api1Impl32Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Api1Impl32Impl" << std::endl;
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib15Impl lib15impl;
        lib15impl.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15Api1Impl32Core1 lib15api1impl32core1;
        lib15api1impl32core1.doSomething();
        Lib15Api1Impl32Core2 lib15api1impl32core2;
        lib15api1impl32core2.doSomething();
        Lib15Api1Impl33Api1 lib15api1impl33api1;
        lib15api1impl33api1.doSomething();
        Lib15Api1Impl33Api2 lib15api1impl33api2;
        lib15api1impl33api2.doSomething();
        Lib15Api1Impl33Api3 lib15api1impl33api3;
        lib15api1impl33api3.doSomething();
        visited = 1;
    }
}

