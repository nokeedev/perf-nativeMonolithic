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
int lib15api2impl19impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl19impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl19impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl19impl4(int a, int b) {
    return a + b;
}

int Lib15Api2Impl19Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib15Api2Impl19Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Api2Impl19Impl" << std::endl;
        Lib15Impl lib15impl;
        lib15impl.doSomething();
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15Api2Impl19Core1 lib15api2impl19core1;
        lib15api2impl19core1.doSomething();
        Lib15Api2Impl19Core2 lib15api2impl19core2;
        lib15api2impl19core2.doSomething();
        Lib15Api2Impl20Api1 lib15api2impl20api1;
        lib15api2impl20api1.doSomething();
        Lib15Api2Impl20Api2 lib15api2impl20api2;
        lib15api2impl20api2.doSomething();
        Lib15Api2Impl20Api3 lib15api2impl20api3;
        lib15api2impl20api3.doSomething();
        visited = 1;
    }
}

