// GENERATED SOURCE FILE

#include "lib15api2_private.h"
#include "lib15api2_impl.h"
#include "lib15impl.h"
#include "lib16api1.h"
#include "lib16api2.h"
#include "lib16api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15api2impl2impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl2impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl2impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl2impl4(int a, int b) {
    return a + b;
}

int Lib15Api2Impl2Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib15Api2Impl2Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Api2Impl2Impl" << std::endl;
        Lib15Impl lib15impl;
        lib15impl.doSomething();
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15Api2Impl2Core1 lib15api2impl2core1;
        lib15api2impl2core1.doSomething();
        Lib15Api2Impl2Core2 lib15api2impl2core2;
        lib15api2impl2core2.doSomething();
        Lib15Api2Impl3Api1 lib15api2impl3api1;
        lib15api2impl3api1.doSomething();
        Lib15Api2Impl3Api2 lib15api2impl3api2;
        lib15api2impl3api2.doSomething();
        Lib15Api2Impl3Api3 lib15api2impl3api3;
        lib15api2impl3api3.doSomething();
        visited = 1;
    }
}

