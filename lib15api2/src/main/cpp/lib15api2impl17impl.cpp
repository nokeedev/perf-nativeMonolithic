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
int lib15api2impl17impl1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl17impl2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl17impl3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl17impl4(int a, int b) {
    return a + b;
}

int Lib15Api2Impl17Impl::visited = 0;

/*
 * Here is a function.
 */
void Lib15Api2Impl17Impl::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Api2Impl17Impl" << std::endl;
        Lib15Impl lib15impl;
        lib15impl.doSomething();
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15Api2Impl17Core1 lib15api2impl17core1;
        lib15api2impl17core1.doSomething();
        Lib15Api2Impl17Core2 lib15api2impl17core2;
        lib15api2impl17core2.doSomething();
        Lib15Api2Impl18Api1 lib15api2impl18api1;
        lib15api2impl18api1.doSomething();
        Lib15Api2Impl18Api2 lib15api2impl18api2;
        lib15api2impl18api2.doSomething();
        Lib15Api2Impl18Api3 lib15api2impl18api3;
        lib15api2impl18api3.doSomething();
        visited = 1;
    }
}

