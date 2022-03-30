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
int lib15api1impl18impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl18impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl18impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl18impl4(int a, int b) {
    return a + b;
}

int Lib15Api1Impl18Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib15Api1Impl18Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Api1Impl18Impl" << std::endl;
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib15Impl lib15impl;
        lib15impl.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15Api1Impl18Core1 lib15api1impl18core1;
        lib15api1impl18core1.doSomething();
        Lib15Api1Impl18Core2 lib15api1impl18core2;
        lib15api1impl18core2.doSomething();
        Lib15Api1Impl19Api1 lib15api1impl19api1;
        lib15api1impl19api1.doSomething();
        Lib15Api1Impl19Api2 lib15api1impl19api2;
        lib15api1impl19api2.doSomething();
        Lib15Api1Impl19Api3 lib15api1impl19api3;
        lib15api1impl19api3.doSomething();
        visited = 1;
    }
}

