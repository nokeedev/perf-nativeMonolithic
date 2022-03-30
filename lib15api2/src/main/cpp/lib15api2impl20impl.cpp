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
int lib15api2impl20impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl20impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl20impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl20impl4(int a, int b) {
    return a + b;
}

int Lib15Api2Impl20Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib15Api2Impl20Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Api2Impl20Impl" << std::endl;
        Lib15Impl lib15impl;
        lib15impl.doSomething();
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15Api2Impl20Core1 lib15api2impl20core1;
        lib15api2impl20core1.doSomething();
        Lib15Api2Impl20Core2 lib15api2impl20core2;
        lib15api2impl20core2.doSomething();
        Lib15Api2Impl21Api1 lib15api2impl21api1;
        lib15api2impl21api1.doSomething();
        Lib15Api2Impl21Api2 lib15api2impl21api2;
        lib15api2impl21api2.doSomething();
        Lib15Api2Impl21Api3 lib15api2impl21api3;
        lib15api2impl21api3.doSomething();
        visited = 1;
    }
}

