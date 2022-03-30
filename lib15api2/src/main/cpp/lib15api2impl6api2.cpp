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
int lib15api2impl6api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl6api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl6api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl6api24(int a, int b) {
    return a + b;
}

int Lib15Api2Impl6Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib15Api2Impl6Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Api2Impl6Api2" << std::endl;
        Lib15Impl lib15impl;
        lib15impl.doSomething();
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15Api2Impl6Impl lib15api2impl6impl;
        lib15api2impl6impl.doSomething();
        Lib15Api2Impl7Api1 lib15api2impl7api1;
        lib15api2impl7api1.doSomething();
        Lib15Api2Impl7Api2 lib15api2impl7api2;
        lib15api2impl7api2.doSomething();
        Lib15Api2Impl7Api3 lib15api2impl7api3;
        lib15api2impl7api3.doSomething();
        visited = 1;
    }
}

