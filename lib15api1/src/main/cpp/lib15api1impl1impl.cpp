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
int lib15api1impl1impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl1impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl1impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl1impl4(int a, int b) {
    return a + b;
}

int Lib15Api1Impl1Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib15Api1Impl1Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Api1Impl1Impl" << std::endl;
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib15Impl lib15impl;
        lib15impl.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15Api1Impl1Core1 lib15api1impl1core1;
        lib15api1impl1core1.doSomething();
        Lib15Api1Impl1Core2 lib15api1impl1core2;
        lib15api1impl1core2.doSomething();
        Lib15Api1Impl2Api1 lib15api1impl2api1;
        lib15api1impl2api1.doSomething();
        Lib15Api1Impl2Api2 lib15api1impl2api2;
        lib15api1impl2api2.doSomething();
        Lib15Api1Impl2Api3 lib15api1impl2api3;
        lib15api1impl2api3.doSomething();
        visited = 1;
    }
}

