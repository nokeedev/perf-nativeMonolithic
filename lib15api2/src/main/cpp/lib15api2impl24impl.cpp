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
int lib15api2impl24impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl24impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl24impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl24impl4(int a, int b) {
    return a + b;
}

int Lib15Api2Impl24Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib15Api2Impl24Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Api2Impl24Impl" << std::endl;
        Lib15Impl lib15impl;
        lib15impl.doSomething();
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15Api2Impl24Core1 lib15api2impl24core1;
        lib15api2impl24core1.doSomething();
        Lib15Api2Impl24Core2 lib15api2impl24core2;
        lib15api2impl24core2.doSomething();
        Lib15Api2Impl25Api1 lib15api2impl25api1;
        lib15api2impl25api1.doSomething();
        Lib15Api2Impl25Api2 lib15api2impl25api2;
        lib15api2impl25api2.doSomething();
        Lib15Api2Impl25Api3 lib15api2impl25api3;
        lib15api2impl25api3.doSomething();
        visited = 1;
    }
}

