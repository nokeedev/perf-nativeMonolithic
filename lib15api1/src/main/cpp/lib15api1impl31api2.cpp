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
int lib15api1impl31api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl31api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl31api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl31api24(int a, int b) {
    return a + b;
}

int Lib15Api1Impl31Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib15Api1Impl31Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Api1Impl31Api2" << std::endl;
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib15Impl lib15impl;
        lib15impl.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15Api1Impl31Impl lib15api1impl31impl;
        lib15api1impl31impl.doSomething();
        Lib15Api1Impl32Api1 lib15api1impl32api1;
        lib15api1impl32api1.doSomething();
        Lib15Api1Impl32Api2 lib15api1impl32api2;
        lib15api1impl32api2.doSomething();
        Lib15Api1Impl32Api3 lib15api1impl32api3;
        lib15api1impl32api3.doSomething();
        visited = 1;
    }
}

