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
int lib15api2impl30api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl30api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl30api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl30api34(int a, int b) {
    return a + b;
}

int Lib15Api2Impl30Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib15Api2Impl30Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Api2Impl30Api3" << std::endl;
        Lib15Impl lib15impl;
        lib15impl.doSomething();
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15Api2Impl30Impl lib15api2impl30impl;
        lib15api2impl30impl.doSomething();
        Lib15Api2Impl31Api1 lib15api2impl31api1;
        lib15api2impl31api1.doSomething();
        Lib15Api2Impl31Api2 lib15api2impl31api2;
        lib15api2impl31api2.doSomething();
        Lib15Api2Impl31Api3 lib15api2impl31api3;
        lib15api2impl31api3.doSomething();
        visited = 1;
    }
}

