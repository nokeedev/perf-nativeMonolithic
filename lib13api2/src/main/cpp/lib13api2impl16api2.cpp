// GENERATED SOURCE FILE

#include "lib13api2_private.h"
#include "lib13api2_impl.h"
#include "lib13impl.h"
#include "lib14api1.h"
#include "lib14api2.h"
#include "lib14api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13api2impl16api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api2impl16api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api2impl16api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api2impl16api24(int a, int b) {
    return a + b;
}

int Lib13Api2Impl16Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib13Api2Impl16Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Api2Impl16Api2" << std::endl;
        Lib13Impl lib13impl;
        lib13impl.doSomething();
        Lib14Api1 lib14api1;
        lib14api1.doSomething();
        Lib14Api2 lib14api2;
        lib14api2.doSomething();
        Lib14Api3 lib14api3;
        lib14api3.doSomething();
        Lib13Api2Impl16Impl lib13api2impl16impl;
        lib13api2impl16impl.doSomething();
        Lib13Api2Impl17Api1 lib13api2impl17api1;
        lib13api2impl17api1.doSomething();
        Lib13Api2Impl17Api2 lib13api2impl17api2;
        lib13api2impl17api2.doSomething();
        Lib13Api2Impl17Api3 lib13api2impl17api3;
        lib13api2impl17api3.doSomething();
        visited = 1;
    }
}

