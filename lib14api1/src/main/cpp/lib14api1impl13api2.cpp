// GENERATED SOURCE FILE

#include "lib14api1_private.h"
#include "lib14api1_impl.h"
#include "lib15api1.h"
#include "lib14impl.h"
#include "lib15api2.h"
#include "lib15api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib14api1impl13api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl13api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl13api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl13api24(int a, int b) {
    return a + b;
}

int Lib14Api1Impl13Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api1Impl13Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api1Impl13Api2" << std::endl;
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api1Impl13Impl lib14api1impl13impl;
        lib14api1impl13impl.doSomething();
        Lib14Api1Impl14Api1 lib14api1impl14api1;
        lib14api1impl14api1.doSomething();
        Lib14Api1Impl14Api2 lib14api1impl14api2;
        lib14api1impl14api2.doSomething();
        Lib14Api1Impl14Api3 lib14api1impl14api3;
        lib14api1impl14api3.doSomething();
        visited = 1;
    }
}

