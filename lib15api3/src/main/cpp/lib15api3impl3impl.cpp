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
int lib15api3impl3impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api3impl3impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api3impl3impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api3impl3impl4(int a, int b) {
    return a + b;
}

int Lib15Api3Impl3Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib15Api3Impl3Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Api3Impl3Impl" << std::endl;
        Lib15Impl lib15impl;
        lib15impl.doSomething();
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15Api3Impl3Core1 lib15api3impl3core1;
        lib15api3impl3core1.doSomething();
        Lib15Api3Impl3Core2 lib15api3impl3core2;
        lib15api3impl3core2.doSomething();
        Lib15Api3Impl4Api1 lib15api3impl4api1;
        lib15api3impl4api1.doSomething();
        Lib15Api3Impl4Api2 lib15api3impl4api2;
        lib15api3impl4api2.doSomething();
        Lib15Api3Impl4Api3 lib15api3impl4api3;
        lib15api3impl4api3.doSomething();
        visited = 1;
    }
}

