// GENERATED SOURCE FILE

#include "lib7core2_private.h"
#include "lib7core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib7core2impl13api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl13api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl13api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib7core2impl13api24(int a, int b) {
    return a + b;
}

int Lib7Core2Impl13Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib7Core2Impl13Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib7Core2Impl13Api2" << std::endl;
        Lib7Core2Impl13Impl lib7core2impl13impl;
        lib7core2impl13impl.doSomething();
        Lib7Core2Impl14Api1 lib7core2impl14api1;
        lib7core2impl14api1.doSomething();
        Lib7Core2Impl14Api2 lib7core2impl14api2;
        lib7core2impl14api2.doSomething();
        Lib7Core2Impl14Api3 lib7core2impl14api3;
        lib7core2impl14api3.doSomething();
        visited = 1;
    }
}

