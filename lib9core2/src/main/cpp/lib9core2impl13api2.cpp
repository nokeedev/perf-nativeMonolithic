// GENERATED SOURCE FILE

#include "lib9core2_private.h"
#include "lib9core2_impl.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib9core2impl13api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl13api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl13api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib9core2impl13api24(int a, int b) {
    return a + b;
}

int Lib9Core2Impl13Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib9Core2Impl13Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib9Core2Impl13Api2" << std::endl;
        Lib9Core2Impl13Impl lib9core2impl13impl;
        lib9core2impl13impl.doSomething();
        Lib9Core2Impl14Api1 lib9core2impl14api1;
        lib9core2impl14api1.doSomething();
        Lib9Core2Impl14Api2 lib9core2impl14api2;
        lib9core2impl14api2.doSomething();
        Lib9Core2Impl14Api3 lib9core2impl14api3;
        lib9core2impl14api3.doSomething();
        visited = 1;
    }
}

