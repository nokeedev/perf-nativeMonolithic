// GENERATED SOURCE FILE

#include "lib15api3_private.h"
#include "lib15api3_impl.h"
#include "lib15impl.h"
#include "lib16api1.h"
#include "lib16api2.h"
#include "lib16api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15api3impl6impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api3impl6impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api3impl6impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api3impl6impl4(int a, int b) {
    return a + b;
}

int Lib15Api3Impl6Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib15Api3Impl6Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Api3Impl6Impl" << std::endl;
        Lib15Impl lib15impl;
        lib15impl.doSomething();
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15Api3Impl6Core1 lib15api3impl6core1;
        lib15api3impl6core1.doSomething();
        Lib15Api3Impl6Core2 lib15api3impl6core2;
        lib15api3impl6core2.doSomething();
        Lib15Api3Impl7Api1 lib15api3impl7api1;
        lib15api3impl7api1.doSomething();
        Lib15Api3Impl7Api2 lib15api3impl7api2;
        lib15api3impl7api2.doSomething();
        Lib15Api3Impl7Api3 lib15api3impl7api3;
        lib15api3impl7api3.doSomething();
        visited = 1;
    }
}

