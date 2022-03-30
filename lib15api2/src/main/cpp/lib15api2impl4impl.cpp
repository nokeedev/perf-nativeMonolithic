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
int lib15api2impl4impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl4impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl4impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl4impl4(int a, int b) {
    return a + b;
}

int Lib15Api2Impl4Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib15Api2Impl4Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Api2Impl4Impl" << std::endl;
        Lib15Impl lib15impl;
        lib15impl.doSomething();
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15Api2Impl4Core1 lib15api2impl4core1;
        lib15api2impl4core1.doSomething();
        Lib15Api2Impl4Core2 lib15api2impl4core2;
        lib15api2impl4core2.doSomething();
        Lib15Api2Impl5Api1 lib15api2impl5api1;
        lib15api2impl5api1.doSomething();
        Lib15Api2Impl5Api2 lib15api2impl5api2;
        lib15api2impl5api2.doSomething();
        Lib15Api2Impl5Api3 lib15api2impl5api3;
        lib15api2impl5api3.doSomething();
        visited = 1;
    }
}

