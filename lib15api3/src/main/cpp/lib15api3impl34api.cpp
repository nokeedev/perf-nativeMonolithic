// GENERATED SOURCE FILE

#include "lib15api3_private.h"
#include "lib15api3_impl.h"
#include "lib15impl.h"
#include "lib16api1.h"
#include "lib16api2.h"
#include "lib16api3.h"
#include <iostream>
#include <stdio.h>

/*
 * Here is a function.
 */
int lib15api3impl34api1(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api3impl34api2(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api3impl34api3(int a, int b) {
    return a + b;
}

/*
 * Here is a function.
 */
int lib15api3impl34api4(int a, int b) {
    return a + b;
}

int Lib15Api3Impl34Api::visited = 0;

/*
 * Here is a function.
 */
void Lib15Api3Impl34Api::doSomething() {
    if (visited == 0) {
        std::cout << "visit Lib15Api3Impl34Api" << std::endl;
        Lib15Impl lib15impl;
        lib15impl.doSomething();
        Lib16Api1 lib16api1;
        lib16api1.doSomething();
        Lib16Api2 lib16api2;
        lib16api2.doSomething();
        Lib16Api3 lib16api3;
        lib16api3.doSomething();
        Lib15Api3Impl34Core lib15api3impl34core;
        lib15api3impl34core.doSomething();
        visited = 1;
    }
}

