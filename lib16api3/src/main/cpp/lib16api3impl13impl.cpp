// GENERATED SOURCE FILE

#include "lib16api3_private.h"
#include "lib16api3_impl.h"
#include "lib16impl.h"
#include "lib17api1.h"
#include "lib17api2.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16api3impl13impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl13impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl13impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api3impl13impl4(int a, int b) {
    return a + b;
}

int Lib16Api3Impl13Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api3Impl13Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api3Impl13Impl" << std::endl;
        Lib16Impl lib16impl;
        lib16impl.doSomething();
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16Api3Impl13Core1 lib16api3impl13core1;
        lib16api3impl13core1.doSomething();
        Lib16Api3Impl13Core2 lib16api3impl13core2;
        lib16api3impl13core2.doSomething();
        Lib16Api3Impl14Api1 lib16api3impl14api1;
        lib16api3impl14api1.doSomething();
        Lib16Api3Impl14Api2 lib16api3impl14api2;
        lib16api3impl14api2.doSomething();
        Lib16Api3Impl14Api3 lib16api3impl14api3;
        lib16api3impl14api3.doSomething();
        visited = 1;
    }
}

