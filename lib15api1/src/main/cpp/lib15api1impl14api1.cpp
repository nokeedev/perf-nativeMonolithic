// GENERATED SOURCE FILE

#include "lib15api1_private.h"
#include "lib15api1_impl.h"
#include "lib16api1.h"
#include "lib15impl.h"
#include "lib16api2.h"
#include "lib16api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15api1impl14api11(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl14api12(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl14api13(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl14api14(int a, int b) {
    return a + b;
}

int Lib15Api1Impl14Api1::visited = 0;

/*
 * Here is a function.
 */
void Lib15Api1Impl14Api1::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Api1Impl14Api1" << std::endl;
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib15Impl lib15impl;
        lib15impl.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15Api1Impl15Api1 lib15api1impl15api1;
        lib15api1impl15api1.doSomething();
        Lib15Api1Impl14Impl lib15api1impl14impl;
        lib15api1impl14impl.doSomething();
        Lib15Api1Impl15Api2 lib15api1impl15api2;
        lib15api1impl15api2.doSomething();
        Lib15Api1Impl15Api3 lib15api1impl15api3;
        lib15api1impl15api3.doSomething();
        visited = 1;
    }
}

