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
int lib15api2impl28api31(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl28api32(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl28api33(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api2impl28api34(int a, int b) {
    return a + b;
}

int Lib15Api2Impl28Api3::visited = 0;

/*
 * Here is a function.
 */
void Lib15Api2Impl28Api3::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Api2Impl28Api3" << std::endl;
        Lib15Impl lib15impl;
        lib15impl.doSomething();
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15Api2Impl28Impl lib15api2impl28impl;
        lib15api2impl28impl.doSomething();
        Lib15Api2Impl29Api1 lib15api2impl29api1;
        lib15api2impl29api1.doSomething();
        Lib15Api2Impl29Api2 lib15api2impl29api2;
        lib15api2impl29api2.doSomething();
        Lib15Api2Impl29Api3 lib15api2impl29api3;
        lib15api2impl29api3.doSomething();
        visited = 1;
    }
}

