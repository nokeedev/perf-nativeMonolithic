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
int lib14api1impl3api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl3api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl3api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib14api1impl3api24(int a, int b) {
    return a + b;
}

int Lib14Api1Impl3Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib14Api1Impl3Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib14Api1Impl3Api2" << std::endl;
        Lib15Api1 lib15api1;
        lib15api1.doSomething();
        Lib14Impl lib14impl;
        lib14impl.doSomething();
        Lib15Api2 lib15api2;
        lib15api2.doSomething();
        Lib15Api3 lib15api3;
        lib15api3.doSomething();
        Lib14Api1Impl3Impl lib14api1impl3impl;
        lib14api1impl3impl.doSomething();
        Lib14Api1Impl4Api1 lib14api1impl4api1;
        lib14api1impl4api1.doSomething();
        Lib14Api1Impl4Api2 lib14api1impl4api2;
        lib14api1impl4api2.doSomething();
        Lib14Api1Impl4Api3 lib14api1impl4api3;
        lib14api1impl4api3.doSomething();
        visited = 1;
    }
}

