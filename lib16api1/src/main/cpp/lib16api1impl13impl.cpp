// GENERATED SOURCE FILE

#include "lib16api1_private.h"
#include "lib16api1_impl.h"
#include "lib17api1.h"
#include "lib16impl.h"
#include "lib17api2.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib16api1impl13impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api1impl13impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api1impl13impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api1impl13impl4(int a, int b) {
    return a + b;
}

int Lib16Api1Impl13Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api1Impl13Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api1Impl13Impl" << std::endl;
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib16Impl lib16impl;
        lib16impl.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16Api1Impl13Core1 lib16api1impl13core1;
        lib16api1impl13core1.doSomething();
        Lib16Api1Impl13Core2 lib16api1impl13core2;
        lib16api1impl13core2.doSomething();
        Lib16Api1Impl14Api1 lib16api1impl14api1;
        lib16api1impl14api1.doSomething();
        Lib16Api1Impl14Api2 lib16api1impl14api2;
        lib16api1impl14api2.doSomething();
        Lib16Api1Impl14Api3 lib16api1impl14api3;
        lib16api1impl14api3.doSomething();
        visited = 1;
    }
}

