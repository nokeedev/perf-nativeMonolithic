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
int lib15api2impl25api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl25api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl25api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl25api14(int a, int b) {
    return a + b;
}

int Lib15Api2Impl25Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib15Api2Impl25Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Api2Impl25Api1" << std::endl;
        Lib15Impl lib15impl;
        lib15impl.doSomething();
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15Api2Impl26Api1 lib15api2impl26api1;
        lib15api2impl26api1.doSomething();
        Lib15Api2Impl25Impl lib15api2impl25impl;
        lib15api2impl25impl.doSomething();
        Lib15Api2Impl26Api2 lib15api2impl26api2;
        lib15api2impl26api2.doSomething();
        Lib15Api2Impl26Api3 lib15api2impl26api3;
        lib15api2impl26api3.doSomething();
        visited = 1;
    }
}

