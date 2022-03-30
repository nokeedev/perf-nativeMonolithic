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
int lib16api1impl2impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api1impl2impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api1impl2impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib16api1impl2impl4(int a, int b) {
    return a + b;
}

int Lib16Api1Impl2Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib16Api1Impl2Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib16Api1Impl2Impl" << std::endl;
        Lib17Api1 lib17api1;
        lib17api1.doSomething();
        Lib16Impl lib16impl;
        lib16impl.doSomething();
        Lib17Api2 lib17api2;
        lib17api2.doSomething();
        Lib16Api1Impl2Core1 lib16api1impl2core1;
        lib16api1impl2core1.doSomething();
        Lib16Api1Impl2Core2 lib16api1impl2core2;
        lib16api1impl2core2.doSomething();
        Lib16Api1Impl3Api1 lib16api1impl3api1;
        lib16api1impl3api1.doSomething();
        Lib16Api1Impl3Api2 lib16api1impl3api2;
        lib16api1impl3api2.doSomething();
        Lib16Api1Impl3Api3 lib16api1impl3api3;
        lib16api1impl3api3.doSomething();
        visited = 1;
    }
}

