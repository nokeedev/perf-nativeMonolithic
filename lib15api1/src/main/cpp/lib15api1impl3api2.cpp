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
int lib15api1impl3api21(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl3api22(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl3api23(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl3api24(int a, int b) {
    return a + b;
}

int Lib15Api1Impl3Api2::visited = 0;

/*
 * Here is a function.
 */
void Lib15Api1Impl3Api2::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Api1Impl3Api2" << std::endl;
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib15Impl lib15impl;
        lib15impl.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15Api1Impl3Impl lib15api1impl3impl;
        lib15api1impl3impl.doSomething();
        Lib15Api1Impl4Api1 lib15api1impl4api1;
        lib15api1impl4api1.doSomething();
        Lib15Api1Impl4Api2 lib15api1impl4api2;
        lib15api1impl4api2.doSomething();
        Lib15Api1Impl4Api3 lib15api1impl4api3;
        lib15api1impl4api3.doSomething();
        visited = 1;
    }
}

