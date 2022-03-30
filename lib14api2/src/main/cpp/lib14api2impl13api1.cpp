// GENERATED SOURCE FILE

#include "lib14api2_private.h"
#include "lib14api2_impl.h"
#include "lib14impl.h"
#include "lib15api1.h"
#include "lib15api2.h"
#include "lib15api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14api2impl13api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api2impl13api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api2impl13api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api2impl13api14(int a, int b) {
    return a + b;
}

int Lib14Api2Impl13Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api2Impl13Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api2Impl13Api1" << std::endl;
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api2Impl14Api1 lib14api2impl14api1;
        lib14api2impl14api1.doSomething();
        Lib14Api2Impl13Impl lib14api2impl13impl;
        lib14api2impl13impl.doSomething();
        Lib14Api2Impl14Api2 lib14api2impl14api2;
        lib14api2impl14api2.doSomething();
        Lib14Api2Impl14Api3 lib14api2impl14api3;
        lib14api2impl14api3.doSomething();
        visited = 1;
    }
}

