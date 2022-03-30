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
int lib15api1impl34api1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl34api2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl34api3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api1impl34api4(int a, int b) {
    return a + b;
}

int Lib15Api1Impl34Api::visited = 0;

/*
 * Here is a function.
 */
void Lib15Api1Impl34Api::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Api1Impl34Api" << std::endl;
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib15Impl lib15impl;
        lib15impl.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15Api1Impl34Core lib15api1impl34core;
        lib15api1impl34core.doSomething();
        visited = 1;
    }
}

