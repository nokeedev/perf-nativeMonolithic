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
int lib14api1impl2api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl2api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl2api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl2api24(int a, int b) {
    return a + b;
}

int Lib14Api1Impl2Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api1Impl2Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api1Impl2Api2" << std::endl;
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api1Impl2Impl lib14api1impl2impl;
        lib14api1impl2impl.doSomething();
        Lib14Api1Impl3Api1 lib14api1impl3api1;
        lib14api1impl3api1.doSomething();
        Lib14Api1Impl3Api2 lib14api1impl3api2;
        lib14api1impl3api2.doSomething();
        Lib14Api1Impl3Api3 lib14api1impl3api3;
        lib14api1impl3api3.doSomething();
        visited = 1;
    }
}

