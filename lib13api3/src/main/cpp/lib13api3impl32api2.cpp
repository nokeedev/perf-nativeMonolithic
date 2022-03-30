// GENERATED SOURCE FILE

#include "lib13api3_private.h"
#include "lib13api3_impl.h"
#include "lib13impl.h"
#include "lib14api1.h"
#include "lib14api2.h"
#include "lib14api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib13api3impl32api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api3impl32api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api3impl32api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib13api3impl32api24(int a, int b) {
    return a + b;
}

int Lib13Api3Impl32Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib13Api3Impl32Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib13Api3Impl32Api2" << std::endl;
        Lib13Impl lib13impl;
        lib13impl.doSomething();
        Lib14Api1 lib14api1;
        lib14api1.doSomething();
        Lib14Api2 lib14api2;
        lib14api2.doSomething();
        Lib14Api3 lib14api3;
        lib14api3.doSomething();
        Lib13Api3Impl32Impl lib13api3impl32impl;
        lib13api3impl32impl.doSomething();
        Lib13Api3Impl33Api1 lib13api3impl33api1;
        lib13api3impl33api1.doSomething();
        Lib13Api3Impl33Api2 lib13api3impl33api2;
        lib13api3impl33api2.doSomething();
        Lib13Api3Impl33Api3 lib13api3impl33api3;
        lib13api3impl33api3.doSomething();
        visited = 1;
    }
}

