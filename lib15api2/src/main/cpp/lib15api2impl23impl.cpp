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
int lib15api2impl23impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl23impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl23impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl23impl4(int a, int b) {
    return a + b;
}

int Lib15Api2Impl23Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib15Api2Impl23Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Api2Impl23Impl" << std::endl;
        Lib15Impl lib15impl;
        lib15impl.doSomething();
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15Api2Impl23Core1 lib15api2impl23core1;
        lib15api2impl23core1.doSomething();
        Lib15Api2Impl23Core2 lib15api2impl23core2;
        lib15api2impl23core2.doSomething();
        Lib15Api2Impl24Api1 lib15api2impl24api1;
        lib15api2impl24api1.doSomething();
        Lib15Api2Impl24Api2 lib15api2impl24api2;
        lib15api2impl24api2.doSomething();
        Lib15Api2Impl24Api3 lib15api2impl24api3;
        lib15api2impl24api3.doSomething();
        visited = 1;
    }
}

