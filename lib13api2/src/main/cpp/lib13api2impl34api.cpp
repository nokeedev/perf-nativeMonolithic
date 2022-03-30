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
int lib13api2impl34api1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api2impl34api2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api2impl34api3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api2impl34api4(int a, int b) {
    return a + b;
}

int Lib13Api2Impl34Api::visited = 0;

/*
 * Here is a function.
 */
void Lib13Api2Impl34Api::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Api2Impl34Api" << std::endl;
        Lib13Impl lib13impl;
        lib13impl.doSomething();
        Lib14Api1 lib14api1;
        lib14api1.doSomething();
        Lib14Api2 lib14api2;
        lib14api2.doSomething();
        Lib14Api3 lib14api3;
        lib14api3.doSomething();
        Lib13Api2Impl34Core lib13api2impl34core;
        lib13api2impl34core.doSomething();
        visited = 1;
    }
}

