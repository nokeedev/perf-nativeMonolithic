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
int lib14api1impl31api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl31api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl31api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl31api24(int a, int b) {
    return a + b;
}

int Lib14Api1Impl31Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api1Impl31Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api1Impl31Api2" << std::endl;
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api1Impl31Impl lib14api1impl31impl;
        lib14api1impl31impl.doSomething();
        Lib14Api1Impl32Api1 lib14api1impl32api1;
        lib14api1impl32api1.doSomething();
        Lib14Api1Impl32Api2 lib14api1impl32api2;
        lib14api1impl32api2.doSomething();
        Lib14Api1Impl32Api3 lib14api1impl32api3;
        lib14api1impl32api3.doSomething();
        visited = 1;
    }
}

