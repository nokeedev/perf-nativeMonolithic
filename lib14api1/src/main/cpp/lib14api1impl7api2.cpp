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
int lib14api1impl7api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl7api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl7api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl7api24(int a, int b) {
    return a + b;
}

int Lib14Api1Impl7Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api1Impl7Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api1Impl7Api2" << std::endl;
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api1Impl7Impl lib14api1impl7impl;
        lib14api1impl7impl.doSomething();
        Lib14Api1Impl8Api1 lib14api1impl8api1;
        lib14api1impl8api1.doSomething();
        Lib14Api1Impl8Api2 lib14api1impl8api2;
        lib14api1impl8api2.doSomething();
        Lib14Api1Impl8Api3 lib14api1impl8api3;
        lib14api1impl8api3.doSomething();
        visited = 1;
    }
}

