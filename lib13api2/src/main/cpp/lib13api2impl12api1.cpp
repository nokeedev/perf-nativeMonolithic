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
int lib13api2impl12api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api2impl12api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api2impl12api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api2impl12api14(int a, int b) {
    return a + b;
}

int Lib13Api2Impl12Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib13Api2Impl12Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Api2Impl12Api1" << std::endl;
        Lib13Impl lib13impl;
        lib13impl.doSomething();
        Lib14Api1 lib14api1;
        lib14api1.doSomething();
        Lib14Api2 lib14api2;
        lib14api2.doSomething();
        Lib14Api3 lib14api3;
        lib14api3.doSomething();
        Lib13Api2Impl13Api1 lib13api2impl13api1;
        lib13api2impl13api1.doSomething();
        Lib13Api2Impl12Impl lib13api2impl12impl;
        lib13api2impl12impl.doSomething();
        Lib13Api2Impl13Api2 lib13api2impl13api2;
        lib13api2impl13api2.doSomething();
        Lib13Api2Impl13Api3 lib13api2impl13api3;
        lib13api2impl13api3.doSomething();
        visited = 1;
    }
}

